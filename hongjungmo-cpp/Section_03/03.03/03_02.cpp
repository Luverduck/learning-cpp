// Section 03. 연산자
// 03.03 산술 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 몫 연산자 '/'는 두 피연산자 중 하나라도 실수일 경우 실수인 몫을 구한다.
	cout << 7 / 4 << endl;
	cout << float(7) / 4 << endl;
	cout << 7 / float(4) << endl;
	cout << float(7) / float(4) << endl;

	return 0;
}