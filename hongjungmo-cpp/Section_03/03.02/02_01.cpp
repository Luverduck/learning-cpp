// Section 03. 연산자
// 03.02 연산자의 우선순위

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 연산자의 우선순위 (operator precedence)
	// 표현식을 평가하기 위한 연산자들 사이의 연산자 적용 순서

	int a = 10;
	int b = ++a + 1;
	// 전위 증감 연산자가 더하기 연산자보다 우선순위가 높다.
	// 따라서 a에 전위 증감 연산자를 적용한 후 덧셈 연산자를 적용하여 값을 계산한다.

	return 0;
}