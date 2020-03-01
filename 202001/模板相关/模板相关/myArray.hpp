#pragma once
# include <iostream>
using namespace std;
#include <string>

template <class T>
class MyArray
{
public:
	//有参构造
	MyArray(int capacity)
	{
		//cout << "有参构造" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
 		this->pArray = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
		//cout << "拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//深拷贝
		this->pArray = new T[this->m_Capacity];
		for (int i = 0; i < arr.m_Capacity; i++)
		{
			this->pArray[i] = arr.pArray[i];
		}

	}

	//运算符重载防止浅拷贝
	MyArray & operator= (const MyArray& arr)
	{
		//cout << "operator 重载" << endl;
		//先判断原来堆区是否有数据，如果有，先释放
		if (this->pArray != NULL)
		{
			delete[] this->pArray;
			this->pArray = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pArray = new T[this->m_Capacity];
		for (int i = 0; i < arr.m_Capacity; i++)
		{
			this->pArray[i] = arr.pArray[i];
		}
		return *this;
	}


	~MyArray()
	{
		//cout << "析构函数" << endl;
		if (this->pArray != NULL)
		{
			delete[] this->pArray;
			this->pArray = NULL;
		}
	}

	//尾插法
	void Push_Back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pArray[this->m_Size] = val;
		this->m_Size++;
	}

	//尾删法
	void Pop_Back()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//用户可以通过下标访问数组元素
	T& operator[](int index)
	{
		return this->pArray[index];
	}

	//用户可以获取私有属性
	int getCapacity()
	{
		return this->m_Capacity;
	}
	int getSize()
	{
		return this->m_Size;
	}

private:
	T * pArray;
	int m_Capacity;//数组容量，最大元素个数
	int m_Size;//数组当前大小
};


