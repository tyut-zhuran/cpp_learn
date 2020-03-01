#pragma once
# include <iostream>
using namespace std;
# include <string>


template <class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void showInfo();
	T1 name;
	T2 age;
};

