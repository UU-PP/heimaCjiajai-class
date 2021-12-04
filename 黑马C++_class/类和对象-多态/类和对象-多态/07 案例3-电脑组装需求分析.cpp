#include <iostream>
using namespace std;
#include <string>

//��������
//������Ҫ��ɲ���ΪCPU���Կ����ڴ���
//��ÿ�������װ��������� �����ṩ��ͬ�ĳ���������ͬ����� ����inter���� �� Lenovo����
//���������� �ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
//����ʱ��װ��̨��ͬ�ĵ��Խ���

//����ͬ�������
//����cpu��
class CPU
{
public:
	//������ļ��㺯��
	virtual void calculator() = 0;
};

//�����Կ���
class VideoCard
{
public:
	//���������ʾ����
	virtual void display() = 0;
};

//�����ڴ�����
class Memory
{
public:
	//������Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU * cpu, VideoCard * vc, Memory * mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ��������
	void work()
	{
		//������������� ��Ҫ���ø�����ľ���ӿ�
		m_cpu->calculator();
		m_vc->display();
		m_mem->storage();
	}

	//�ṩ�������� �ͷ�3���������
	~Computer()
	{
		//�ͷ�CPU ���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//�ͷ��Կ����
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		//�ͷ��ڴ������
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU * m_cpu;//cpu�����ָ��
	VideoCard * m_vc;//�Կ����ָ��
	Memory * m_mem;//�ڴ������ָ��
};

//�����������
//Intel����
class IntelCpu : public CPU
{
public:
	virtual void calculator()
	{
		cout << "Intel��CPU��ʼ������" << endl;
	}
};
class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ��" << endl;
	}
};
class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�ƴ洢��" << endl;
	}
};

//Lenovo����
class LenovoCpu : public CPU
{
public:
	virtual void calculator()
	{
		cout << "Lenovo��CPU��ʼ������" << endl;
	}
};
class LenovoVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�ƴ洢��" << endl;
	}
};

void test01()
{
	//��һ̨�������
	IntelCpu * intelcpu = new IntelCpu;
	IntelVideoCard * intelvideocard = new IntelVideoCard;
	IntelMemory * intermemory = new IntelMemory;

	//������һ̨���� 
	Computer * computer = new Computer(intelcpu, intelvideocard, intermemory);
	computer->work();
	delete computer;

	cout << "-----------------------------" << endl;
	//�����ڶ�̨����
	//ע��new���� ����ֵ��һ��ָ��
	Computer * computer2 = new Computer(new IntelCpu, new IntelVideoCard, new IntelMemory);
	computer2->work();
	delete computer2;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
