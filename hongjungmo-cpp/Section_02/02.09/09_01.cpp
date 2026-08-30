// Section 02. 변수와 기본적인 자료형
// 02.09 리터럴 상수

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 리터럴 상수의 자료형
	// - 리터럴 상수는 접두사(prefix) 또는 접미사(suffix)를 통해 자료형을 나타낼 수 있다.

	// 문자형의 접두사(prefix)
	'A';		// char형 (default)
	u'B';		// char16_t형
	U'C';		// char32_t형
	L'D';		// w_char형
	u8"Hello!";	// UTF-8 방식

	// 정수형의 접미사(suffix)
	10u;		// unsigned형
	10;			// int형 (default)
	100l;		// long형
	1000ll;		// long long형

	// 실수형의 접미사(suffix)
	1.1f;		// float형
	10.1;		// double형 (default)
	10.3l;		// long double형

	return 0;
}