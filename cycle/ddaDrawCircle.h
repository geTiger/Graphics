#include<iostream>
#include<GL/glut.h>
#include<math.h>

//DDA算法画圆
void ddacircle(int xc, int yc, int r)
{
	int val = 1, n = 0;
	float sig, x, y;
	x = 0;
	y = r;
	sig = 1.0 / r;//数值微分里的△
	while (x <= y)
	{
		glBegin(GL_POINTS);
		glVertex2f(x + xc, y + yc);
		glVertex2f(-x + xc, y + yc);
		glVertex2f(-x + xc, -y + yc);
		glVertex2f(x + xc, -y + yc);
		glVertex2f(y + xc, x + yc);
		glVertex2f(-y + xc, x + yc);
		glVertex2f(-y + xc, -x + yc);
		glVertex2f(y + xc, -x + yc);
		glEnd();
		x = x + sig*y;
		y = y - sig*x;
	}
}
