#include "vec2.h"

Vec2 Vec2::operator+=(const Vec2& b)//常引用 重载+= struct 内可以用{}  class不可以
{	
	x += b.x;
	y += b.y;
	return { x,y };
}
Vec2 Vec2::operator-=(const Vec2& b)//-=
{
	x -= b.x;
	y -= b.y;
	return { x,y };
}

void Vec2::caiqie(const Vec2 & min, const Vec2 & max)// 我小于最小值 取最小值 我大于最大值则取最大值
{	
	x = x < min.x ? min.x : x;
	x = x > max.x ? max.x : x;
	y = y < min.y ? min.y : y;
	y = y > max.y ? max.y : y;
	
}

Vec2 operator-(const Vec2& a,const Vec2& b)//-=
{
	return { a.x - b.x,a.y - b.y };
}

Vec2 operator*(const Vec2 & a, float b)
{
	return {int(a.x*b),int(a.y*b)};
}

Vec2 operator+(const Vec2 & a, const Vec2 & b)
{
	return { a.x + b.x,a.y + b.y };
}
