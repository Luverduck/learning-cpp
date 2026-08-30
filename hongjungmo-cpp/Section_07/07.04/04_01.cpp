// Section 07. 배열과 문자열
// 07.04 다차원 배열과 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 다차원 배열 선언
	int arr2d[2][5];

	// 다차원 배열
	cout << arr2d << endl;
	cout << arr2d[0] << endl;
	cout << arr2d[1] << endl;

	cout << &arr2d[0] << endl;
	cout << &arr2d[1] << endl;

	cout << endl;

	cout << "arr2d[0][j]" << endl;
	for (int j = 0; j < sizeof(arr2d[0]) / sizeof(int); j++)
	{
		cout << &arr2d[0][j] << endl;
	}

	cout << endl;

	cout << "arr2d[1][j]" << endl;
	for (int j = 0; j < sizeof(arr2d[1]) / sizeof(int); j++)
	{
		cout << &arr2d[1][j] << endl;
	}

	return 0;
};