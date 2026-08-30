// Section 09. 함수
// 09.11 재귀적 함수 호출

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 재귀 함수
void rec_func(int n)
{
	int x = 10;
	cout << "rec_func(" << n << ") / &n = " << &n << " / &x = " << &x << endl;

	// n이 5 이하일 때만 재귀 호출
	if (n < 3)
		rec_func(n + 1);

	cout << "rec_func(" << n << ") / &n = " << &n << " / &x = " << &x << endl;
}

int main()
{
	// 재귀 함수 호출
	rec_func(1);

	return 0;
}