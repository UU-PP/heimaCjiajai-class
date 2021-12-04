#include <iostream>
using namespace std;
#include <string>

//案例描述：
//1、利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
//2、排序规则从大到小，排序算法为选择排序
//3、分别利用char数组和int数组进行测试

//交换模板
template <typename T>
void mySwap(T &a, T &b)//这里一定要传入a b 引用 否则实际a b值是不会交换的
{
	T temp = a;
	a = b;
	b = temp;
}

//排序模板
template <typename T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		   mySwap(arr[max],arr[i]);
	}
}

//提供打印数组模板
template <typename T>
void printfArr(T arr, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//测试char类型的数据进行交换
void test01()
{
	char charArr[] = "abcdgefh";
	int num = sizeof(charArr) / sizeof(char);
	cout << sizeof(char) << endl;
	cout << sizeof(charArr) << endl;
	mySort(charArr, num);
	printfArr(charArr, num);
}

//测试int类型的数据进行交换
void test02()
{
	int intArr[] = { 1, 2, 3, 4 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printfArr(intArr, num);

}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
