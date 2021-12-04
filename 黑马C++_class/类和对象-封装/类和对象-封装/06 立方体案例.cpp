#include <iostream>
using namespace std;

//立方体类设计
//1、创建立方体类
//2、设计属性
//3、设计行为 获取立方体面积和体积
//4、分别利用全局函数和成员函数 判断两个立方体是否相等

class Cube
{
public:
	//设置长
	void serL(int l)
	{
		m_L = l;
	}

	//获取长
	int getL()
	{
		return m_L;
	}

	//设置高
	void serH(int h)
	{
		m_H = h;
	}

	//获取高
	int getH()
	{
		return m_H;
	}

	//设置宽
	void serW(int w)
	{
		m_W = w;
	}

	//获取宽
	int getW()
	{
		return m_W;
	}

	//获取立方体的面积
	int calculateS()
	{
		return 2 * m_L*m_W + 2 * m_W*m_H + 2 * m_H*m_L;
	}

	//获取立方体的体积
	int calculateV()
	{
		return m_L*m_W*m_H;
	}

	//利用成员函数来判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if ((m_H == c.getH()) && (m_L == c.getL()) && (m_W == c.getW()))
			return true;
		else
			return false;
	}

private:
	//长
	int m_L;
	//高
	int m_H;
	//宽
	int m_W;
};

//用全局函数判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
	if ((c1.getH() == c2.getH()) && (c1.getL() == c2.getL()) && (c1.getW() == c2.getW()))
		return true;
	else
		return false;
}

int main(void)
{
	//创建立方体的对象
	Cube c1;
	c1.serL(10);
	c1.serW(10);
	c1.serH(10);

	//创建另一个立方体对象
	Cube c2;
	c2.serL(11);
	c2.serW(10);
	c2.serH(10);

	cout << "立方体c1的面积为： " << c1.calculateS() << endl;
	cout << "立方体c1的体积为： " << c1.calculateV() << endl;

	//用全局函数判断两个立方体是否相等
	if (isSame(c1, c2))
	{
		cout << "两个立方体相等" << endl;
	}
	else
	{
		cout << "两个立方体不等" << endl;
	}

	//用成员函数判断两个立方体是否相等
	if (c1.isSameByClass(c2))
	{
		cout << "成员函数判断： 两个立方体相等" << endl;
	}
	else
	{
		cout << "成员函数判断： 两个立方体不等" << endl;
	}

	system("pause");

	return 0;
}
