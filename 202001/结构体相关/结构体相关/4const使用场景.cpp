# include <iostream>
using namespace std;
# include <string>



struct Student
{
	string name;
	int age;
};


//消耗大，不适合大量用
//void printStudent(struct Student stu)
//{
//	cout << stu.name << "\t"<<stu.age << endl;
//}


//使用const防止误操作
void printStudent(const struct Student *p)
{
	cout << p->name << "\t" << p->age << endl;
}


int main4()
{
	struct Student s1 = {"zhuran",10};

	printStudent(&s1);

	system("pause");
	return 0;
}