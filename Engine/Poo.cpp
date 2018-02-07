#include "Poo.h"
Poo::Poo()
	:
	rand(rd()),
	fenX(0, Graphics::max.x- poofen.x),
	fenY(0, Graphics::max.y- poofen.y),
	fenvX(-2,5),
	fenvY(-2,6)
{	
	pos.x = fenX(rand);
	pos.y = fenY(rand);
	v.x = fenvX(rand);
	v.y = fenvY(rand);
	pnum++;
}
void Poo::huizhi_Poo(Graphics& gfx)const
{
		gfx.PutPixel(14 + pos.x, 0 + pos.y, 138, 77, 0);
		gfx.PutPixel(7 + pos.x, 1 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 1 + pos.y, 138, 77, 0);
		gfx.PutPixel(20 + pos.x, 1 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 2 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 2 + pos.y, 138, 77, 0);
		gfx.PutPixel(20 + pos.x, 2 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 3 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 4 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 4 + pos.y, 138, 77, 0);
		gfx.PutPixel(21 + pos.x, 4 + pos.y, 138, 77, 0);
		gfx.PutPixel(7 + pos.x, 5 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 5 + pos.y, 138, 77, 0);
		gfx.PutPixel(21 + pos.x, 5 + pos.y, 138, 77, 0);
		gfx.PutPixel(7 + pos.x, 6 + pos.y, 138, 77, 0);
		gfx.PutPixel(20 + pos.x, 6 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 7 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 7 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 7 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 7 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 8 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 8 + pos.y, 51, 28, 0);
		gfx.PutPixel(14 + pos.x, 8 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 9 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 9 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 9 + pos.y, 102, 57, 0);
		gfx.PutPixel(13 + pos.x, 9 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 9 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 9 + pos.y, 51, 28, 0);
		gfx.PutPixel(21 + pos.x, 9 + pos.y, 138, 77, 0);
		gfx.PutPixel(10 + pos.x, 10 + pos.y, 51, 28, 0);
		gfx.PutPixel(11 + pos.x, 10 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 10 + pos.y, 102, 57, 0);
		gfx.PutPixel(13 + pos.x, 10 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 10 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 10 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 10 + pos.y, 138, 77, 0);
		gfx.PutPixel(9 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 11 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 11 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(14 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(16 + pos.x, 11 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 12 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 12 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 12 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 12 + pos.y, 111, 62, 0);
		gfx.PutPixel(13 + pos.x, 12 + pos.y, 102, 57, 0);
		gfx.PutPixel(14 + pos.x, 12 + pos.y, 102, 57, 0);
		gfx.PutPixel(15 + pos.x, 12 + pos.y, 102, 57, 0);
		gfx.PutPixel(16 + pos.x, 12 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 13 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 13 + pos.y, 109, 61, 0);
		gfx.PutPixel(11 + pos.x, 13 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 13 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 13 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 13 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 13 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 13 + pos.y, 51, 28, 0);
		gfx.PutPixel(5 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(8 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(11 + pos.x, 14 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 14 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 14 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 14 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 14 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 14 + pos.y, 51, 28, 0);
		gfx.PutPixel(4 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(5 + pos.x, 15 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 15 + pos.y, 116, 65, 0);
		gfx.PutPixel(8 + pos.x, 15 + pos.y, 138, 77, 0);
		gfx.PutPixel(9 + pos.x, 15 + pos.y, 138, 77, 0);
		gfx.PutPixel(10 + pos.x, 15 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(14 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(16 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(17 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(18 + pos.x, 15 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(2 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(3 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(4 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(5 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 16 + pos.y, 116, 65, 0);
		gfx.PutPixel(8 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(9 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(10 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 16 + pos.y, 109, 61, 0);
		gfx.PutPixel(14 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(17 + pos.x, 16 + pos.y, 138, 77, 0);
		gfx.PutPixel(18 + pos.x, 16 + pos.y, 123, 69, 0);
		gfx.PutPixel(19 + pos.x, 16 + pos.y, 51, 28, 0);
		gfx.PutPixel(0 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 17 + pos.y, 87, 49, 0);
		gfx.PutPixel(2 + pos.x, 17 + pos.y, 87, 49, 0);
		gfx.PutPixel(3 + pos.x, 17 + pos.y, 87, 49, 0);
		gfx.PutPixel(4 + pos.x, 17 + pos.y, 87, 49, 0);
		gfx.PutPixel(5 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(6 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 17 + pos.y, 43, 24, 0);
		gfx.PutPixel(8 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(11 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 17 + pos.y, 40, 22, 0);
		gfx.PutPixel(14 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 17 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 17 + pos.y, 138, 77, 0);
		gfx.PutPixel(17 + pos.x, 17 + pos.y, 138, 77, 0);
		gfx.PutPixel(18 + pos.x, 17 + pos.y, 123, 69, 0);
		gfx.PutPixel(19 + pos.x, 17 + pos.y, 51, 28, 0);
		gfx.PutPixel(0 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(2 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(3 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(4 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(5 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(6 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(8 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(11 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(14 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(17 + pos.x, 18 + pos.y, 138, 77, 0);
		gfx.PutPixel(18 + pos.x, 18 + pos.y, 123, 69, 0);
		gfx.PutPixel(19 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(21 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(22 + pos.x, 18 + pos.y, 51, 28, 0);
		gfx.PutPixel(0 + pos.x, 19 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(2 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(3 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(4 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(5 + pos.x, 19 + pos.y, 51, 28, 0);
		gfx.PutPixel(6 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(7 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(8 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(9 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(10 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(17 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(18 + pos.x, 19 + pos.y, 123, 69, 0);
		gfx.PutPixel(19 + pos.x, 19 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(21 + pos.x, 19 + pos.y, 138, 77, 0);
		gfx.PutPixel(22 + pos.x, 19 + pos.y, 65, 36, 0);
		gfx.PutPixel(23 + pos.x, 19 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(2 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(3 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(4 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(5 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(6 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(7 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(8 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(9 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(10 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(11 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(12 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(13 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(14 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(15 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(16 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(17 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(18 + pos.x, 20 + pos.y, 123, 69, 0);
		gfx.PutPixel(19 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(21 + pos.x, 20 + pos.y, 138, 77, 0);
		gfx.PutPixel(22 + pos.x, 20 + pos.y, 65, 36, 0);
		gfx.PutPixel(23 + pos.x, 20 + pos.y, 51, 28, 0);
		gfx.PutPixel(0 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 21 + pos.y, 138, 77, 0);
		gfx.PutPixel(2 + pos.x, 21 + pos.y, 138, 77, 0);
		gfx.PutPixel(3 + pos.x, 21 + pos.y, 138, 77, 0);
		gfx.PutPixel(4 + pos.x, 21 + pos.y, 138, 77, 0);
		gfx.PutPixel(5 + pos.x, 21 + pos.y, 138, 77, 0);
		gfx.PutPixel(6 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(7 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(8 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(9 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(10 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(11 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(12 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(13 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(14 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(15 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(16 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(17 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(18 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(20 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(21 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(22 + pos.x, 21 + pos.y, 51, 28, 0);
		gfx.PutPixel(0 + pos.x, 22 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 22 + pos.y, 65, 36, 0);
		gfx.PutPixel(2 + pos.x, 22 + pos.y, 65, 36, 0);
		gfx.PutPixel(3 + pos.x, 22 + pos.y, 65, 36, 0);
		gfx.PutPixel(4 + pos.x, 22 + pos.y, 65, 36, 0);
		gfx.PutPixel(5 + pos.x, 22 + pos.y, 65, 36, 0);
		gfx.PutPixel(6 + pos.x, 22 + pos.y, 51, 28, 0);
		gfx.PutPixel(1 + pos.x, 23 + pos.y, 51, 28, 0);
		gfx.PutPixel(2 + pos.x, 23 + pos.y, 51, 28, 0);
		gfx.PutPixel(3 + pos.x, 23 + pos.y, 51, 28, 0);
		gfx.PutPixel(4 + pos.x, 23 + pos.y, 51, 28, 0);
		gfx.PutPixel(5 + pos.x, 23 + pos.y, 51, 28, 0);
		gfx.PutPixel(6 + pos.x, 23 + pos.y, 51, 28, 0);
	

}
void Poo::yidong_Poo()
{	
	pos += v;
}
void Poo::pooxiaoshi(wanjia& a)
{		
		
		if (a.getpos().x > pos.x - 5 &&
			a.getpos().x < pos.x + poofen.x + 5 &&
			a.getpos().y > pos.y - 5 &&
			a.getpos().y < pos.y + poofen.y + 5)
		{
			pengzhuang = 1;
			chiwo = a.getid();//  玩家ID 0 1  这个chiwo属于 1或者0
			pnum --;//碰到了之后  总数量 减  1 
		}
}
void Poo::fandanp()
{	
		if (pos.x <= Graphics::min.x || pos.x >= byou.x)
			v.x *= -1;
		if (pos.y <= Graphics::min.y || pos.y >= byou.y)
			v.y *= -1;
		pos.caiqie(Graphics::min, Graphics::max - Poo::poofen);
}
