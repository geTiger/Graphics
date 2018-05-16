#include<iostream>
#include<GL/glut.h>
#include"ddaDrawCircle.h"
#include"bresenhamDrawCircle.h"
using namespace std;


void Init()
{
	glClearColor(0.0, 0.0, 0.0, 0);
	glColor3f(2.0, 1.0, 0.0);
	gluOrtho2D(0, 640, 480, 0);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	ddacircle(200,200,100);
	bresenhamcircle(-50,200,100);
	glFlush();
}

int main(int argc, char **argv)
{
    //mark test
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(760, 540);
	glutCreateWindow("Circles");
	glutDisplayFunc(display);
	Init();
	glutMainLoop();
	return 0;
}
