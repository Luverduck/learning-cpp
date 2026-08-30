// Section 05. 포인터와 참조
// 06.03 변수의 연결 상태

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 전역 변수 (내부 연결)
static int var_global_il;

// 전역 함수 (내부 연결)
static void externalLinkageTest();

int main()
{
	// 전역 변수의 초기화
	var_global_il = 1024;

	// 전역 함수 호출
	externalLinkageTest();

	return 0;
};

// 전역 함수 (내부 연결)
void externalLinkageTest()
{
	cout << "Call internal function" << endl;
	cout << var_global_il << endl;
}