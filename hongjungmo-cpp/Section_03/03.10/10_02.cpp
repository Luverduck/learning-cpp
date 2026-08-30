// Section 03. 연산자
// 03.10 대입 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int i = 100;

void intInit(int& i)
{
	i = 100;
}

int main()
{
	// 더하기 연산 후 대입
	i += 10;
	cout << i << endl;
	intInit(i);

	// 빼기 연산 후 대입
	i -= 10;
	cout << i << endl;
	intInit(i);

	// 곱하기 연산 후 대입
	i *= 10;
	cout << i << endl;
	intInit(i);

	// 몫 연산 후 대입
	i /= 10;
	cout << i << endl;
	intInit(i);

	// 나머지 연산 후 대입
	i %= 10;
	cout << i << endl;

	return 0;
}