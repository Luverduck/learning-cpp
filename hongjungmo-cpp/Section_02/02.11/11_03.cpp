// Section 02. 변수와 기본적인 자료형
// 02.11 형 변환

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int i = 100;

int main()
{
	// 명시적 형 변환 (explicit type conversion)
	// 사용자가 형 변환 연산자를 사용하여 수행하는 자료형 변환

	// C 스타일 형 변환 (C-style cast)
	// 형 변환 연산자 ()를 사용하는 형 변환
	(short)i;
	short(i);

	// 지정된 형 변환 (named cast)
	// C++의 형 변환 연산자를 사용하는 형 변환
	// - static_cast<type>(expression);
	// - dynamic_cast<type>(expression);
	// - reinterpret_cast<type>(expression);
	// - const_cast<type>(expression);
	static_cast<short>(i);

	return 0;
}