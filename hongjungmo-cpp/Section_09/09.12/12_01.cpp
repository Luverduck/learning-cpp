// Section 09. 함수
// 09.12 함수 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수의 정의
int func(int x, int y)
{
	return x + y;
}

int main()
{
	// 함수 포인터 초기화
	int (*p_func)(int, int) = func;

	// 함수 포인터로 함수 호출
	cout << p_func(3, 4) << endl;

	return 0;
}