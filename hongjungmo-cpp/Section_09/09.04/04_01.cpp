// Section 09. 함수
// 09.04 인수의 전달 (배열)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수
void func(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
};


int main()
{
	// 배열 초기화
	int a_arr[4]{ 1, 2, 3, 4 };

	// 배열의 길이
	int a_len = sizeof(a_arr) / sizeof(int);

	// 값에 의한 전달
	func(a_arr, a_len);

	return 0;
}