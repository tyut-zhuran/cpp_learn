# include <iostream>
using namespace std;
# include <string>


struct Student
{
	string name;
	int age;
	int score;
}s3;

int main1()
{
	struct Student s1;
	s1.name = "zhruan";
	s1.age = 10;
	s1.score = 100;

	struct Student s2 = {"zhruanzhuran",18,100};

	s3.name = "zhuzhuzhu";
	s3.age = 19;
	s3.score = 99;

	system("pause");
	return 0;
}













