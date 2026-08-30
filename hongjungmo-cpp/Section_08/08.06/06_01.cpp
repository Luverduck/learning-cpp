// Section 08. 구조체
// 08.06 구조체의 구조체 멤버

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 다른 구조체의 멤버가 될 구조체의 정의
	struct Phone
	{
		int area;
		char number[15];
	};

	// 구조체를 멤버로 가지는 구조체의 정의
	struct Person
	{
		int age;
		char name[8];
		Phone phone;
	};

	// 구조체를 멤버로 가지는 구조체의 선언
	Person person;

	// 구조체의 크기
	cout << sizeof(person) << endl;

	// 멤버 구조체의 크기
	cout << sizeof(person.phone) << endl;

	// 멤버 구조체의 멤버 접근
	person.phone.area = 82;
	strcpy(person.phone.number, "010-1234-5678");

	return 0;
};