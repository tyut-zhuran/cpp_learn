#pragma once
# include <iostream>
using namespace std;
#include <string>

template <class T>
class MyArray
{
public:
	//�вι���
	MyArray(int capacity)
	{
		//cout << "�вι���" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
 		this->pArray = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		//cout << "��������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//���
		this->pArray = new T[this->m_Capacity];
		for (int i = 0; i < arr.m_Capacity; i++)
		{
			this->pArray[i] = arr.pArray[i];
		}

	}

	//��������ط�ֹǳ����
	MyArray & operator= (const MyArray& arr)
	{
		//cout << "operator ����" << endl;
		//���ж�ԭ�������Ƿ������ݣ�����У����ͷ�
		if (this->pArray != NULL)
		{
			delete[] this->pArray;
			this->pArray = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
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
		//cout << "��������" << endl;
		if (this->pArray != NULL)
		{
			delete[] this->pArray;
			this->pArray = NULL;
		}
	}

	//β�巨
	void Push_Back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pArray[this->m_Size] = val;
		this->m_Size++;
	}

	//βɾ��
	void Pop_Back()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//�û�����ͨ���±��������Ԫ��
	T& operator[](int index)
	{
		return this->pArray[index];
	}

	//�û����Ի�ȡ˽������
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
	int m_Capacity;//�������������Ԫ�ظ���
	int m_Size;//���鵱ǰ��С
};


