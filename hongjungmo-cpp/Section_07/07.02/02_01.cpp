// Section 07. 배열과 문자열
// 07.02 배열과 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 배열의 포인터로의 붕괴(array - to - pointer decay)
	// 배열에서 발생할 수 있는 암시적 형 변환(implicit type conversion)
	// 배열의 붕괴가 발생하지 않는 대표적인 경우는 다음과 같다.
	// - sizeof 연산자로 배열의 크기를 구하는 경우
	// - 주소 연산자 &로 배열의 주소를 구하는 경우
	// - 문자 배열을 문자 리터럴로 초기화하는 경우

	// 배열과 포인터의 관계
	int arr[] = { 100, 200, 300, 400 };

	// 배열 변수는 포인터로 붕괴되며 배열에 할당된 메모리 시작 주소를 가리킨다.
	cout << arr << endl;

	// 배열 변수에 주소 연산자 &를 적용하면 배열에 할당된 메모리 시작 주소를 반환한다.
	cout << &arr << endl;

	// 따라서 배열에서 다음 관계가 성립한다.
	// arr == &arr == &arr[0];
	cout << arr << " " << &arr << " " << &arr[0] << endl;

	return 0;
};