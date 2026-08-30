// Section 08. 구조체
// 08.03 구조체의 메모리 할당

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 구조체 정의 (메모리에 할당 X)
	struct Person
	{
		int age;
		float height;
		char name[6]; // 메모리 패딩 확인을 위해 6[byte]로 변경
	};

	// 구조체 변수 선언 (메모리에 할당 O)
	Person aladin;

	// 구조체에 할당된 전체 메모리 크기
	cout << "sizeof(aladin) = " << sizeof(aladin) << " " << &aladin << endl;

	// 구조체 멤버의 메모리 크기
	cout << "sizeof(age)    = " << sizeof(aladin.age) << "  " << &(aladin.age) << endl;
	cout << "sizeof(height) = " << sizeof(aladin.height) << "  " << &(aladin.height) << endl;
	cout << "sizeof(name)   = " << sizeof(aladin.name) << "  " << &(aladin.name) << endl;

	return 0;
};