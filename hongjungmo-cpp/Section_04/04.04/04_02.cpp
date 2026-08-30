// Section 04. 흐름 제어
// 04.04 반복문 while

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// while 반복문의 조건식의 값이 0이 아닌 정수일 경우 true가 되어 while문은 종료되지 않는다.
	// 이 경우, 반드시 루프 탈출 조건을 명시해야 한다.
	int count = 0;
	while (1)
	{
		cout << count << endl;
		++count;

		// 루프 탈출 조건
		if (count >= 10)
			break;
	}

	return 0;
}