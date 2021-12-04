#include <iostream>
using namespace std;
#include <string>

//string 查找和替换
//功能描述
///查找：查找指定字符串是否存在
//替换：在指定位置替换字符串

//函数原型：
//int find（const string& str，int pos = 0）const; 查找str第一次出现的位置，从pos开始查找
//int find（const char* s，int pos = 0）const		查找s第一次出现的位置，从pos开始查找
//int find（const chat* s，int pos，int n）const	从pos位置查找s的前n个字符的第一次位置
//int find（const char c，int pos = 0）const		查找字符c第一次出现的位置
//int rfind（const string& str，int pos = npos）const 查找str最后一次位置从pos开始查找
//int rfind （const char* s，int pos = npos）const 查找s最后一次出现位置，从POS开始查找
//int rfind（const char* s，int pos，int n）const 从pos查找s的前n个最后一次位置
//int rfind（const char c，int pos = 0） const	查找字符c最后一次出现位置
//stirng& replace（int pos，int n，const string& str） 将从pos开始的n字符替换为str字符串
//string& replace（int pos，int n，const char* s）	将从pos开始的n字符替换为str字符串

//查找
void test01()
{
	//int find（const string& str，int pos = 0）const; 查找str第一次出现的位置，从pos开始查找
	string str = "abcdefgha";
	int pos = str.find("cd");
	if (pos == -1)
	{
		cout << "cd未找到" << endl;
	}
	else
	{
		cout << "cd位置为" << pos << endl;
	}
	//int rfind（const string& str，int pos = npos）const 查找str最后一次位置从pos开始查找
	pos = str.rfind("a");
	if (pos == -1)
	{
		cout << "a未找到" << endl;
	}
	else
	{
		cout << "a位置为" << pos << endl;
	}
}

//替换
void test02()
{
	//stirng& replace（int pos，int n，const string& str） 将从pos开始的n字符替换为str字符串
	string str = "abcdefg";
	str.replace(1, 1, "1111");
	cout << str << endl;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
