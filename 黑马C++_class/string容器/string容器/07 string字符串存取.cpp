#include <iostream>
using namespace std;
#include <string>

//string 中单个字符存取有两种方式
//char& operator[]（int n） 通过[]方法获取字符
//char& at（int n） 通过at方法获取字符

void test01()
{
	//char& operator[]（int n） 通过[]方法获取字符
	string str = "hello";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//char& at（int n） 通过at方法获取字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//修改
	str[0] = 'x';
	cout << str << endl;
	str.at(1) = 'x';
	cout << str << endl;

}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
