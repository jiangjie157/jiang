#pragma once
#include "vec2.h"
#include "Graphics.h"
#include "wanjia.h"
#include <random>
class wanjia;

class Poo
{
public:
	Poo();//���캯�� Ĭ�ϵĹ��캯��û�в��� ÿ��������Poo����ִ��
	//poo�Զ��ƶ�
	//���poo������һ���ʧ
	//poo�����߽��ᷴ��
	void  huizhi_Poo(Graphics& gfx)const;
	void  yidong_Poo();
	static constexpr	Vec2 poofen = { 24,24 };  // poofen �� Poo ͼƬ���ش�С
	void  pooxiaoshi( wanjia& a);//������ʧ
	bool  getpengzhuang()const { return pengzhuang; }//��ȡpengzhuangֵ  
	void  fandanp();
	static constexpr	Vec2 byou = {799-24,599-24};//�Լ����������ұ�
	int  getchiwo()const { return chiwo; }

	
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

};

