// Section 05. 포인터와 참조
// 05.03 포인터의 산술 연산

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 포인터와 포인터의 뺄셈
	// 포인터와 정수의 덧셈/뺄셈으로부터 포인터와 포인터의 뺄셈의 결과는 정수임을 알 수 있다.
	// 두 포인터의 뺄셈 결과(정수)는 두 데이터 사이의 간격을 의미한다.

	int arr[10];
	int* ptr_idx0 = &arr[0];
	int* ptr_idx2 = &arr[2];
	
	cout << ptr_idx2 - ptr_idx0 << endl;	// 2

	return 0;
}