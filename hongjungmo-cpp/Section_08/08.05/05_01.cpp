// Section 08. 구조체
// 08.05 구조체의 배열 멤버

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <malloc.h> // _msize()

using namespace std;

int main()
{
	// 정적 배열 멤버를 포함하는 구조체의 정의
	struct Person
	{
		int age;
		float height;
		char name[8];
	};

	// 구조체의 크기
	cout << sizeof(Person) << endl;

	// 구조체의 메모리 동적 할당
	Person* p_person = new Person;

	// 동적 할당한 구조체의 메모리 크기
	cout << _msize(p_person) << endl;

	// 구조체의 메모리 해제
	delete p_person;

	return 0;
};