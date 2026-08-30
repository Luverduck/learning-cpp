// Section 09. 함수
// 09.03 인수의 전달 (기본 자료형, 리터럴 상수)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수
void func(const int& r_x)
{
	// 참조형 매개변수의 주소와 값 출력
	cout << &r_x << " " << r_x << endl;
}

int main()
{
	// 리터럴 상수를 매개변수에 전달
	func(10);

	return 0;
}