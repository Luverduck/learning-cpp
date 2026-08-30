// Section 04. 흐름 제어
// 04.06 반복문 for

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int pow(int, int);

int main()
{
	cout << pow(3, 4) << endl;

	return 0;
}

int pow(int base, int exponent)
{
	// 곱 연산을 위해 result를 1로 초기화
	int result = 1;

	// result에 base를 exponent번만큼 곱한다.
	for (int i = 0; i < exponent; i++)
		result *= base;

	// 결과를 반환한다.
	return result;
}