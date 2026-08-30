// Section 03. 연산자
// 03.11 기타 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 조건 연산자
	int i = 3 > 4 ? 100 : -100;
	cout << i << endl;

	// 쉼표 연산자
	int x = 10, y = 7;

	// sizeof 연산자
	size_t size = sizeof(i);
	cout << size << endl;

	return 0;
}