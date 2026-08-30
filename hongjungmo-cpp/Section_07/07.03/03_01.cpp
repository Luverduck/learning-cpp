// Section 07. 배열과 문자열
// 07.03 다차원 배열

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 다차원 배열의 선언
	int arr_2d[2][5];

	// 다차원 배열의 요소에 값 대입
	int val = 0;
	for (int i = 0; i < sizeof(arr_2d) / sizeof(arr_2d[0]); i++)
	{
		for (int j = 0; j < sizeof(arr_2d[0]) / sizeof(int); j++)
		{
			arr_2d[i][j] = val++;
		}
	}
	for (int i = 0; i < sizeof(arr_2d) / sizeof(arr_2d[0]); i++)
	{
		for (int j = 0; j < sizeof(arr_2d[0]) / sizeof(int); j++)
		{
			cout << arr_2d[i][j] << " ";
		}
		cout << endl;
	}

	// 다차원 배열의 길이
	cout << sizeof(arr_2d) / sizeof(int) << endl;
	// 다차원 배열의 행 길이
	cout << sizeof(arr_2d) / sizeof(arr_2d[0]) << endl;
	// 다차원 배열의 열 길이
	cout << sizeof(arr_2d[0]) / sizeof(int) << endl;


	// 다차원 배열의 초기화
	int arr_2d_1[2][5] = { { 0, 1, 2, 3, 4 }, { 5, 6, 7, 8, 9 } };
	for (int i = 0; i < sizeof(arr_2d) / sizeof(arr_2d[0]); i++)
	{
		for (int j = 0; j < sizeof(arr_2d[0]) / sizeof(int); j++)
		{
			cout << arr_2d_1[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
};