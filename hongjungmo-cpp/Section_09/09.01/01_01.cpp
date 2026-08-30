// Section 09. 함수
// 09.01 함수와 인수, 매개변수

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수
// x_param과 y_param을 함수의 매개변수(parameter)라 한다.
int func(int x_param, int y_param)
{
	return x_param + y_param;
}

int main()
{
	// 변수 초기화
	int x_arg = 10, y_arg = 20;

	// 함수의 호출
	// x_arg와 y_arg를 함수의 인수(argument)라 한다.
	int ret = func(x_arg, y_arg);

	// 함수 실행의 결과값 출력
	cout << ret << endl;

	return 0;
}