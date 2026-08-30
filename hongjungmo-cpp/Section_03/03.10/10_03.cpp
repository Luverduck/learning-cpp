// Section 03. 연산자
// 03.10 대입 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <bitset>

using namespace std;

int i = 0b01001101;
int j = 0b11010111;

void bitInit(int& i, int& j)
{
	i = 0b01001101;
	j = 0b11010111;
}

int main()
{
	// 비트 AND 연산 후 대입
	i &= j;
	cout << std::bitset<8>(i) << endl;
	bitInit(i, j);

	// 비트 OR 연산 후 대입
	i |= j;
	cout << std::bitset<8>(i) << endl;
	bitInit(i, j);

	// 비트 XOR 연산 후 대입
	i ^= j;
	cout << std::bitset<8>(i) << endl;
	bitInit(i, j);

	// 비트 왼쪽 이동 연산 후 대입
	i <<= 2;
	cout << std::bitset<8>(i) << endl;
	bitInit(i, j);

	// 비트 오른쪽 이동 연산 후 대입
	i >>= 2;
	cout << std::bitset<8>(i) << endl;

	return 0;
}