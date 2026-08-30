// Section 08. 구조체
// 08.12 typedef 키워드

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// double 자료형에 별칭 정의
	typedef double distance_t;

	// 별칭으로 정의된 자료형의 변수 초기화
	distance_t distance = 3.5;
	cout << distance << endl;

	// typedef로 정의된 별칭의 영역
	// 블록 밖에 정의된 int 자료형의 별칭
	typedef int integer_t;
	{
		// 블록 안에 정의된 short 자료형의 별칭
		typedef short integer_t;
		cout << sizeof(integer_t) << endl;;
	};
	cout << sizeof(integer_t) << endl;

	return 0;
};