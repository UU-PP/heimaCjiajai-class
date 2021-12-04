#include <iostream>
using namespace std;
#include <string>

//菱形继承问题以及解决方法
//动物类
class Animal
{
public:
	int m_Age;
};

//利用虚继承 解决菱形继承的问题
//继承之前 加上关键字 virtual 变为虚继承
//Animal类称为 虚基类
//羊类
class Sheep : virtual public Animal
{

};

//骆驼类
class Tuo : virtual public Animal
{

};

//羊驼类
class SheepTuo : public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo st;

	
	st.Tuo::m_Age = 28;
	st.Sheep::m_Age = 18;
	//当菱形继承 两个父类拥有相同数据 需要加以作用域区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;
}
//可以利用 开发人员命令行 来看SheepTuo 类的具体架构

int main(void)
{
	test01();

	system("pause");

	return 0;
}
//菱形继承带来的主要问题 是子类继承两份相同的数据 导致资源浪费 以及毫无意义
//利用虚继承 可以解决菱形继承问题
