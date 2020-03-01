# include <iostream>
using namespace std;

//抽象零件类
class CPU
{
public:
	virtual void calculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(CPU *cpu, VideoCard *vc, Memory *mem)
	{
		m_cpu = cpu;
		m_mem = mem;
		m_vc = vc;
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}

		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
	}
	void work()
	{
		m_cpu->calculate();
		m_mem->storage();
		m_vc->display();
	}
private:
	CPU *m_cpu;
	VideoCard *m_vc;
	Memory *m_mem;
};


//IntelCPU
class IntelCPU:public CPU
{
public:
	void calculate()
	{
		cout << "IntelCPU---Calculate()" << endl;
	}
};


class IntelVideoCard :public VideoCard
{
	void display()
	{
		cout << "IntelVideoCard--Display()" << endl;
	}
};

class LenovoMemory :public Memory
{
	void storage()
	{
		cout << "LenovoMemory--Storage()" << endl;
	}
};



void test01()
{
	CPU *intelCPU = new IntelCPU;
	VideoCard *intelCard = new IntelVideoCard;
	Memory *lenovoMemory = new LenovoMemory;

	Computer *computer1 = new Computer(intelCPU,intelCard,lenovoMemory);
	computer1->work();
}


int main()
{

	test01();
	system("pause");
	return 0;
}


