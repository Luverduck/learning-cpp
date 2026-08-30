// Section 01. C++의 기초적인 사용법
// 01.05 함수

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수의 정의
int add(int param_x, int param_y)
{
	return param_x + param_y;
}

int main()
{
	// 변수 초기화
	int arg_x = 10;
	int arg_y = 5;

	// 변수 x와 y를 인수로 하여 함수 호출
	int ret = add(arg_x, arg_y);

	// 함수 실행의 결과 출력
	cout << "add(arg_x, arg_y)의 결과 : " << ret << endl;

	return 0;
}