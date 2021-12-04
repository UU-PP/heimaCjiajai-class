#include "myarray.hpp"

#include <string>

//案例描述：实现一个通用数组类，要求如下：
//可以对内置数据类型以及自定义数据类型的数据进行存储
//将数组中的数据存储到堆区
//构造函数中可以传入数组的容量
//提供对应的拷贝构造函数以及operator=防止浅拷贝的问题
//提供尾插法和尾删法对数组中的数据进行增加和删除
//可以通过下标的方式访问数组中的元素
//可以获取数组中当前元素个数和数组的容量



//显示MyArray类型的数组
void showMyArray(MyArray<int> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

//测试内置数据类型
void test01()
{
	MyArray<int> array1(5);
	/*MyArray<int> array2(array1);
	MyArray<int> array3(10);
	array3 = array2;*/
	for (int i = 0; i < array1.getCapicity(); i++)
	{
		array1.pushBack(i);
	}
	cout << "显示array1" << endl;
	showMyArray(array1);
	cout << "array1的容量：" << array1.getCapicity() << "array1的大小：" << array1.getSize() << endl;

	MyArray<int> array2(array1);
	array2.popBack();
	cout << "显示array2" << endl;
	showMyArray(array2);
	cout << "array2的容量：" << array2.getCapicity() << "array2的大小：" << array2.getSize() << endl;
}


//测试自定义数据类型
class Person
{
public:
	Person(){};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};

void showPersonArray(MyArray<Person> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << "年龄：" << arr[i].m_Age << endl;
	}
}

void test02()
{
	//创建数组
	MyArray<Person> arrperson(10);
	Person p1("孙悟空", 100);
	Person p2("猪八戒", 100);
	Person p3("沙和尚", 100);
	Person p4("唐僧哥哥", 100);
	//插入数据
	arrperson.pushBack(p1);
	arrperson.pushBack(p2);
	arrperson.pushBack(p3);
	arrperson.pushBack(p4);
	//显示
	showPersonArray(arrperson);
	//容量大小
	cout << "arrperson的容量：" << arrperson.getCapicity() << "arrperson的大小：" << arrperson.getSize() << endl;
}

int main(void)
{
	test01();
	test02();

	system("pause");

	return 0;
}
