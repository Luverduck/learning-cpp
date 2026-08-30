// Section 08. 구조체
// 08.05 구조체의 배열 멤버

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <malloc.h> // _msize()

using namespace std;

int main()
{
	// 신축성 있는 배열 멤버가 포함된 구조체 정의
	struct Person
	{
		int age;
		float height;
		char name[];
	};

	// 구조체의 크기
	cout << sizeof(Person) << endl; // 신축성 있는 배열 멤버는 크기가 0으로 계산된다.

	// 배열 멤버의 길이
	int n = 8;

	// 구조체의 메모리 동적 할당
	Person* p_person = (Person*)malloc(sizeof(Person*) + sizeof(char) * n);

	// 동적 할당 구조체의 메모리 크기
	if (p_person != NULL)
		cout << _msize(p_person) << endl;

	// 구조체의 메모리 해제
	free(p_person);

	return 0;
};