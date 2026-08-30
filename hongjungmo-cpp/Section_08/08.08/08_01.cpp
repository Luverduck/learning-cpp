// Section 08. 구조체
// 08.08 공용체

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 공용체의 정의
	union DataType
	{
		char c;
		int i;
		double d;
	};

	// 공용체의 선언
	DataType dataType;

	// 공용체의 멤버 접근
	dataType.c = 'A';
	dataType.i = 5;
	dataType.d = 1.5;

	cout << dataType.c << " " << dataType.i << " " << dataType.c << endl;

	// 공용체의 초기화
	DataType dataType = { 'A' };
	// (C++ 11) 일관된 초기화 (uniform initialization)
	DataType dataType{ 'B' };
	// (C++ 20) 지정된 초기화 (designated initialization)
	DataType dataType{ .d = 1.5 };

	// 공용체 선언과 동시에 공용체 변수 선언
	union DataType
	{
		char c;
		int i;
		double d;
	} data_double;

	data_double.d = 1.5;
	cout << data_double.d << endl;

	return 0;
};