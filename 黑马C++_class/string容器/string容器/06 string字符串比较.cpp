#include <iostream>
using namespace std;
#include <string>

//string字符串比较
//功能：
//按字符串的ASCII码进行比较
//返回 0
//返回 1
//返回 -1

//函数原型
//int compare（const string &s） const 与字符串s比较
//int compare（const char *s） const 与字符串s比较

void test01()
{
	string str1 = "hello";
	string str2 = "hello";
	int rec = str1.compare(str2);
	if (rec == 0)
	{
		cout << "str1 = str2" << endl;
	}
	else if (rec>0)
	{
		cout << "str1>str2" << endl;
	}
	else
	{
		cout << "str1<str2" << endl;
	}

}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
