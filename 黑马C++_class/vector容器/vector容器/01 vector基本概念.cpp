#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector基本概念
//功能：
//vector数据结构和数组非常相似，也称为单端数组

//vector与普通数组的区别：
//不同之处在于数组是静态空间，而vector可以动态扩展

//动态扩展：
//并不是在原空间之后接续新空间，而是找更大的内存空间，然后将元数据拷贝新空间，释放源空间
//vector容器的迭代器是支持随机访问的迭代器

//vector构造函数
//功能描述：
//创建vector容器

//函数原型：
//vector<T> v; 采用模板实现类，默认构造函数
//vector（v.begin(),v.end()）; 将v[begin(),end()]区间中的元素拷贝给本身
//vector（n，elem）	构造函数将n个elem拷贝给本身
//vectir（const vector &vec）	拷贝构造函数

void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//vector<T> v; 采用模板实现类，默认构造函数
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	//vector（v.begin(),v.end()）; 将v[begin(),end()]区间中的元素拷贝给本身
	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);
	//vector（n，elem）	构造函数将n个elem拷贝给本身
	vector<int> v3(10, 100);
	printVector(v3);
	//vectir（const vector &vec）	拷贝构造函数
	vector<int> v4(v3);
	printVector(v4);
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
