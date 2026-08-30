// Section 09. 함수
// 09.07 함수의 반환형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수
int* func(int v_x)
{
	// 지역 변수 초기화
	int x = v_x * 2;

	// 포인터를 함수 내 지역 변수의 주소로 초기화
	int* p_x = &x;

	// 지역 변수를 가리키는 포인터의 주소로의 반환
	return p_x;
}

int main()
{
	// 함수 호출 및 주소로의 반환
	int* ret = func(10);

	// 반환값 출력
	cout << ret << " " << *ret << endl;
	// 함수 블록이 끝나면 지역 변수를 가리키는 포인터의 메모리가 해제된다 
	// 따라서 반환된 주소로 역참조시 쓰레기값이 출력된다.

	return 0;
}