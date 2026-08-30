// Section 08. 구조체
// 08.10 익명 공용체

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 익명 공용체의 선언
	union 
	{
		char c;
		int i;
		double d;
	} dataType;

	// 익명 공용체 멤버의 접근
	dataType.i = 5;

	cout << dataType.i << endl;

	return 0;
};