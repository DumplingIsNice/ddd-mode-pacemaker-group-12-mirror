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
AVI_VALUE	= 300;
AEI_VALUE   = 800;
PVARP_VALUE = 50;
VRP_VALUE   = 150;
LRI_VALUE   = 950;
URI_VALUE   = 900;

START_INDEX = 2000;

[maxTA, maxTV, minTA, minTV] = FindtMinMaxPeriods(T0, START_INDEX);

[periodArray, eventTypeArray] = FindEventPeriods(T0, 3, START_INDEX);   % get events for V

ErrorCheckEventPeriods(periodArray, eventTypeArray, 'RI', LRI_VALUE, URI_VALUE);
% LRI should not be exceeded. URI may only be exceeded by NATURAL.

ErrorCheckEventPeriods(periodArray, eventTypeArray, 'RI', LRI_VALUE, 0);


%% Plot
disp([maxTA, maxTV, minTA, minTV]);

close
figure
t = table2array(T0(:,1));
A = table2array(T0(:,2));
V = table2array(T0(:,3));

subplot(2,1,1);
plot(t,V, 'b');
xlabel('t');
ylabel('VS/VP Response');

subplot(2,1,2);
plot(t,A, 'r');
xlabel('t');
ylabel('AS/AP Response');


% figure
% histogram(diffArray);


%% GetMinMaxPeriods()
function [maxTA, maxTV, minTA, minTV, diffArray] = FindtMinMaxPeriods(Table, startIndex)
    % Table: [ Time | A | V ]
    % deltaT is fixed at 1ms

    for col = 2:3
        currentMaxT = 0;
        currentMinT = 1000; % arbitrarily large
        prevT = startIndex;
        currentT = startIndex;
        
        for i = startIndex:size(Table(:,1),1)
           if table2array(Table(i, col)) ~= 0
               % Event has occurred!
               % Get time since last A/V event, and store it if it is a new
               % min/max.
               prevT = currentT;
               currentT = (i - 1);
               currentMaxT = max(currentMaxT, currentT - prevT);
               currentMinT = min(currentMinT, currentT - prevT);
               
               % TODO:
               % Store (currentT - prevT) for all events, and tag polarity.
           end
       end
       
       if col == 2
           maxTA = currentMaxT;
           minTA = currentMinT;
       else
           maxTV = currentMaxT;
           minTV = currentMinT;
       end
    
    end
end

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

function [] = ErrorCheckEventPeriods(periodArray, eventTypeArray, eventTypeString, upperBound, lowerBound)
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
            fprintf('%s upper bound violation; exceeded by %f; period terminated %s\n', eventTypeString, (periodArray(i) - upperBound), currentEventType);
        elseif (periodArray(i) < lowerBound)
            if (eventTypeArray(i) > 0)
                currentEventType = 'NATURAL';
                lowerViolationSCount = lowerViolationSCount + 1;
            else
                currentEventType = 'PACED';
                lowerViolationPCount = lowerViolationPCount + 1;
            end
            fprintf('%s lower bound violation; undershot by %f; period terminated %s\n', eventTypeString, (lowerBound - periodArray(i)), currentEventType);
        end
    end

    fprintf('\nTotal upper bound violations: %f (NATURAL = %f, PACED = %f)\n', (upperViolationSCount + upperViolationPCount), upperViolationSCount, upperViolationPCount);
    fprintf('Total lower bound violations: %f (NATURAL = %f, PACED = %f)\n\n', (lowerViolationSCount + lowerViolationPCount), lowerViolationSCount, lowerViolationPCount);
end

function [] = foo()
    % V should 
    tV <= (AEI + AVI)
    tV <= LRI
    
end


% Get the max and min periods for each event, S/P.
% Histogram in main()? Timing parameter evaluation/check? Visualise timing w/ bars?
