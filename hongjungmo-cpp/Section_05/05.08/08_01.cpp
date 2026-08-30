// Section 05. 포인터와 참조
// 05.08 참조와 const

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// const 키워드로 선언된 참조
	// 1. const 키워드로 선언된 변수를 참조할 수 있다.
	const int var = 10;
	const int& ref = var;

	// 2. 리터럴 상수를 참조할 수 있다.
	// - 리터럴 상수에 대한 참조가 선언되면 리터럴 상수의 수명은 참조의 수명과 같아진다.
	const int& ref_literal = 3 + 5;

	return 0;
}