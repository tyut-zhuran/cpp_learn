#pragma once
# include "worker.h"

# include <iostream>

using namespace std;

# include <string >

class Manager :public Worker
{
public:
	//���캯��
	Manager(int id,string name,int dept);
	virtual void showInfo();
	virtual string getDeptName();
};



