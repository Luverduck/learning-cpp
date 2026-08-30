// Section 05. 포인터와 참조
// 05.05 함수 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수의 원형
int add(int x, int y);

int main()
{
	// 함수 포인터의 선언
	int (*ptr_func)(int a, int b);

	// 함수 포인터에 값 할당
	int (*ptr_func1)(int a, int b);
	ptr_func1 = add;

	// 함수 포인터의 초기화
	int (*ptr_func2)(int a, int b) = add;

	// 함수 포인터의 역참조
	// 1) 암시적 역참조
	cout << ptr_func2(3, 5) << endl;
	// 2) 명시적 역참조
	cout << (*ptr_func2)(4, 6) << endl;

	return 0;
}

// 함수의 정의
int add(int x, int y)
{
	return x + y;
}