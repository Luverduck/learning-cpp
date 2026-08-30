// Section 09. 함수
// 09.02 인수의 전달

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수
void swap(int* p_x, int* p_y)
{
	// 매개변수의 주소 출력
	cout << &p_x << " " << &p_y << endl;

	// 실행문
	int temp = *p_x;
	*p_x = *p_y;
	*p_y = temp;
}


int main()
{
	// 변수 초기화
	int a = 10, b = 20;

	// 변수의 주소 출력
	cout << &a << " " << &b << endl;

	// 주소에 의한 전달
	swap(&a, &b);

	return 0;
}