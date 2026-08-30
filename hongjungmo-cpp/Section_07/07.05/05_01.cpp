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

	// 동적 할당 배열의 선언
	int* p_arr = new int[length];

	// 동적 할당 배열에 값 대입
	for (int i = 0; i < length; i++)
		p_arr[i] = i;

	// 배열의 요소에 저장된 값 출력
	for (int i = 0; i < length; i++)
		cout << p_arr[i] << " ";

	// 동적 할당 배열의 해제
	delete[] p_arr;

	return 0;
};