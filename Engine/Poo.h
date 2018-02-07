#pragma once
#include "vec2.h"
#include "Graphics.h"
#include "wanjia.h"
#include <random>
class wanjia;

class Poo
{
public:
	Poo();//构造函数 默认的构造函数没有参数 每次生成新Poo都会执行
	//poo自动移动
	//检测poo碰到玩家会消失
	//poo碰到边界框会反弹
	void  huizhi_Poo(Graphics& gfx)const;
	void  yidong_Poo();
	void  pooxiaoshi( wanjia& a);//碰到消失
	bool  getpengzhuang()const { return pengzhuang; }//提取pengzhuang值  
	void  fandanp();
	int  getchiwo() const { return chiwo;}
	int  getpnum()  const { return pnum ;}//返回当前没被吃掉便便的总数

	static constexpr	Vec2 poofen = { 24,24 };  // poofen 是 Poo 图片像素大小
	static constexpr	Vec2 byou = { 799 - 24,599 - 24 };//自己建立的最右边
private:
	std::random_device rd;
	std::mt19937 rand;
	std::uniform_int_distribution <int> fenX;
	std::uniform_int_distribution <int> fenY;
	std::uniform_int_distribution <int> fenvX;
	std::uniform_int_distribution <int> fenvY;

	Vec2 v = { 1,3 };
	Vec2 pos = { 200,500 };
	bool pengzhuang = 0;
	int  chiwo = -1;
	static int  pnum ;// 便便总数量

};

