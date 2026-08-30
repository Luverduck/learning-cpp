// Section 05. 포인터와 참조
// 05.07 참조

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 참조의 선언
	int a = 10;
	int& ref_a = a;

	// 참조로 선언한 참조
	int& ref_ref_a = ref_a;

	// 변수와 참조, 참조로 선언된 참조의 관계
	cout << a			<< " " << &a			<< endl;
	cout << ref_a		<< " " << &ref_a		<< endl;
	cout << ref_ref_a	<< " " << &ref_ref_a	<< endl;

	// 변수와 참조, 포인터의 관계
	int* ptr_a = &a;
	cout << a		<< " " << &a							<< endl;
	cout << ref_a	<< " " << &ref_a						<< endl;
	cout << ptr_a	<< " " << &ptr_a	<< " " <<	* ptr_a << endl;

	return 0;
}