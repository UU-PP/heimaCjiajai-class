#include <iostream>
using namespace std;
#include <string>
#include <fstream>

//读文件
//读文件步骤
//1、包含头文件 #include <fstream>
//2、创建流对象 ifstream ifs
//3、打开文件本判断是否打开成功 ifs.open("文件路径",打开方式)
//4、读数据 有四种方式读取
//5、关闭文件 ifs.close();

void test01()
{
	//1、包含头文件 #include <fstream>

	//2、创建流对象 ifstream ifs
	ifstream ifs;

	//3、打开文件本判断是否打开成功 ifs.open("文件路径",打开方式)
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "the file is opened filed" << endl;
	}

	//4、读数据 有四种方式读取

	//第一种
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//第二种
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
 	}*/

	//第四种
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}

	//5、关闭文件 ifs.close();
	ifs.close(); 
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
