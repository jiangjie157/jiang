#pragma once
struct Vec2           //���� һ��Vec2
{	/*************************��Ա����***********************/
	int x=0;
	int y=0;
	Vec2 operator +=(const Vec2& b); //�������뺯��
	Vec2 operator -=(const Vec2& b);
	void   caiqie(const Vec2& min, const Vec2& max);
	/*************************��Ԫ����************************************/
	friend Vec2 operator + (const Vec2& a, const Vec2& b);
	friend Vec2 operator - (const Vec2& a, const Vec2& b);
	friend Vec2 operator * (const Vec2& a,  float b );
	
};
 