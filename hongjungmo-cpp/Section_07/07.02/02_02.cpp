// Section 07. 배열과 문자열
// 07.02 배열과 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 배열 초기화
	int arr[4] = { 100, 200, 300, 400 };

	// 배열의 포인터 초기화
	int* ptr = &arr[0];

	// 배열은 증감 연산을 할 수 없다.
	//cout << arr++ << endl;

	// 배열의 포인터는 증감 연산을 할 수 있다.
	cout << ptr++ << endl;

	return 0;
};