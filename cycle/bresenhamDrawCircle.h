#include<iostream>  
#include<math.h>  
#include<GL/glut.h> 
using namespace std;

//�е�bresenham�㷨��Բ
void bresenhamcircle(int xc,int yc,int R) {     
	int d0 = 1 - R;//�˴���1-R����1.25-R�����⸡�������㣬���Ч��
	int x = 0, y = R;
	while (x <= y) {
		glBegin(GL_POINTS);
		glVertex2i(x+xc, y+yc);        
		glVertex2i(-x+xc, -y+yc);
		glVertex2i(-x+xc, y+yc);
		glVertex2i(x+xc, -y+yc);
		glVertex2i(y+xc, -x+yc);
		glVertex2i(-y+xc, -x+yc);
		glVertex2i(-y+xc, x+yc);
		glVertex2i(y+xc, x+yc);
		glEnd();
		x++;
		if (d0 <= 0) {
			d0 = d0 + 2 * x + 3;
			y = y;
		}
		else {
			d0 = d0 + 2 * (x - y) + 5;
			y = y - 1;
		}
	}


}
