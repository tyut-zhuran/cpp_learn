//# include <iostream>
//using namespace std;
//# include <vector>
//
//
//void printVector(vector<int> &v)
//{
//	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	v1.push_back(60);
//	v1.push_back(70);
//	v1.push_back(80);//β��
//	printVector(v1);
//
//
//
//	v1.pop_back();//βɾ
//	printVector(v1);
//
//
//	//����
//	v1.insert(v1.begin(),100);
//	printVector(v1);
//
//	v1.insert(v1.begin(),2,2000);
//	printVector(v1);
//
//
//	//ɾ��
//	v1.erase(v1.begin());
//	printVector(v1);
//
//
//	v1.erase(v1.begin(),v1.end());
//	//v1.clear();//�ȼ�
//	printVector(v1);
//
//
//}
//
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//
