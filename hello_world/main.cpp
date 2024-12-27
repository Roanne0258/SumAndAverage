#include <iostream>
#include "validation.h"
#include "utils.h"
#include "constants.h"

int main() {
    // 입력 데이터 저장 배열 및 개수
    double inputValues[MAX_COUNT];
    int inputCount = getValidInput(MIN_COUNT, MAX_COUNT);

    // 데이터 입력
    inputNumbers(inputValues, inputCount);

    // 합계 및 평균 계산
    double totalSum = calculateSum(inputValues, inputCount);
    double average = calculateAverage(inputValues, inputCount);

    // 결과 출력
    printResults(inputValues, inputCount, totalSum, average);

    return 0;
}