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
	jiancekai(wnd.kbd);//����Ƿ��»س�

	if(youxikaishi)//���youxijiance=1 �ſ�ʼ���ݼ��
		UpdateModel();

	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{	
	a.yidongA(wnd.kbd);//�ƶ�
	a.jianqie();//����  ���ֵ��Сֵ ��ҵ� 
	c.yidongB(wnd.kbd);//�ƶ�
	c.jianqie();//����  ���ֵ��Сֵ ��ҵ� 
	for (int i = 0; i < numP; i++)//��������ĵ�ѭ���Դﵽ���ַ���POO���ƶ��ȵ�
	{	
		if (!p[i].getpengzhuang())//���������ײ���������
		{
			p[i].yidong_Poo();  //�ƶ�Poo
			p[i].fandanp();    //����Poo����
			p[i].pooxiaoshi(a);//��� ���ж�pengzhuang�Ƿ�=0����
			if (!p[i].getpengzhuang())
				p[i].pooxiaoshi(c);

			a.jifen(p[i]);//�������
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

	if (!youxikaishi)//��Ϸû��ʼ
		fengmian(Graphics::zhongxin.x - kaishi.x*0.5, Graphics::zhongxin.y - kaishi.y*0.5);
	else//�����Ϸ��ʼ�˾� ����P ��AC ��һ��ֺ����
	{
		for (int i = 0; i < numP; i++)//��ʺ
		{
			if (!p[i].getpengzhuang())
				p[i].huizhi_Poo(gfx);
		}

		a.wanjiaAfenshu(gfx);//������
		c.wanjiaBfenshu(gfx);
		a.huizhiA(gfx);//������ҵ���
		c.huizhiB(gfx);//����
	}

	/*��Ϸ����
	bool allp = 1;

	for (int i=0; i< numP; i++)//��� ����youxijieshu���ֵ���ж� 
		{	
			allp = allp && p[i].getpengzhuang();//���߶�Ϊ�� ��Ϊ�� ���ALLP ��1  Ȼ����Ե�û������Ե��ϲ���Ϊ�� ��ȻΪ��
			youxijieshu = allp;
		}*/
	
}
	