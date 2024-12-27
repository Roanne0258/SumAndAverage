#ifndef UTILS_H
#define UTILS_H

void inputNumbers(double array[], int& count);
void reset(double array[], int& count);
//void edit(double array[], int count);
//void remove(double array[], int count);


double calculateSum(const double array[], int count);

double calculateAverage(const double array[], int count);

int getValidInput(int min, int max);

void printResults(const double array[], int inputCount, double totalSum, double average);


#endif
