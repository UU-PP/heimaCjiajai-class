#include <iostream>
using namespace std;
#include <string>

//���ַ����л�ȡ��Ҫ���Ӵ�
//����ԭ�ͣ�
//string substr��int pos = 0��int n = npos��const ������pos��ʼ��n���ַ���ɵ��ַ���
void test01()
{
	string str = "abcde";
	string str1 = str.substr(1, 3);
	cout << str1 << endl;
}

//ʹ�ð���
void test02()
{
	string str = "zhangsan@163.com";
	int pos = str.find('@');
	string emailname = str.substr(0, pos);
	cout << emailname << endl;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
