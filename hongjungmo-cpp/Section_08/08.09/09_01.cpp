// Section 08. 구조체
// 08.09 공용체와 포인터

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
	DataType dataType;

	// 구조체 포인터의 선언
	DataType* p_dataType;

	// 구조체 포인터에 값 할당
	p_dataType = &dataType;

	// 구조체 포인터의 초기화
	DataType* p_data_double = &dataType;

	// 구조체 포인터를 통한 멤버의 접근
	p_data_double->d = 1.5;

	cout << p_data_double->c << endl;
	cout << p_data_double->i << endl;
	cout << p_data_double->d << endl;

	return 0;
};