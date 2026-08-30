// Section 07. 배열과 문자열
// 07.01 배열

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 초기화 리스트 요소의 수가 배열의 길이보다 작을 경우
	int arr[5] = { 1, 2, 3, };

	// 배열의 길이
	int arr_length = sizeof(arr) / sizeof(int);

	//  초기화 리스트 요소의 수가 배열의 길이보다 작을 경우 나머지 요소는 0으로 초기화된다.
	for (int i = 0; i < arr_length; i++)
		cout << arr[i] << " ";

	return 0;
};