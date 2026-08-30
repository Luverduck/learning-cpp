// Section 04. 흐름 제어
// 04.08 점프문 break, continue

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// for문에서의 continue
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
			continue;

		cout << "i = " << i << endl;
	}

	return 0;
}