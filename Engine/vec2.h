#pragma once
struct Vec2           //创建 一个Vec2
{	/*************************成员函数***********************/
	int x=0;
	int y=0;
	Vec2 operator +=(const Vec2& b); //重新载入函数
	Vec2 operator -=(const Vec2& b);
	void   caiqie(const Vec2& min, const Vec2& max);
	/*************************友元函数************************************/
	friend Vec2 operator + (const Vec2& a, const Vec2& b);
	friend Vec2 operator - (const Vec2& a, const Vec2& b);
	friend Vec2 operator * (const Vec2& a,  float b );
	
};
 