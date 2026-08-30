// Section 03. 연산자
// 03.03 산술 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 몫 연산자 '/'는 피연산자의 부호와 상관없이 소수점 이하를 절삭한다.
	cout << 7 / 4 << endl;
	cout << -7 / 4 << endl;
	cout << 7 / -4 << endl;

	return 0;
}