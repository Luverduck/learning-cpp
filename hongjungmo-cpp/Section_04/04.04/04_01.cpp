// Section 04. 흐름 제어
// 04.04 반복문 while

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// while 반복문은 조건식이 true인 동안 실행문을 반복한다.
	int count = 0;
	while (count < 10)
	{
		cout << count << endl;
		++count;
	}

	return 0;
}