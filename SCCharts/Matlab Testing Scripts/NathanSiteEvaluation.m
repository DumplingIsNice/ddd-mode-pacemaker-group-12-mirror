%% Get Raw Data

dirName = uigetdir();
if (dirName == double(0))
    fprintf("Invalid directory name\n");
    return
end

T0 = readtable(dirName + "/test-0.csv");
T1 = readtable(dirName + "/test-1.csv");
T2 = readtable(dirName + "/test-2.csv");
T3 = readtable(dirName + "/test-3.csv");
T4 = readtable(dirName + "/test-4.csv");

%% Parameter Evaluation

% V SHOULD NOT PACE while (logical OR):
% V->V <= (URI)

% V SHOULD PACE after (logical OR):
% V->V > (AEI + AVI)
% V->V > (LRI)
% A->V > (AVI + AEI + AVI)

% A SHOULD NOT PACE while (logical OR):
% A->A <= 0     % i.e. no restriction

% A SHOULD PACE after (logical OR):
% A->A <= (AVI + AEI)
% V->A <= (LRI + AEI)

% NOTE: 'A->A <= (AVI + AEI)' may be naturally violated if AS occurs soon
% after a V event, and then halts. 

config.AVI_VALUE	= 300;
config.AEI_VALUE   = 800;
config.PVARP_VALUE = 50;
config.VRP_VALUE   = 150;
config.LRI_VALUE   = 950;
config.URI_VALUE   = 900;

config.START_INDEX = 1000;  % Skip n*deltaT settling time.
config.VERBOSE = true;      % Report timing violations in detail.

clc;
diary on;

% START
fprintf('Evaluation of CS303 Pacemaker Assignment Test Outputs: %s\n\n', dirName);
disp(config);

[naturalViolationsT0, pacedViolationsT0] = EvaluateTestCase(T0, 'T0', config);
[naturalViolationsT1, pacedViolationsT1] = EvaluateTestCase(T1, 'T1', config);
[naturalViolationsT2, pacedViolationsT2] = EvaluateTestCase(T2, 'T2', config);
[naturalViolationsT3, pacedViolationsT3] = EvaluateTestCase(T3, 'T3', config);
[naturalViolationsT4, pacedViolationsT4] = EvaluateTestCase(T4, 'T4', config);



totalNaturalViolations = naturalViolationsT0 + naturalViolationsT1 + naturalViolationsT2 + naturalViolationsT3 + naturalViolationsT4;
totalPacedViolations = pacedViolationsT0 + pacedViolationsT1 + pacedViolationsT2 + pacedViolationsT3 + pacedViolationsT4;
fprintf('\n====== OVERALL SUMMARY ======\n');
fprintf('Total NATURAL violations: %f; Total PACED violations: %f\n', totalNaturalViolations, totalPacedViolations);



%% Plot
% [maxTA, maxTV, minTA, minTV] = FindtMinMaxPeriods(T0, START_INDEX);
% disp([maxTA, maxTV, minTA, minTV]);

close all;
PlotVA(T0, 'T0');
PlotVA(T1, 'T1');
PlotVA(T2, 'T2');
PlotVA(T3, 'T3');
PlotVA(T4, 'T4');


diary off;


%% Functions

% Return an array of the differences in time between events, and an array
% of the type of event (S/P) that ended the period (S=+1, P=-1).
function [periodArray, eventTypeArray] = FindEventPeriods(Tdata, col, startIndex)
    % Tdata: [ Time | A | V ]
    
    % Define as arrays
    periodArray = zeros(0);
    eventTypeArray = zeros(0);
    
    prevT = startIndex;
    currentT = startIndex;  
    currentColumn = table2array(Tdata(:,col));

    for i = startIndex:length(currentColumn)
        if currentColumn(i) ~= 0
            prevT = currentT;
            currentT = i;
            periodArray(end+1) = currentT - prevT;

            if currentColumn(i) > 0
                eventTypeArray(end+1) = 1;
            else
                eventTypeArray(end+1) = -1;
            end
        end
    end     
end

% Return an array of the differences in time between two parallel event
% logs.
function [periodAArray, typeAArray, periodVArray, typeVArray] = FindEventDifferencesPeriods(Tdata, startIndex)
    % A -> V -> A -> V
    % If the pacemaker is working correctly this pattern should be
    % maintained.
    % periodAArray is all periods instigated with A (A -> V).
    % periodVArray is all periods instigated with V (V -> A).ly
    % typeXArray is +1 if the period terminated naturally.
    % typeXArray is -1 if the period terminated via pace.

    periodAArray = zeros(0);
    typeAArray = zeros(0);
    periodVArray = zeros(0);
    typeVArray = zeros(0);
    
    prevA = startIndex;
    prevV = startIndex;
    
    A = table2array(Tdata(:,2));
    V = table2array(Tdata(:,3));
    endIndex = length(A);
    
    for i = startIndex:endIndex
        if (A(i) ~= 0)
            periodVArray(end+1) = i - prevV;
            if (A(i) > 0)
                typeVArray(end+1) = 1;
            else
                typeVArray(end+1) = -1;
            end
        end
        if (V(i) ~= 0)
            periodAArray(end+1) = i - prevA;
            if (V(i) > 0)
                typeAArray(end+1) = 1;
            else
                typeAArray(end+1) = -1;
            end
        end
        
        % Write operations last in case of V and A signal in same tick.
        if (A(i) ~= 0)
            prevA = i;
        end
        if (V(i) ~= 0)
            prevV = i;
        end
    end
end

% Reports periods that exceed the upper bound or are below the lower bound.
function [naturalViolations, pacedViolations] = ErrorCheckEventPeriods(periodArray, eventTypeArray, eventTypeString, upperBound, lowerBound, verbose)
    upperViolationSCount = 0;
    upperViolationPCount = 0;
    lowerViolationSCount = 0;
    lowerViolationPCount = 0;

    for i=1:length(periodArray)
        if (periodArray(i) > upperBound)
            if (eventTypeArray(i) > 0)
                currentEventType = 'NATURAL';
                upperViolationSCount = upperViolationSCount + 1;
            else
                currentEventType = 'PACED';
                upperViolationPCount = upperViolationPCount + 1;
            end
            if (verbose == true)
                fprintf('%s upper bound violation; exceeded by %f at period=%f; period terminated %s\n', eventTypeString, (periodArray(i) - upperBound), i, currentEventType);
            end
        elseif (periodArray(i) < lowerBound)
            if (eventTypeArray(i) > 0)
                currentEventType = 'NATURAL';
                lowerViolationSCount = lowerViolationSCount + 1;
            else
                currentEventType = 'PACED';
                lowerViolationPCount = lowerViolationPCount + 1;
            end
            if (verbose == true)
                fprintf('%s lower bound violation; undershot by %f at period=%f; period terminated %s\n', eventTypeString, (lowerBound - periodArray(i)), i, currentEventType);
            end
        end
    end

    fprintf('\nTotal upper bound violations: %f (NATURAL = %f, PACED = %f)\n', (upperViolationSCount + upperViolationPCount), upperViolationSCount, upperViolationPCount);
    fprintf('Total lower bound violations: %f (NATURAL = %f, PACED = %f)\n', (lowerViolationSCount + lowerViolationPCount), lowerViolationSCount, lowerViolationPCount);
    
%     fprintf('NATURAL terminated periods:   %f\n', sum(eventTypeArray(:) == 1));
%     fprintf('PACED terminated periods:     %f\n', sum(eventTypeArray(:) == -1));
%     fprintf('Max period: %f; Min period: %f\n\n', max(periodArray), min(periodArray));

    naturalViolations = lowerViolationSCount + upperViolationSCount;
    pacedViolations = lowerViolationPCount + upperViolationPCount;
end

function [] = PlotVA(Table, nameString)
    figure('Name', nameString);
    
    t = table2array(Table(:,1));
    A = table2array(Table(:,2));
    V = table2array(Table(:,3));

    subplot(2,1,1);
    plot(t,V, 'b');
    xlabel('t');
    ylabel('VS/VP Response');

    subplot(2,1,2);
    plot(t,A, 'r');
    xlabel('t');
    ylabel('AS/AP Response');
end

% Print a comprehensive evaluation of each table test case.
function [totalNaturalViolations, totalPacedViolations] = EvaluateTestCase(Table, tableNameString, config)
    fprintf('\n=====================================================\n');
    fprintf('%s Evaluation\n\n', tableNameString);

    totalNaturalViolations = 0;
    totalPacedViolations = 0;

    % V->V
    [periodArray, eventTypeArray] = FindEventPeriods(Table, 3, config.START_INDEX);
    fprintf('%s: V->V:', tableNameString);
    [naturalViolations, pacedViolations] = ErrorCheckEventPeriods(periodArray, eventTypeArray, 'RI', config.LRI_VALUE, config.URI_VALUE, config.VERBOSE);
        % LRI should not be exceeded. URI may only be exceeded by NATURAL.
    totalNaturalViolations = totalNaturalViolations + naturalViolations;
    totalPacedViolations = totalPacedViolations + pacedViolations;
    [naturalViolations, pacedViolations] = ErrorCheckEventPeriods(periodArray, eventTypeArray, 'AEI + AVI', config.AEI_VALUE + config.AVI_VALUE, 0, config.VERBOSE);
        % AEI + AVI should not be exceeded. Lower bound is placeholder.
    totalNaturalViolations = totalNaturalViolations + naturalViolations;
    totalPacedViolations = totalPacedViolations + pacedViolations;

    % A->A
    [periodArray, eventTypeArray] = FindEventPeriods(Table, 2, config.START_INDEX);
    fprintf('%s: A->A:', tableNameString);
    [naturalViolations, pacedViolations] = ErrorCheckEventPeriods(periodArray, eventTypeArray, 'AVI + AEI', config.AEI_VALUE + config.AVI_VALUE, 0, config.VERBOSE);
        % AVI + AEI should not be exceeded. Lower bound is placeholder.
        % This may be violated when a V signal precedes an A signal by less
        % than PVARP, preventing AVI from resetting. This is intended (if 
        % noteworthy) behaviour.
    totalNaturalViolations = totalNaturalViolations + naturalViolations;
    totalPacedViolations = totalPacedViolations + pacedViolations;

    % A->V and V->A
    [periodAArray, typeAArray, periodVArray, typeVArray] = FindEventDifferencesPeriods(Table, config.START_INDEX);
    fprintf('%s: A->V:', tableNameString);
    [naturalViolations, pacedViolations] = ErrorCheckEventPeriods(periodAArray, typeAArray, 'AVI + AEI + AVI', config.AEI_VALUE + 2*(config.AVI_VALUE), 0, config.VERBOSE);
        % Should not be exceeded. Lower bound is a placeholder.
    totalNaturalViolations = totalNaturalViolations + naturalViolations;
    totalPacedViolations = totalPacedViolations + pacedViolations;

    fprintf('%s: V->A:', tableNameString);
    [naturalViolations, pacedViolations] = ErrorCheckEventPeriods(periodVArray, typeVArray, 'LRI + AEI', config.LRI_VALUE + config.AEI_VALUE, 0, config.VERBOSE);
        % Should not be exceeded. Lower bound is a placeholder.
    totalNaturalViolations = totalNaturalViolations + naturalViolations;
    totalPacedViolations = totalPacedViolations + pacedViolations;
end

