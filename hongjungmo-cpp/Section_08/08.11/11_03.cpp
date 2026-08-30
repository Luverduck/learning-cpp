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

	// 열거자가 동일한 열거형의 정의
	enum Feeling
	{
		Pleased,
		Cosy,
		Blue,
		Angry
	};

	// 같은 범위에서 정의된 서로 다른 다른 열거형에서 동일한 열거자명을 사용할 수 없다.
	cout << (Color::Blue == Feeling::Blue) << endl;
	// Error	C2365	'Blue': redefinition; previous definition was 'enumerator'

	return 0;
};