#pragma once
#include "vec2.h"
#include "Keyboard.h"
#include  "Graphics.h"
#include  <random>
#include  "Poo.h"

class Poo;

class wanjia
{
	public://���к������Ա�����
		wanjia(); //����wanjia
		void yidongA(const Keyboard& kbd);				//���A�����ƶ�
		void yidongB(const Keyboard& kbd);				//���B�����ƶ�
		void huizhiA(Graphics& gfx) const;				//�������a��ͼ��
		void huizhiB(Graphics& gfx) const;				//�������B��ͼ��
		static constexpr	Vec2 lian = { 20,20 };		//��̬ �㶨   //lian �� ��� ͼƬ���ش�С
		Vec2 getpos()const { return  pos + lian * 0.5; }//��ȡ��ҵ�����
		void jifen(const Poo& p);						//���poo������ID�����ҵ�ID �Ҿ͵÷�
		int getid()const { return id; }					//�õ������ID
		int getfenshu()const { return fenshu; }			//�õ�����
		void wanjiaAfenshu(Graphics& gfx) const;		//����A�ķ���
		void wanjiaBfenshu(Graphics& gfx) const;		//����A�ķ���
		void wanjia::jianqie();							//����������ֵ��Сֵ
	private://˽�к��� �޷�����
		std::random_device rd;							//���ֵ����
		std::mt19937 rand;								//���
		std::uniform_int_distribution <int> fenX;		//����
		std::uniform_int_distribution <int> fenY;		//��������
		Vec2 pos = { 400, 300 };
		Vec2 v = { 5,5 };
		int fenshu = 0;									//�����������Գ�ʼ��Ϊ0
		int id;											//����ID����
	
//**********************��Ա����***************************//
};

