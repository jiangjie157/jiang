#pragma once
#include "Poo.h"
#include "Vec2.h"
#include "Graphics.h"
#include <random>
#include "Wanjia.h"

class xfk
{
public:
	xfk();//随机初始位置
	void  xfkxiaoshi(wanjia& a);//小方块检测
	void  chongzhizt();//重置 状态
	void  faguang();
	void  huizhi_F(Graphics& gfx)const;//绘制
	static constexpr Vec2 res = { 15,15 };

private:
	std::random_device rd;
	std::mt19937 rand;
	std::uniform_int_distribution <int> fenX;
	std::uniform_int_distribution <int> fenY;
	
	Color color = { 127,0,0 };
	Vec2 pos ;
	bool pengzhuang=0;

};


