// Section 02. 변수와 기본적인 자료형
// 02.01 자료형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 문자형의 저장
	char c = 'A';
	cout << c << endl;

	// 문자형은 ASCII 코드 번호인 정수형으로 변환하여 저장된다.
	char c_integer = 65;
	cout << c_integer << endl;

	return 0;
}