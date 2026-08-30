// Section 07. 배열과 문자열
// 07.05 동적 할당 배열

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 배열의 길이
	int length;
	cin >> length;

	// 동적 할당 배열의 초기화
	int* p_arr = new int[length] { 0, 1, 2, 3, };

	// 배열의 요소에 저장된 값 출력
	for (int i = 0; i < length; i++)
		cout << p_arr[i] << " ";

	// 동적 할당 배열의 해제
	delete[] p_arr;

	return 0;
};