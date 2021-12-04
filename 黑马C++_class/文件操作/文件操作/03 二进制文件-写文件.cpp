#include <iostream>
using namespace std;
#include <string>
#include <fstream>

//二进制文件 写文件

class Person
{
public:
	char m_Name[64];//姓名
	int m_Age;//年龄
};

void test01()
{
	//1、包含头文件
	//2、创建输出流对象
	ofstream ofs;

	//3、打开文件
	ofs.open("person.txt", ios::out | ios::binary);

	//4、写文件
	Person person = { "张三",18 };
	ofs.write((const char*)&person,sizeof(person)); 

	//5、关闭文件
	ofs.close();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
