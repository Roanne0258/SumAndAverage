#include <iostream>
#include <limits>
#include "validation.h"

// �Է� ���� ���� Ȯ�� �Լ�:
// ����ڰ� �Է��� ���� ����� Ÿ�԰� ���� �ʰų�,
// ��Ʈ�� ������ �߻��� ��� true�� ��ȯ.
bool isInvalidInput() {
    if (std::cin.fail()) { // ��Ʈ�� ���� �߻�
        std::cin.clear(); // ��Ʈ�� ���� ���� �ʱ�ȭ
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // �߸��� �Է� ����
        return true; // �Է� ����
    }
    return false; // �Է� ����
}


// ���� ���� Ȯ�� �Լ�: value�� �����̸� true�� ��ȯ
bool isInteger(double value) {
    return value == static_cast<int>(value);
}
