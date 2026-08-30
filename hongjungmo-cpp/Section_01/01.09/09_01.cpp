// Section 01. C++의 기초적인 사용법
// 01.09 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 연산자와 피연산자
	int x = 100;
	int y = 20;
	x = x + y;
	// =	: 연산자 (operator)
	// x, y	: 피 연산자 (operand)

	// 단항 연산자 (unary operator) : 피 연산자가 한 개인 연산자
	int a = -x;

	// 이항 연산자 (binary operator) : 피 연산자가 두 개인 연산자
	int b = x + y;

	// 삼항 연산자 (ternary operator) : 피 연산자가 세 개인 연산자
	bool c = x > y ? x : y;

	return 0;
}