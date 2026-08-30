// Section 09. 함수
// 09.09 함수 오버로딩

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 값에 의한 전달
int func(int x);
// 참조에 의한 전달
int func(int& x);

int main()
{
	// 변수 초기화
	int arg = 10;

	// 인수의 전달 방식으로 인한 모호성
	func(arg);

	return 0;
}

int func(int x)
{
	cout << "func(int x)" << endl;
	return x;
};

int func(int& x)
{
	cout << "func(int& x)" << endl;
	return x;
};