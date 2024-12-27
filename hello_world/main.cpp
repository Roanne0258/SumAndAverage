#include <iostream>
#include "validation.h"
#include "utils.h"
#include "constants.h"

int main() {
    // �Է� ������ ���� �迭 �� ����
    double inputValues[MAX_COUNT];
    int inputCount = getValidInput(MIN_COUNT, MAX_COUNT);

    // ������ �Է�
    inputNumbers(inputValues, inputCount);

    // �հ� �� ��� ���
    double totalSum = calculateSum(inputValues, inputCount);
    double average = calculateAverage(inputValues, inputCount);

    // ��� ���
    printResults(inputValues, inputCount, totalSum, average);

    return 0;
}