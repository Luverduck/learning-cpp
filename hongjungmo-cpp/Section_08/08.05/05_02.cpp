// Section 08. 구조체
// 08.05 구조체의 배열 멤버

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <malloc.h> // _msize()

using namespace std;

int main()
{
	// 동적 할당 메모리 주소를 저장할 포인터 멤버를 포함한 구조체 정의
	struct Person
	{
		int age;
		float height;
		char* p_name;
	};

	// 구조체의 크기
	cout << sizeof(Person) << endl;

	// 구조체의 메모리 동적 할당
	Person* p_person = new Person;

	// 배열 멤버의 길이
	int n = 8;

	// 포인터 멤버에 메모리 동적 할당 메모리의 주소 저장
	p_person->p_name = new char[n];

	// 동적 할당한 구조체의 메모리 크기
	cout << _msize(p_person) << endl;

	// 동적 배열의 메모리 해제
	delete[] p_person->p_name;

	// 구조체의 메모리 해제
	delete p_person;

	return 0;
};