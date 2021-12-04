#include <iostream>
using namespace std;
#include <string>
#include <fstream>

//二进制读文件主要利用流对象调用成员函数read
//函数原型：istream& read(char *buffer,int len);
//参数解释：字符指针buffer指向内存中一段存储空间，len是读写的字节数

class Person
{
public:
	char m_Name[15];
	int m_Age;
};

//二进制读文件
void test01()
{
	//包含头文件

	//创建流对象
	ifstream ifs;
	//打开文件
	ifs.open("person.txt", ios::in | ios::binary);
	Person person;
	//判断是否打开
	if (!ifs.is_open())
	{
		cout << "open fail" << endl;
		return;
	}
	//读二进制文件
	ifs.read((char *)&person, sizeof(person));//这里char前面不能加const 因为这里需要改变Person中的内容

	//关闭文件
	ifs.close();

	cout << "姓名 " << person.m_Name << " 年龄 " << person.m_Age << endl;
}

int main(void)
{
	test01();



	system("pause");

	return 0;
}
