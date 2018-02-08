#include "Xiaofang.h"

xfk::xfk()
	:
	rand(rd()),
	fenX(0, Graphics::max.x - res.x),
	fenY(0, Graphics::max.y - res.y)
	
{
	pos.x = fenX(rand);
	pos.y = fenY(rand);
	

}

void xfk::xfkxiaoshi(wanjia & a)
{
	if (a.getpos().x > pos.x - 5 &&
		a.getpos().x < pos.x + res.x + 5 &&
		a.getpos().y > pos.y - 5 &&
		a.getpos().y < pos.y + res.y + 5)
	{
		pengzhuang = 1;
	}
}

void xfk::faguang()
{
	static bool incerasing = 1;//英文  增长 判断是否在增长中的变量
	if (incerasing)
	{
		color.SetR(color.GetR() + 1);
		color.SetG(color.GetG() + 2);
		color.SetB(color.GetB() + 2);
		if(color.GetR() >=253)
			incerasing = 0;
	}
	else
	{
		color.SetR(color.GetR() -1);
		color.SetG(color.GetG() - 2);
		color.SetB(color.GetB() - 2);
		if (color.GetR() <= 127)
			incerasing = 1;
	}
}

void xfk::huizhi_F(Graphics & gfx) const
{
	gfx.Huizhige(pos.x, pos.y, res.x, res.y, color);
}
