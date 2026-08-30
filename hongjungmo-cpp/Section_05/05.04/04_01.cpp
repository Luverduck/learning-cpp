// Section 05. 포인터와 참조
// 05.04 이중 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 이중 포인터의 선언
	int** pptr;

	// 이중 포인터의 대입
	int a = 10;
	int* ptr = &a;

	int** pptr1;
	pptr1 = &ptr;

	// 이중 포인터의 초기화
	int** pptr2 = &ptr;

	// 이중 포인터의 역참조
	cout << *pptr2 << " " << ptr << endl;
	cout << **pptr2 << " " << *ptr << endl;

	return 0;
}