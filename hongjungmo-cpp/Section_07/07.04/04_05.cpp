// Section 07. 배열과 문자열
// 07.04 다차원 배열과 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 다차원 배열 선언
	int arr2d[2][3] =
	{
		{ 0, 1, 2 },
		{ 3, 4, 5 }
	};

	// 다차원 배열의 포인터 초기화
	int(*p_arr2d)[3] = arr2d;

	// 다차원 배열의 인덱싱 연산
	cout << arr2d[0][0] << " " << *(*(p_arr2d + 0) + 0) << endl;
	cout << arr2d[0][1] << " " << *(*(p_arr2d + 0) + 1) << endl;
	cout << arr2d[0][2] << " " << *(*(p_arr2d + 0) + 2) << endl;
	cout << arr2d[1][0] << " " << *(*(p_arr2d + 1) + 0) << endl;
	cout << arr2d[1][1] << " " << *(*(p_arr2d + 1) + 1) << endl;
	cout << arr2d[1][2] << " " << *(*(p_arr2d + 1) + 2) << endl;

	return 0;
};