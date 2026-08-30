// Section 02. 변수와 기본적인 자료형
// 02.06 논리형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip> // boolalpha, noboolalpha

using namespace std;

int main()
{
	// 논리형 변수 선언
	bool b1 = true;
	bool b2(false);

	// 논리형의 출력 형태를 true/false로 변경
	cout << boolalpha;
	cout << b1 << endl;
	cout << b2 << endl;

	// 논리형의 출력 형태를 1/0으로 변경
	cout << noboolalpha;
	cout << b1 << endl;
	cout << b2 << endl;

	return 0;
}