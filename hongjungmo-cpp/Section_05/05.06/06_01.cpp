// Section 05. 포인터와 참조
// 05.06 void 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// void 포인터의 선언
	void* ptr;

	// void 포인터에 값 할당
	int a = 10;
	
	void* ptr1; 
	ptr1 = &a;

	// void 포인터의 초기화
	void* ptr2 = &a;

	// void 포인터의 역참조
	// void 포인터는 포인터가 가리키는 자료형을 알 수 없으므로 역참조 연산을 할 수 없다.
	// void 포인터가 가리키는 메모리에 접근하기 위해서는 형 변환을 해야 한다.
	// cout << *ptr2 << endl; // 불가능
	cout << *(static_cast<int*>(ptr2)) << endl;

	// void 포인터의 산술 연산
	// void 포인터는 포인터가 가리키는 자료형의 크기를 알 수 없으므로 산술 연산을 할 수 없다.
	// void 포인터의 산술 연산을 위해서는 형 변환을 해야 한다.
	int arr[10];
	void* ptr3 = &arr[0];
	//cout << ptr3 + 1 << endl; // 불가능
	cout << static_cast<int*>(ptr3) + 1 << endl;
	cout << static_cast<int*>(ptr3) + 2 << endl;
	cout << static_cast<int*>(ptr3) + 3 << endl;

	return 0;
}