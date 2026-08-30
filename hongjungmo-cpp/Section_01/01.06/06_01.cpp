// Section 01. C++의 기초적인 사용법
// 01.06 함수의 선언과 정의 분리

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수의 원형 (function prototype)
int add(int arg_x, int arg_y);

// 메인 함수
int main()
{
	// 함수 실행
	int ret = add(1, 2);

	// 함수 실행의 결과 출력
	cout << ret << endl;

	return 0;
}

// 함수의 정의 (function definition)
int add(int arg_x, int arg_y)
{
	int temp;
	temp = arg_x + arg_y;
	return temp;
};