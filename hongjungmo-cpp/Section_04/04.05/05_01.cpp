// Section 04. 흐름 제어
// 04.05 반복문 do ~ while

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 반드시 한 번 이상 실행해야 할 문장을 do 안에 작성한다.
	int selection;
	
	do
	{
		// 최소 한 번 이상 입력을 받는다.
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mult" << endl;
		cout << "4. div" << endl;
		cin >> selection;
		// 올바른 입력을 받을 때까지 반복한다.
	} while (selection <= 0 || selection >= 5);

	cout << "You selected " << selection << endl;

	return 0;
}