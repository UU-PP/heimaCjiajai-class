#include<iostream>
using namespace std;
#include<string>
int main()
{

	system("pause");
	cout << "��ĵ��Խ���100���ػ���������   ������   ȡ���ػ�" << endl;
	system("shutdown -s -t 100");
	while (1)
	{
		cout << "������" << endl;
		string s;
		cin >> s;
		if (s == "������")
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}