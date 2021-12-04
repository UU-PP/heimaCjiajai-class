#include <iostream>
using namespace std;
#include <string>

//案例描述
//制作饮品的大致流程为：煮水-冲泡-倒入杯中-加入辅料
//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶

//饮品制作抽象类
class AbstractDrinking
{
public:

	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入辅料
	virtual void PutSomeThing() = 0;

	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomeThing();
	}
};

//煮咖啡
class Coffee : public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomeThing()
	{
		cout << "加入糖和咖啡" << endl;
	}
};

//煮茶叶
class Tea : public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮矿泉水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomeThing()
	{
		cout << "加入枸杞" << endl;
	}
};

//制作饮品接口
void doWork(AbstractDrinking * abs)
{
	abs->makeDrink();
}

void test01()
{
	AbstractDrinking * abc = new Coffee;
	doWork(abc);
	delete abc;

	cout << "--------------------" << endl;
	abc = new Tea;
	doWork(abc);
	delete abc;
	
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
