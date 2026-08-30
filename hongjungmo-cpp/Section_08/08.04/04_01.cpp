// Section 08. 구조체
// 08.04 동적 할당 구조체

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 구조체 정의
	struct Person
	{
		int age;
		float height;
		char name[8];
	};

	// 동적 할당 구조체의 선언
	Person* p_person = new Person;

	// 동적 할당 구조체의 멤버 접근
	p_person->age = 20;
	p_person->height = 180.5;
	strcpy(p_person->name, "Aladin");

	cout << (p_person->name) << endl;
	cout << (p_person->age) << endl;
	cout << (p_person->height) << endl;

	// 동적 할당 구조체의 메모리 해제
	delete p_person;

	// 동적 할당 구조체의 초기화
	Person* p_aladin = new Person{ 20, 180.5, "Aladin" };

	// 동적 할당 구조체의 해제
	delete p_aladin;

	return 0;
};