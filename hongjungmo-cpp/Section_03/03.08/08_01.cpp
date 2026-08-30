// Section 03. 연산자
// 03.08 비트 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// a를 4비트의 이진수로 표현
	unsigned int a = 1;
	cout << std::bitset<4>(a) << endl;

	return 0;
}