// Section 02. 변수와 기본적인 자료형
// 02.07 문자형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <limits>

using namespace std;

int main()
{
	// 문자형의 크기
	cout << sizeof(char) << endl;

	// 문자형의 표현 범위
	// 부호가 있는 문자형
	cout << (int)std::numeric_limits<signed char>::max() << endl;
	cout << (int)std::numeric_limits<signed char>::lowest() << endl;

	// 부호가 없는 문자형
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	return 0;
}