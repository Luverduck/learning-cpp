// Section 02. 변수와 기본적인 자료형
// 02.11 형 변환

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 암시적 형 변환 (implicit type conversion)
	// 컴파일러가 자동으로 수행해주는 자료형 변환

	// 1) 숫자 승격 (numeric promotion)
	// 크기가 작은 자료형이 동일한 유형의 크기가 큰 자료형으로 변환되는 경우
	long l = 64;      // int형 64가 long형으로 변환되어 l에 저장된다.
	double d = 1.5f;  // float형 1.5가 double형으로 변환되어 d에 저장된다.

	return 0;
}