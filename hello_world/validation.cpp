#include <iostream>
#include <limits>
#include "validation.h"

// 입력 실패 여부 확인 함수:
// 사용자가 입력한 값이 기대한 타입과 맞지 않거나,
// 스트림 오류가 발생한 경우 true를 반환.
bool isInvalidInput() {
    if (std::cin.fail()) { // 스트림 오류 발생
        std::cin.clear(); // 스트림 오류 상태 초기화
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 잘못된 입력 무시
        return true; // 입력 실패
    }
    return false; // 입력 성공
}


// 정수 여부 확인 함수: value가 정수이면 true를 반환
bool isInteger(double value) {
    return value == static_cast<int>(value);
}
