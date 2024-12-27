#include <iostream>
#include <string>
#include "utils.h"
#include "constants.h"
#include "validation.h"

using namespace std;

int getValidInput(int min, int max) {
    cout << "입력할 숫자의 개수를 정하세요. (2~100, 정수만) : ";
    double input;
    while (true) {
        cin >> input;
        if (isInvalidInput()) {
            cout << "문자열 입력은 허용되지 않습니다. 숫자를 다시 입력하세요: ";
        }
        else if (isInteger(input) && input >= min && input <= max) {
            return static_cast<int>(input);
        }
        else {
            cout << min << " 이상 " << max << " 이하의 정수를 입력하세요: ";
        }
    }
}

void inputNumbers(double array[], int& inputCount) {
    int count = 0;

    for (int i = 0; i < inputCount; i++) {
        cout << endl;
        cout << "입력 진행 상황: " << count + 1 << "/" << inputCount << endl;
        cout << "입력값(번호): " ;
        for (int j = 0; j < count; j++) {
            cout << array[j] << "(" << j + 1 << "), ";
        }
        cout << endl;
        cout << "숫자를 입력하세요 : ";

        while (true) {
            string input;
            cin >> input;

            //// 명령어 처리
            //if (input == "reset") {
            //    i = 0;
            //    count = 0;
            //    reset(array, inputCount);
            //    inputCount = getValidInput(MIN_COUNT, MAX_COUNT);
            //    array[inputCount];
            //    break;
            //}

            //else if (input == "edit") {
            //    edit(array, count);
            //}
            //else if (input == "remove") {
            //    remove(array, count);
            //}
            //else {
                // 숫자 처리
                try {
                    double value = std::stod(input); // 문자열을 숫자로 변환
                    array[count] = value;
                    count++;
                    break;
                }
                catch (...) {
                    //cout << "잘못된 입력입니다. 숫자나 명령어를 입력하세요.\n";
                    cout << "문자열 입력은 허용되지 않습니다. 숫자를 다시 입력하세요: ";
                }
            //}
        }
    }
}

//void reset(double array[], int& inputCount) {
//    fill(array, array + MAX_COUNT, 0.0); // 배열 초기화
//    inputCount = 0; // 입력 개수 초기화
//    cout << "입력이 초기화되었습니다! 새로 입력을 시작합니다." << endl;
//}

//void edit(double array[], int inputCount) {
//
//    return;
//}
//
//void remove(double array[], int inputCount) {
//
//    return;
//}

double calculateSum(const double array[], int inputValues) {
    double sum = 0;
    for (int i = 0; i < inputValues; i++) {
        sum += array[i];
    }
    return sum;
}

double calculateAverage(const double array[], int inputCount) {
    return calculateSum(array, inputCount) / inputCount;
}


void printResults(const double array[], int inputCount, double totalSum, double average) {
    cout << endl << "모든 입력이 완료되었습니다!" << endl;
    cout << "------------------------------" << endl;
    cout << "값: ";
    for (int i = 0; i < inputCount; i++){
        if (i == inputCount - 1) {
            for (int j = 0; j < inputCount; j++) {
                cout << array[j];
                if (j != inputCount - 1) {
                    cout << " + ";
                }
            }
            cout << endl;
        }
    }
    cout << "합: " << totalSum << endl;
    cout << "평균: " << average << endl;
    cout << "------------------------------" << endl;
}

