// Section 02. 변수와 기본적인 자료형
// 02.11 형 변환

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 암시적 형 변환 (implicit type conversion)
	// 컴파일러가 자동으로 수행해주는 자료형 변환

	// 2) 숫자 변환 (numeric conversion)
	// 숫자 승격 외 모든 형 변환
	short s = 10;     // int형 10이 short형으로 변환되어 s에 저장된다.
	float f = 3.5;    // double형 3.5가 float형으로 변환되어 f에 저장된다.
	int i = 6.5;      // double형 6.5가 int형으로 변환되어 i에 저장된다.
	// - 크기가 큰 자료형에서 크기가 작은 자료형으로 변환하는 경우 오버 플로우가 발생할 수 있다.
	short s = 100000;   // -31072
	cout << s << endl;
	// - 부동 소수점형에서 정수형으로 변환하는 경우 소수점 이하 값의 손실이 발생할 수 있다.
	int i = 4.9;        // 4
	cout << i << endl;

	return 0;
}