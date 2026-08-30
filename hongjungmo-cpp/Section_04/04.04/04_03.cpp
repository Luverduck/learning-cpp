// Section 04. 흐름 제어
// 04.04 반복문 while

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 부호가 없는 자료형으로 조건식을 구성할 경우 정수 오버플로우에 의한 무한 루프가 발생할 수 있다.
	unsigned int count = 0;
	while (count < 0)
	{
		if (count == 0)
			cout << "Zero" << endl;
		else
			cout << count << endl;

		// 루프 카운터 감소
		count--;
	}

	return 0;
}