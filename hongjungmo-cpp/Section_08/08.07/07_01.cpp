// Section 08. 구조체
// 08.07 익명 구조체

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 익명 구조체의 선언
	struct 
	{
		int age;
		float height;
		char name[8];
	} person;

	// 익명 구조체 멤버의 접근
	person.age = 10;
	person.height = 180.5;
	strcpy(person.name, "Aladin");

	cout << person.age << endl;
	cout << person.height << endl;
	cout << person.name << endl;

	return 0;
};