#include "circle.h"



//���ð뾶
void Circle::setR(int r)
{
	Circle::m_R = r;
}

//��ȡ�뾶
int Circle::getR()
{
	return Circle::m_R;
}

//����Բ��
void Circle::setCenter(Point center)
{
	Circle::m_Center = center;
}
//��ȡԲ��
Point Circle::getCenter()
{
	return Circle::m_Center;
}