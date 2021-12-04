#include <iostream>
using namespace std;
#include <string>

//string基本概念
//本质：
//string是C++风格的字符串，而string本质上是一个类

//string和char*区别
//char* 是一个指针
//string是一个类，类内部分装了char*，管理这个字符串，是一个char*型的容器

//特点：
//string内部封装了很多成员方法
//例如：查找find，拷贝copy，删除delete，替换replace，插入insert
//string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

//stirng构造函数
//构造函数原型
//string（）；		创建一个空的字符串
//string（const char* s）	使用c语言的字符串来初始化C++的字符串
//string（const string& str）	拷贝构造
//string（int n，char c）	使用n个字符c初始化

void test01()
{
	//string（）；		创建一个空的字符串
	string s1();
	//string（const char* s）	使用c语言的字符串来初始化C++的字符串
	const char* str = "hello worle!";
	string s2(str);
	cout << "s2 = " << s2 << endl;
	//string（const string& str）	拷贝构造
	string s3(s2);
	cout << "s3 = " << s3 << endl;
	//string（int n，char c）	使用n个字符c初始化
	string s4(10, 'e');
	cout << "s4 = " << s4 << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
