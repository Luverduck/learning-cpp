// Section 07. 배열과 문자열
// 07.02 배열과 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 배열의 초기화
	int arr[4] = { 100, 200, 300, 400 };

	// 포인터를 배열의 첫 요소의 주소로 초기화
	int* ptr = &arr[0];

	// 인덱스 연산
	cout << arr[0] << " / " << ptr[0] << endl;
	// 결과 : 100 / 100

	cout << arr[1] << " / " << ptr[1] << endl;
	// 결과 : 200 / 200

	cout << arr[2] << " / " << ptr[2] << endl;
	// 결과 : 300 / 300

	cout << arr[3] << " / " << ptr[3] << endl;
	// 결과 : 400 / 400

	return 0;
};