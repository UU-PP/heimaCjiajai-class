#include <iostream>
using namespace std;
#include <string>

//案例描述
//电脑主要组成部件为CPU、显卡、内存条
//将每个零件组装出抽象基类 并且提供不同的厂商生产不同的零件 例如inter厂商 和 Lenovo厂商
//创建电脑类 提供让电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行

//抽象不同的零件类
//抽象cpu类
class CPU
{
public:
	//抽象类的计算函数
	virtual void calculator() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象类的显示函数
	virtual void display() = 0;
};

//抽象内存条类
class Memory
{
public:
	//抽象类的存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(CPU * cpu, VideoCard * vc, Memory * mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//提供工作函数
	void work()
	{
		//让零件工作起来 需要调用各零件的具体接口
		m_cpu->calculator();
		m_vc->display();
		m_mem->storage();
	}

	//提供析构函数 释放3个电脑零件
	~Computer()
	{
		//释放CPU 零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//释放显卡零件
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		//释放内存条零件
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU * m_cpu;//cpu的零件指针
	VideoCard * m_vc;//显卡零件指针
	Memory * m_mem;//内存条零件指针
};

//具体零件厂商
//Intel厂商
class IntelCpu : public CPU
{
public:
	virtual void calculator()
	{
		cout << "Intel的CPU开始计算了" << endl;
	}
};
class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了" << endl;
	}
};
class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始计存储了" << endl;
	}
};

//Lenovo厂商
class LenovoCpu : public CPU
{
public:
	virtual void calculator()
	{
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};
class LenovoVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始计存储了" << endl;
	}
};

void test01()
{
	//第一台电脑零件
	IntelCpu * intelcpu = new IntelCpu;
	IntelVideoCard * intelvideocard = new IntelVideoCard;
	IntelMemory * intermemory = new IntelMemory;

	//创建第一台电脑 
	Computer * computer = new Computer(intelcpu, intelvideocard, intermemory);
	computer->work();
	delete computer;

	cout << "-----------------------------" << endl;
	//创建第二台电脑
	//注意new函数 返回值是一个指针
	Computer * computer2 = new Computer(new IntelCpu, new IntelVideoCard, new IntelMemory);
	computer2->work();
	delete computer2;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
