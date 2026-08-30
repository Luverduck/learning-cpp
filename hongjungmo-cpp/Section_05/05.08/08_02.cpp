// Section 05. 포인터와 참조
// 05.08 참조와 const

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 참조에 의한 호출 (call by reference)
// 함수 호출시 전달한 인수를 매개변수로 참조하여 함수를 호출하는 방식
int add(const int& x, const int& y)
{
	// 함수 호출시 내부적으로 아래 과정이 수행된다.
	// const int& param_x = 3;
	// const int& param_y = 4;

	return x + y;
}

int main()
{
	// 함수의 매개변수를 const로 선언된 참조로 할 경우 리터럴 상수를 인수로 전달할 수 있다.
	int ret = add(3, 5);

	cout << ret << endl;

	return 0;
}