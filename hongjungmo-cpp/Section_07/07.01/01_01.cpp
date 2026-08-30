// Section 07. 배열과 문자열
// 07.01 배열

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 배열의 선언
	int arr[10];

	// 배열의 요소에 값 대입
	arr[0] = 10;

	// 배열의 초기화
	// 1) 배열 요소의 자료형 크기 메모리를 배열의 길이만큼 할당한 후 초기화 리스트의 값을 순서대로 복사한다.
	int arr_1[3] = { 1, 2, 3 };
	// 2) 배열의 길이를 생략하는 경우 초기화 리스트의 수를 배열의 길이로 한다.
	int arr_2[] = { 1, 2, 3 };
	// 3) 배열을 초기화할 때 대입 연산자를 생략할 수 있다. (C++ 11)
	int arr_3[]{ 1, 2, 3 };

	return 0;
};