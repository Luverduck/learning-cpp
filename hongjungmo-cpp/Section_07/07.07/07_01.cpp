// Section 07. 배열과 문자열
// 07.07 C-style 문자열

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// C-style 문자열 선언
	char str1[255];

	// C-style 문자열에 값 대입
	str1[0] = 'H';
	str1[1] = 'e';
	str1[2] = 'l';
	str1[3] = 'l';
	str1[4] = 'o';
	str1[5] = ',';
	str1[6] = '\0';
	str1[7] = 'W';
	str1[8] = 'o';
	str1[9] = 'r';
	str1[10] = 'l';
	str1[11] = 'd';
	str1[12] = '!';
	str1[13] = '\0';

	// null 문자 '\0'를 만나기 전까지의 문자를 출력한다.
	cout << str1 << endl;

	// C-style 문자열 초기화
	char str2[] = "Hello, World!";

	// null 문자 '\0'를 만나기 전까지의 문자를 출력한다.
	cout << str2 << endl;

	// C-style 문자열을 초기화할 때 문자열 끝에 null 문자 '\0'가 자동으로 추가된다. 
	int idx = 0;
	while (true) 
	{
		if (str2[idx] == '\0') break;

		cout << str2[idx] << " " << (int)str2[idx] << endl;
		++idx;
	}
	
	return 0;
};