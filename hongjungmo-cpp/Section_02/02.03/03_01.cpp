// Section 02. 변수와 기본적인 자료형
// 02.03 고정 너비 정수형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main()
{
	using namespace std;
	
	// 크기가 8비트인 정수형 (문자형)
	std::int8_t fint1 = 65;
	cout << fint1 << endl;

	// 크기가 16비트인 정수형
	std::int16_t fint2(10);
	cout << fint2 << endl;

	// 크기가 32비트인 정수형 중 가장 빠른 것
	std::int_fast32_t fint3 = 25;
	cout << fint3 << endl;

	// 크기가 최소 64비트 이상 정수형
	std::int_least64_t fint4 = 44;
	cout << fint4 << endl;

	return 0;
}