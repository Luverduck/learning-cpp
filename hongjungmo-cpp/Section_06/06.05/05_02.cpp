// Section 06. 변수와 메모리
// 06.05 메모리 동적 할당

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <malloc.h> // _msize()

using namespace std;

int main()
{
	// 배열의 메모리 동적 할당
	int* ptr_arr = new int[30];

	// 배열에 동적 할당된 메모리의 크기
	cout << _msize(ptr_arr) << endl;

	// 배열의 길이
	cout << _msize(ptr_arr) / sizeof(int) << endl;

	// 배열의 동적 할당 메모리 해제
	delete[] ptr_arr;

	return 0;
};