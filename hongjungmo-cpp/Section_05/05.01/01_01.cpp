// Section 05. 포인터와 참조
// 05.01 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 포인터의 선언
	int* ptr;

	// 포인터에 값 할당
	int a = 10;
	
	int* ptr1;
	ptr1 = &a;

	// 포인터의 초기화
	int* ptr2 = &a;

	// 포인터의 역참조
	cout << "*ptr2 = " << *ptr2 << endl;

	// 포인터의 크기
	cout << "sizoef ptr2 = " << sizeof ptr2 << endl;

	return 0;
}