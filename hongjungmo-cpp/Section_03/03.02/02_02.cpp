// Section 03. 연산자
// 03.02 연산자의 우선순위

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 연산자의 결합 법칙 (operator associativity)
	// 우선순위가 같은 연산자들 사이의 연산자 적용 방향

	int c = 10 * 20 / 30 % 40;
	// 곱셈 연산자와 나눗셈 연산자의 우선순위는 같다.
	// 따라서 왼쪽부터 차례대로 연산자 *, /, %를 적용하여 값을 계산한다.

	return 0;
}