// Section 08. 구조체
// 08.07 익명 구조체

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 익명 구조체를 멤버로 가지는 구조체의 정의
	struct Person
	{
		int age;
		float height;
		char name[8];
		struct
		{
			int area;
			char number[15];
		};
	};

	// 구조체의 선언
	Person person;

	// 구조체의 멤버 접근
	person.age = 10;
	person.height = 180.5;
	strcpy(person.name, "Aladin");

	// 구조체의 멤버 익명 구조체 접근
	person.area = 82;
	strcpy(person.number, "010-1234-5678");

	cout << person.area << endl;
	cout << person.number << endl;

	return 0;
};