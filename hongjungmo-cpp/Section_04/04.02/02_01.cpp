// Section 04. 흐름 제어
// 04.02 조건문 if

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cin >> x >> y;

	if (x > y)
		cout << "x > y" << endl;
	else if (x == y)
		cout << "x == y" << endl;
	else 
		cout << "x < y" << endl;

	return 0;
}