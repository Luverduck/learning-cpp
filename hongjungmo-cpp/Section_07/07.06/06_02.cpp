// Section 07. 배열과 문자열
// 07.06 동적 할당 다차원 배열

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 다차원 배열의 길이
	int row, col;
	cin >> row >> col;

	// 동적 할당 다차원 배열의 선언
	int* p_arr2d = new int [row * col];

	// 동적 할당 다차원 배열에 값 대입
	int val = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			p_arr2d[(col * i) + j] = val++;
		}
	}

	// 다차원 배열에 저장된 값 출력
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << p_arr2d[(col * i) + j] << " ";
		}
	}

	// 동적 할당 다차원 배열의 해제
	delete[] p_arr2d;

	return 0;
};