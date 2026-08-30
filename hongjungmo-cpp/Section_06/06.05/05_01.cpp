// Section 06. 변수와 메모리
// 06.05 메모리 동적 할당

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// new 연산자
	// 동적으로 메모리를 할당한 후 할당한 자료형의 포인터를 반환한다.
	int* ptr_i = new int;
	cout << sizeof(*ptr_i) << endl;

	// delete 연산자
	// 동적으로 할당한 메모리를 해제한다.
	delete ptr_i;

	return 0;
};