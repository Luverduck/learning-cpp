// Section 08. 구조체
// 08.01 구조체

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

struct Person
{
	int age;
	float height;
	char name[8];
};

int main()
{
	// 구조체 변수 선언
	Person person;
	// 구조체 변수의 멤버 접근
	strcpy(person.name, "Jasmine");
	person.age = 17;
	person.height = 163.7;

	// 구조체 변수 초기화
	Person aladin = { 20, 180.5, "Aladin" };
	// (C++ 11) 일관된 초기화 (uniform initialization)
	Person genie { 20, 195.8, "Genie" };
	// (C++ 20) 지정된 초기화 (designated initialization)
	Person japar{ .age = 41, .height = 185.4, .name = "Japar" };

	// 구조체 선언과 동시에 구조체 변수 선언
	struct Animal
	{
		int age;
		float height;
		char name[8];
	} abu;

	return 0;
};