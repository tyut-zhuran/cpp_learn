# include <iostream>
using namespace std;
# include <queue>


void test01()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);


	while (!q.empty())
	{
		cout << q.front() << " " << q.back() <<" "<< q.size() << endl;
		q.pop();
	}

}

int main()
{

	test01();
	system("pause");
	return 0;
}




