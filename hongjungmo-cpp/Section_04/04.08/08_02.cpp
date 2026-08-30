// Section 04. 흐름 제어
// 04.08 점프문 break, continue

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// while문에서의 break
	int i = 0;

	while (i < 100)
	{
		if (i > 4)
			break;

		cout << "i = " << i << endl;

		i++;
	}

	return 0;
}