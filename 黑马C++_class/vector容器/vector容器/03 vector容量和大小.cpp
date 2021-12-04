#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector容量大小
//功能描述：
//对vector容器的容量和大小操作
//函数原型:
//empty（）	判断容器是否为空
//capacity（）	容器的容量
//size(int num)	返回指定容器的长度num，若容器变长，则以默认值填充新位置
//			如果容器变短，则末尾 超出容器长度的元素删除
//resize（int num, elem）	重新指定容器的长度为num，若容器变长，则以elem的值填充新位置
//				如果容器变短，则末尾超出容器长度的元素被删除

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (!v1.empty())
	{
		cout << "非空" << endl;
		cout << "v1容量：" << v1.capacity() << endl;
		cout << "v1大小：" << v1.size() << endl;
	}
	else
	{
		cout << "空" << endl;
	}

	v1.resize(15);
	printVector(v1);
	cout << "v1容量：" << v1.capacity() << endl;
	cout << "v1大小：" << v1.size() << endl;
	cout << "----------------" << endl;

	v1.resize(16, 100111);
	printVector(v1);
	cout << "v1容量：" << v1.capacity() << endl;
	cout << "v1大小：" << v1.size() << endl;

	v1.resize(5);
	printVector(v1);
	cout << "v1容量：" << v1.capacity() << endl;
	cout << "v1大小：" << v1.size() << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
