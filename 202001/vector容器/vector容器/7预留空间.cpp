# include <iostream>
using namespace std;
# include <vector>

void printVector(vector<int> &v)
{
	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";

	}
	cout << endl;
}


void test01()
{
	vector<int> v1;
	int num = 0;
	int *p = NULL;
	for (int i = 0; i < 100000; i++)
	{

		v1.push_back(i);

		if (p != &v1[0])
		{
			p = &v1[0];
			num++;//统计内存开辟的次数
		}
	}
	cout << num << endl;

}


void test02()
{
	vector<int> v1;
	v1.reserve(100000);//预留空间
	int num = 0;
	int *p = NULL;
	for (int i = 0; i < 100000; i++)
	{

		v1.push_back(i);

		if (p != &v1[0])
		{
			p = &v1[0];
			num++;//统计内存开辟的次数
		}
	}
	cout << num << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}

