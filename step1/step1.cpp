/* step1 球の表示　*/
#include "dm1.h"

#include <math.h>

dMatrix3 R;                    // ODEの3x3行列の型 回転行列(姿勢)
double r = 0.2;                // 半径 [m]
//float p[3] = {0.0, 0.0, 1.0}; // 位置(x,y,z)[m]
double p[3] = {0.0, 1.0, 1.0}; // 位置(x,y,z)[m]
double p2[3] = {0.0, 0.0, 1.0}; // 位置(x,y,z)[m]
//double p3[3] = {0.0, -1.0, 1.0}; // 位置(x,y,z)[m]
//double p[3] = {0.0, 0.0, 1.0}; // 位置(x,y,z)[m]

double i = 0.0;


void simLoop(int pause)        /***  シミュレーションループ　***/
{
	p[0] = cos(i);
	p[1] = sin(i);
//	p[1] = i;

	dsDrawSphere(p,R,r * i);         // リンゴの描画
//  dsDrawSphere(p,R,r);         // リンゴの描画
	dsDrawSphere(p2,R,r);         // リンゴの描画
//  dsDrawSphere(p3,R,r);         // リンゴの描画

	i = i + 0.1;
//  i = i * -1;
	if(i > 6) i = 0.0;


}

int main()         /*** main関数 ***/
{
	dmLoop(800, 600, simLoop); // シミュレーションループ ウインドウの幅，高

	return 0;
}
