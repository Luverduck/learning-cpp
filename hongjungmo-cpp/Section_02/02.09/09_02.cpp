// Section 02. 변수와 기본적인 자료형
// 02.09 리터럴 상수

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 리터럴 상수의 기수(radix)
	// - 리터럴 상수는 접두사(prefix)를 통해 진법을 나타낼 수 있다.
	10;				// decimal
	010;			// octal
	0x10; 0X10;		// hexadecimal
	0b10; 0B10;		// binary

	return 0;
}