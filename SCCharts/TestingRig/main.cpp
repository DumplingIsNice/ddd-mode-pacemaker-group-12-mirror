#include <iostream>
#include <fstream>
#include "library.hpp"

// What are the chars? int
// const variables in SCCharts? - Will be inserted directly - hence no manipulative variable in c

// Custom input reset
void reset_inputs(TickData* d)
{
  (d->AS) = 0;
  (d->VS) = 0;
}

// Author Unknown
// Taken From: http://www.java2s.com/example/cpp/template/create-function-template-to-print-a-range-of-array-element.html
// function template printArray definition
template <typename T>
void printArray(const T *const array, int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << array[i] << ", ";
    }//from   w w  w.  j  a va 2 s  . c om
    std::cout << std::endl;
}
// overloaded printArray
template <typename T>
int printArray(const T *const array, int count, int lowSubscript,
               int highSubscript) {
    if (lowSubscript < 0 || highSubscript >= count ||
        lowSubscript == highSubscript)
        return 0;

    int total = 0;

    for (int i = lowSubscript; i <= highSubscript; ++i, ++total) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return total;
}

#define ARRAY_SIZE 100

// Note: These values began as garbage values
// MUST RESET!!
#define tAVI      data._FSM_Rev3_local_tAVI
#define tAEI      data._FSM_Rev3_local_tAEI
#define tPVARP    data._FSM_Rev3_local__region0_PVARP_tPVARP
#define tVRP      data._FSM_Rev3_local__region1_VRP_tVRP
#define tRI       data._FSM_Rev3_local_tRI

// Note: These values are actually defined in reset(&data)
#define T_PVARP   data.D_T_PVARP
#define T_VRP     data.D_T_VRP
#define T_AEI     data.D_T_AEI
#define T_AVI     data.D_T_AVI
#define T_URI     data.D_T_URI
#define T_LRI     data.D_T_LRI

int main(int, char**) {

    printf("Program Running!\n");

    TickData data;
    reset(&data);

    // Initialize arrays to store paramters at each tick
    // For plotting in excel
    int aAS[ARRAY_SIZE] = {};
    int aAP[ARRAY_SIZE] = {};
    int aVS[ARRAY_SIZE] = {};
    int aVP[ARRAY_SIZE] = {};

    double aAEI[ARRAY_SIZE] = {};
    double aAVI[ARRAY_SIZE] = {};
    double aPVARP[ARRAY_SIZE] = {};
    double aVRP[ARRAY_SIZE] = {};
    double aRI[ARRAY_SIZE] = {};

    // Initialize deltaT parameters
    data.myDeltaT = 1;
    data.deltaT = 1;
    data.sleepT = 0;

    // Setup file to write result in
    std::ofstream matlabFile;
    matlabFile.open ("matlab_data.csv");
    matlabFile << "Time, A, V\n";

    std::ofstream graphFile;
    graphFile.open ("graph_data.csv");
    graphFile << "Tick, AP, VP, AS, VS, AVI, AEI, tPVARP, tVRP, tRI\n";

    // Buffer for writing results
    int aA[ARRAY_SIZE] = {};
    int aV[ARRAY_SIZE] = {};

    int i = 0;
    while(i < ARRAY_SIZE)
    {
      printf("Tick: %d\n", i);
      reset_inputs(&data);
      tick(&data);

      // Log Parameters
      aAS[i] = data.AS;
      aAP[i] = data.AP;
      aVS[i] = data.VS;
      aVP[i] = data.VP;

      aAVI[i] = tAVI;
      aAEI[i] = tAEI;
      aPVARP[i] = tPVARP;
      aVRP[i] = tVRP;
      aRI[i] = tRI;

      printf("sleepT: %f \n", data.sleepT);
      printf("AS: %d | AP: %d \n", data.AS, data.AP);
      printf("VS: %d | VP: %d \n", data.VS, data.VP);
      printf("Ri: %f\n", tRI);
      printf("AVI: %f\n", tAVI);
      printf("AEI: %f\n", tAEI);
      printf("tPVARP: %f\n", tPVARP);
      printf("tVRP: %f\n", tVRP);
      printf("################################################\n");

      // Writing to a .csv file
      aA[i] = aAS[i] || aAP[i];
      aV[i] = aVS[i] || aVP[i];

      matlabFile << i+1 << "," << aA[i] << "," << aV[i] << "\n";

      graphFile << i+1 << "," << aAP[i] << "," << aVP[i] << "," << aAS[i] << "," << aVS[i] << "," << aAVI[i] << "," << aAEI[i] << "," << aPVARP[i] << "," << aVRP[i] << "," << aRI[i] << "\n";
      i += 1;
    }

    matlabFile.close();
    graphFile.close();

    // printf("################ DATA FOR EXCEL ################\n");
    // printf("################# INPUT/OUTPUT #################\n");
    // printf("AP:, ");
    // printArray(aAP, ARRAY_SIZE);
    // printf("VP:, ");
    // printArray(aVP, ARRAY_SIZE);
    // printf("AS:, ");
    // printArray(aAS, ARRAY_SIZE);
    // printf("VP:, ");
    // printArray(aVS, ARRAY_SIZE);
    // printf("################# TIMERS ################# \n");
    // printf("AVI:, ");
    // printArray(aAVI, ARRAY_SIZE);
    // printf("AEI:, ");
    // printArray(aAEI, ARRAY_SIZE);
    // printf("tPVARP:, ");
    // printArray(aPVARP, ARRAY_SIZE);
    // printf("tVRP:, ");
    // printArray(aVRP, ARRAY_SIZE);
    // printf("tRI:, ");
    // printArray(aRI, ARRAY_SIZE);

    return 0;

}

