#include <iostream>
using namespace std;
#include <string>

//����������
//1�����ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
//2���������Ӵ�С�������㷨Ϊѡ������
//3���ֱ�����char�����int������в���

//����ģ��
template <typename T>
void mySwap(T &a, T &b)//����һ��Ҫ����a b ���� ����ʵ��a bֵ�ǲ��ύ����
{
	T temp = a;
	a = b;
	b = temp;
}

//����ģ��
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

//�ṩ��ӡ����ģ��
template <typename T>
void printfArr(T arr, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//����char���͵����ݽ��н���
void test01()
{
	char charArr[] = "abcdgefh";
	int num = sizeof(charArr) / sizeof(char);
	cout << sizeof(char) << endl;
	cout << sizeof(charArr) << endl;
	mySort(charArr, num);
	printfArr(charArr, num);
}

//����int���͵����ݽ��н���
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
