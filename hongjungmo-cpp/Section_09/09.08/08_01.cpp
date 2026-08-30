// Section 09. 함수
// 09.08 매개변수의 기본값

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수 원형
void func(int x = 10);

int main()
{
	// 인수를 전달하지 않고 함수 호출
	func();

	// 인수를 전달하여 함수 호출
	func(100);

	return 0;
}

// 함수 정의
void func(int x)
{
	cout << x << endl;
};