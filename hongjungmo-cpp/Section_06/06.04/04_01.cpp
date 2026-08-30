// Section 06. 변수와 메모리
// 06.04 변수의 기억 수명

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 사용자 정의 함수
void func()
{
	// 지역 변수
	int var_local = 0;

	// static으로 선언된 지역 변수
	static int var_local_static = 0;

	// 두 지역 변수의 값 출력
	cout << var_local << " " << var_local_static << endl;

	// 지역 변수의 값 변경
	var_local++;
	var_local_static++;
};

// 메인 함수
int main()
{
	// static 키워드로 선언된 지역 변수는 정적 기억 수명을 가진다.
	func(); // 결과 : 0
	func(); // 결과 : 1

	return 0;
};