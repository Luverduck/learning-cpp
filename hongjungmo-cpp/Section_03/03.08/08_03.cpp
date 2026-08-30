// Section 03. 연산자
// 03.08 비트 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// 비트 시프트 연산
	unsigned int a = 3;
	cout << std::bitset<8>(a) << endl;

	unsigned int b = a << 3;
	cout << std::bitset<8>(b) << endl;

	unsigned int c = a >> 3;
	cout << std::bitset<8>(c) << endl;

	return 0;
}