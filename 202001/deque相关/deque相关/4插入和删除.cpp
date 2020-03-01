//# include <iostream>
//using namespace std;
//# include <deque>
//
//
//void printDeque(const deque<int> d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	deque<int> d1;
//	//Î²²å
//	d1.push_back(2);
//	d1.push_back(3);
//
//
//	//Í·²å
//	d1.push_front(100);
//	
//	d1.push_front(200);
//	d1.push_front(300);
//	d1.push_front(400);
//	printDeque(d1);
//
//	//Î²É¾
//	d1.pop_back();
//
//	//Í·É¾
//	d1.pop_front();
//
//	printDeque(d1);
//}
//
//
//void test02()
//{
//	deque<int> d1;
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//	d1.push_front(400);
//
//
//	d1.insert(d1.begin(),1000);
//	printDeque(d1);
//
//	d1.insert(d1.begin(),3,3000);
//	printDeque(d1);
//
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(1);
//	d2.push_back(1);
//
//
//	d1.insert(d1.begin(),d2.begin(),d2.end());
//	printDeque(d1);
//}
//
//void test03()
//{
//	deque<int> d1;
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//	d1.push_front(400);
//	//É¾³ý
//	deque<int> ::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printDeque(d1);
//	//d1.erase(d1.begin(),d1.end());
//	d1.clear();
//	printDeque(d1);
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}
//
//
//
//
//
