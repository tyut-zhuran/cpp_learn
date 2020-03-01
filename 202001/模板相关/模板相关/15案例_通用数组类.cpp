# include <iostream>
using namespace std;
# include "myArray.hpp"

class Person
{
public:
	Person(string name,int age)
	{
		this->name = name;
		this->age = age;
	}
	Person()
	{}

	string name;
	int age;
};


void printMyArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void printMyArray(MyArray<Person>& arr)
{
	cout << "printMyArray()__Person" << endl;
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i].name << "  " << arr[i].age << endl;
	}
	cout << endl;
}


void test01()
{
	MyArray<int> myArray(5);
	/*MyArray<int> myArray2(myArray);
	MyArray<int> myArray3(100);
	myArray3 = myArray;*/

	for (int i = 0; i < 5; i++)
	{
		myArray.Push_Back(i);
	}
	printMyArray(myArray);


	cout << myArray.getCapacity() << endl;
	cout << myArray.getSize() << endl;

	myArray.Pop_Back();
	cout << myArray.getSize() << endl;
	cout << myArray.getCapacity() << endl;

}

//测试自定义类型
void test02()
{
	MyArray<Person> arr(5);
	for (int i = 0; i < 4; i++)
	{
		arr.Push_Back(Person("zhruan",23));
	}
	printMyArray(arr);
	cout << "-------" << endl;
	cout << arr.getCapacity() << endl;
	cout << arr.getSize() << endl;

	arr.Pop_Back();
	cout << arr.getSize() << endl;
	cout << arr.getCapacity() << endl;
}


int main()
{
	test02();
	system("pause");
	return 0;
}