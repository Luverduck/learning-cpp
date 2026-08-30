// Section 08. 구조체
// 08.10 익명 공용체

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 익명 공용체를 멤버로 가지는 구조체의 정의
	struct Person
	{
		int age;
		float height;
		char name[8];
		union
		{
			char phone[15];
			char email[15];
		};
	};

	// 구조체의 선언
	Person person;

	// 구조체의 멤버 익명 공용체 접근
	strcpy(person.phone, "abcd@gmail.com");

	cout << person.phone << endl;
	cout << person.email << endl;

	return 0;
};