// Section 03. 연산자
// 03.04 증감 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int x = 6, y = 6;

	cout << x << " " << y << endl;
	
	cout << ++x << " " << ++y << endl;
	
	cout << x++ << " " << y++ << endl;
	
	cout << x << " " << y << endl;

	return 0;
}