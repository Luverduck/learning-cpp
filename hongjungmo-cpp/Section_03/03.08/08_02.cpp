// Section 03. 연산자
// 03.08 비트 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// a와 b를 4비트 이진수로 표현
	unsigned int a = 3;
	cout << std::bitset<4>(a) << endl;
	unsigned int b = 10;
	cout << std::bitset<4>(b) << endl << endl;

	// 비트 AND 연산
	cout << "a & b = " << std::bitset<4>(a & b) << endl;

	// 비트 OR 연산
	cout << "a | b = " << std::bitset<4>(a | b) << endl;

	// 비트 XOR 연산
	cout << "a ^ b = " << std::bitset<4>(a ^ b) << endl;

	return 0;
}