/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"



Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{	
	gfx.BeginFrame();
	jiancekai(wnd.kbd);//检测是否按下回车

	if(youxikaishi)//如果youxijiance=1 才开始数据检测
		UpdateModel();

	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{	
	a.yidongA(wnd.kbd);//移动
	a.jianqie();//限制  最大值最小值 玩家的 
	c.yidongB(wnd.kbd);//移动
	c.jianqie();//限制  最大值最小值 玩家的 
	for (int i = 0; i < numP; i++)//进行下面的的循环以达到积分反弹POO的移动等等
	{	
		if (!p[i].getpengzhuang())//如果不被碰撞则进行下列
		{
			p[i].yidong_Poo();  //移动Poo
			p[i].fandanp();    //反弹Poo裁切
			p[i].pooxiaoshi(a);//检测 来判断pengzhuang是否=0？；
			if (!p[i].getpengzhuang())
				p[i].pooxiaoshi(c);

			a.jifen(p[i]);//计算分数
			c.jifen(p[i]);
		}
	}	
}



void Game::ComposeFrame()
{	
	if (p[0].getpnum() == 0)
		youxijieshu = 1;

	if (youxijieshu)
		wanjie(Graphics::zhongxin.x - jieshu.x*0.5, Graphics::zhongxin.y - jieshu.y*0.5);

	if (!youxikaishi)//游戏没开始
		fengmian(Graphics::zhongxin.x - kaishi.x*0.5, Graphics::zhongxin.y - kaishi.y*0.5);
	else//如果游戏开始了就 绘制P 和AC 玩家积分和玩家
	{
		for (int i = 0; i < numP; i++)//狗屎
		{
			if (!p[i].getpengzhuang())
				p[i].huizhi_Poo(gfx);
		}

		a.wanjiaAfenshu(gfx);//积分条
		c.wanjiaBfenshu(gfx);
		a.huizhiA(gfx);//绘制玩家的脸
		c.huizhiB(gfx);//绘制
	}

	/*游戏结束
	bool allp = 1;

	for (int i=0; i< numP; i++)//这个 进行youxijieshu这个值得判断 
		{	
			allp = allp && p[i].getpengzhuang();//两者都为真 才为真 这个ALLP 是1  然后检测吃到没有如果吃到合并就为真 不然为假
			youxijieshu = allp;
		}*/
	
}
	