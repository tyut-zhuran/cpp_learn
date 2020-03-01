# include <iostream>
using namespace std;

# include <stack>


void test01()
{
	stack<int> st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);


	while (!st.empty())
	{

		cout << st.top() << "  " ;
		st.pop();
		cout << st.size() << endl;
	}

}
int main()
{

	test01();
	system("pause");
	return 0;
}


