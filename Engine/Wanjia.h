#pragma once
#include "vec2.h"
#include "Keyboard.h"
#include  "Graphics.h"
#include  <random>
#include  "Poo.h"

class Poo;

class wanjia
{
	public://公有函数可以被访问
		wanjia(); //构建wanjia
		void yidongA(const Keyboard& kbd);				//玩家A键盘移动
		void yidongB(const Keyboard& kbd);				//玩家B键盘移动
		void huizhiA(Graphics& gfx) const;				//绘制玩家a的图形
		void huizhiB(Graphics& gfx) const;				//绘制玩家B的图形
		static constexpr	Vec2 lian = { 20,20 };		//静态 恒定   //lian 是 玩家 图片像素大小
		Vec2 getpos()const { return  pos + lian * 0.5; }//获取玩家的属性
		void jifen(const Poo& p);						//如果poo吃我者ID等于我的ID 我就得分
		int getid()const { return id; }					//得到下面的ID
		int getfenshu()const { return fenshu; }			//得到分数
		void wanjiaAfenshu(Graphics& gfx) const;		//绘制A的分数
		void wanjiaBfenshu(Graphics& gfx) const;		//绘制A的分数
		void wanjia::jianqie();							//限制玩家最大值最小值
	private://私有函数 无法访问
		std::random_device rd;							//随机值种子
		std::mt19937 rand;								//随机
		std::uniform_int_distribution <int> fenX;		//限制
		std::uniform_int_distribution <int> fenY;		//限制种子
		Vec2 pos = { 400, 300 };
		Vec2 v = { 5,5 };
		int fenshu = 0;									//建立分数属性初始化为0
		int id;											//建立ID属性
	
//**********************成员函数***************************//
};

