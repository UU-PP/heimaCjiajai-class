#include <iostream>
using namespace std;
#include <string>

//����ģ�������̳�ʱ����Ҫע��һ�¼��㣺
//������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ��������T������
//�����ָ�����������޷�����������ڴ�
//��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��

template<class T>
class Base
{
	T m;
};

//class Son1:public Base //����C++������Ҫ����������ڴ棬����֪��������T�����Ͳſ������¼̳�
class Son1 :public Base<int>//����ָ��һ������
{
};
void test01()
{
	Son1 s;
}

//��ģ��̳���ģ�壬������T2ָ�������е�T����
template <class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
};
void test02()
{
	Son2<int, char> child;
}

int main(void)
{
	test01();
	test02();

	system("pause");

	return 0;
}
//�ܽ᣺
//�����������ģ�壬������Ҫָ����������T����������
