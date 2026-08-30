// Section 08. 구조체
// 08.08 공용체

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

union DataType
{
	char c;
	int i;
	double d;
};

int main()
{
	DataType data_char;
	data_char.c = 'A';

	DataType data_int;
	data_int.i = 81;

	// 공용체의 대입 연산
	// 공용체 변수에 다른 공용체 변수를 대입 연산하면 얕은 복사(shallow copy)한다.
	data_char = data_int;

	cout << data_char.c << endl;
	cout << data_char.i << endl;
	cout << data_char.d << endl;

	return 0;
};