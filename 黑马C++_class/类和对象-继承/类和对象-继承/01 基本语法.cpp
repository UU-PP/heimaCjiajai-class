#include <iostream>
using namespace std;
#include <string>

////普通实现页面
////Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登陆、注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图..(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Pathon、C++、...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Java教学视频" << endl;
//	}
//};
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登陆、注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图..(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Pathon、C++、...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Python教学视频" << endl;
//	}
//};
////C++页面
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登陆、注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图..(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Pathon、C++、...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "C++教学视频" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java的下载视频如下" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "--------------------" << endl;
//	cout << "Python的下载视频如下" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "--------------------" << endl;
//	cout << "C++的下载视频如下" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}

//继承实现页面

//公共页面类
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登陆、注册...(公共头部)" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图..(公共底部)" << endl;
	}
	void left()
	{
		cout << "Java、Pathon、C++、...(公共分类列表)" << endl;
	}
};
//继承的好处：减少重复代码
//派生类中的成员，包含两大部分：
//一类是从基类中继承过来的，一类是自己增加的成员
//从基类继承过来的表现其共性，而新增的成员体现了其个性

//语法： calss 子类 ： 继承方法 父类
//子类 也称为 派生类
//父类 也称为 基类

//Java页面
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Java教学视频" << endl;
	}
};
//Python页面
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python教学视频" << endl;
	}
};
//C++页面
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++教学视频" << endl;
	}
};

void test01()
{
	cout << "Java的下载视频如下" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "--------------------" << endl;
	cout << "Python的下载视频如下" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "--------------------" << endl;
	cout << "C++的下载视频如下" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
