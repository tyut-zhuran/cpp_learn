//# include <iostream>
//using namespace std;
//
//
//
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "Animal->speak()" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Cat->speak()" << endl;
//	}
//};
//
//
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Dog->speak()" << endl;
//	}
//};
//
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
//
//
//void test01()
//{
//	Cat cat;
//
//	doSpeak(cat);//��Ҫ��Animal���е�speak����������virtual����ִ��Cat�е�speak����
//
//	Dog dog;
//	doSpeak(dog);
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
