#include "circle.h"



//设置半径
void Circle::setR(int r)
{
	Circle::m_R = r;
}

//获取半径
int Circle::getR()
{
	return Circle::m_R;
}

//设置圆心
void Circle::setCenter(Point center)
{
	Circle::m_Center = center;
}
//获取圆心
Point Circle::getCenter()
{
	return Circle::m_Center;
}