#include <iostream>
#include <string>
#include "utils.h"
#include "constants.h"
#include "validation.h"

using namespace std;

int getValidInput(int min, int max) {
    cout << "�Է��� ������ ������ ���ϼ���. (2~100, ������) : ";
    double input;
    while (true) {
        cin >> input;
        if (isInvalidInput()) {
            cout << "���ڿ� �Է��� ������ �ʽ��ϴ�. ���ڸ� �ٽ� �Է��ϼ���: ";
        }
        else if (isInteger(input) && input >= min && input <= max) {
            return static_cast<int>(input);
        }
        else {
            cout << min << " �̻� " << max << " ������ ������ �Է��ϼ���: ";
        }
    }
}

void inputNumbers(double array[], int& inputCount) {
    int count = 0;

    for (int i = 0; i < inputCount; i++) {
        cout << endl;
        cout << "�Է� ���� ��Ȳ: " << count + 1 << "/" << inputCount << endl;
        cout << "�Է°�(��ȣ): " ;
        for (int j = 0; j < count; j++) {
            cout << array[j] << "(" << j + 1 << "), ";
        }
        cout << endl;
        cout << "���ڸ� �Է��ϼ��� : ";

        while (true) {
            string input;
            cin >> input;

            //// ��ɾ� ó��
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
                // ���� ó��
                try {
                    double value = std::stod(input); // ���ڿ��� ���ڷ� ��ȯ
                    array[count] = value;
                    count++;
                    break;
                }
                catch (...) {
                    //cout << "�߸��� �Է��Դϴ�. ���ڳ� ��ɾ �Է��ϼ���.\n";
                    cout << "���ڿ� �Է��� ������ �ʽ��ϴ�. ���ڸ� �ٽ� �Է��ϼ���: ";
                }
            //}
        }
    }
}

//void reset(double array[], int& inputCount) {
//    fill(array, array + MAX_COUNT, 0.0); // �迭 �ʱ�ȭ
//    inputCount = 0; // �Է� ���� �ʱ�ȭ
//    cout << "�Է��� �ʱ�ȭ�Ǿ����ϴ�! ���� �Է��� �����մϴ�." << endl;
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
    cout << endl << "��� �Է��� �Ϸ�Ǿ����ϴ�!" << endl;
    cout << "------------------------------" << endl;
    cout << "��: ";
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
    cout << "��: " << totalSum << endl;
    cout << "���: " << average << endl;
    cout << "------------------------------" << endl;
}

