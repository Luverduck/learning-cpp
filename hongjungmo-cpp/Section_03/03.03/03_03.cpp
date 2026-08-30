// Section 03. 연산자
// 03.03 산술 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 나머지 연산자 '%'는 왼쪽 피연산자와 같은 부호인 나머지를 구한다.
	cout << -5 % 2 << endl;
	cout << 5 % -2 << endl;

	return 0;
}