#include <iostream>
using namespace std;
#include <string>

//从字符串中获取想要的子串
//函数原型：
//string substr（int pos = 0，int n = npos）const 返回有pos开始的n个字符组成的字符串
void test01()
{
	string str = "abcde";
	string str1 = str.substr(1, 3);
	cout << str1 << endl;
}

//使用案例
void test02()
{
	string str = "zhangsan@163.com";
	int pos = str.find('@');
	string emailname = str.substr(0, pos);
	cout << emailname << endl;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
