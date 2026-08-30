// Section 02. 변수와 기본적인 자료형
// 02.08 변수와 상수

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 변수의 초기화
	int i = 100;
	cout << i << endl;
	// 변수에 저장된 값은 변경할 수 있다.
	i = 200;
	cout << i << endl;

	// 리터럴 상수
	10;
	1.5;
	'A';

	// 기호적 상수
	const int angle = 1004;
	// 상수에 저장된 값은 변경할 수 없다.
	//angel = 1005;

	return 0;
}