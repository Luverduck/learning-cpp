// Section 08. 구조체
// 08.11 열거형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 열거형의 정의
	enum Color
	{
		Red,
		Orange,
		Yellow,
		Blue
	};

	// 열거형의 열거자 출력
	cout << Red << endl;
	cout << Orange << endl;
	cout << Yellow << endl;
	cout << Blue << endl;

	return 0;
};