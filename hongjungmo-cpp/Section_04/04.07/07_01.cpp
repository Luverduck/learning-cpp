// Section 04. 흐름 제어
// 04.07 반복문 for-each (C++ 11)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 배열 선언
	int arr[5] = { 1, 2, 3, 4, 5 };

	// for-each문
	for (int iter : arr)
		cout << iter << " ";

	return 0;
}