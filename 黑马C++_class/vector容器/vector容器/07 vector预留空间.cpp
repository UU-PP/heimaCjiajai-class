
#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector预留空间
//功能描述：
//减少vector在动态扩展容量时的扩展次数 节约时间
//函数原型：
//reserve(int len)	为容器预留len个元素长度，预留位置不初始化，元素不可访问

void test01()
{
	vector<int> v;
	int num = 0;
	int *p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;//num = 30;
}

void test02()
{
	vector<int> v;
	v.reserve(100000);

	int num = 0;
	int *p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;//num = 1;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}

