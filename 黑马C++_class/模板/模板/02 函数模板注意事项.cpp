#include <iostream>
using namespace std;
#include <string>

//����ģ��ע������
//1���Զ������Ƶ��������Ƶ���һ�µ���������T����ʹ��
template <typename T>
void mySwap(T &a, T &b)
{
	T temp;
	tmep = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//mySwap(a, b);//��ȷ!
	//mySwap(a, c);//�����Ƶ�������Tһ�µ���������
}

//2��ģ�����Ҫȷ����T���������ͣ�����ʹ��
template <typename T>
void func()
{
	cout << "nihao" << endl;
}
void test02()
{
	//func();//������Ϊû��ȷ��ģ����T�ľ���������ɶ
	func<int>();//��ȷ������ʽ�������͵ķ�ʽ ָ��ģ����T�ľ�������������ɶ
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
