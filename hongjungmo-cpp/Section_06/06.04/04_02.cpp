// Section 06. 변수와 메모리
// 06.04 변수의 기억 수명

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 지역 변수를 가리키는 포인터의 반환
// 지역 변수는 블록이 끝나면 자동으로 메모리가 해제된다.
// 지역 변수를 가리키는 포인터를 반환하는 경우 이미 해제된 메모리 주소를 반환하게 된다.
// static 키워드를 통해 블록을 벗어나도 포인터가 가리키는 메모리를 유지하도록 해야한다.
int* func()
{
	// static 키워드로 선언된 지역 변수
	static int var_local = 10;
	// 지역 변수의 주소를 포인터에 저장
	int* ptr_var = &var_local;
	// 포인터 반환
	return ptr_var;
};

int main()
{
	// 함수 실행 결과로 반환된 주소를 포인터에 저장
	int* ptr_return = func();
	// 포인터의 주소와 포인터에 저장된 값 출력
	cout << ptr_return << " " << *ptr_return << endl;

	return 0;
};