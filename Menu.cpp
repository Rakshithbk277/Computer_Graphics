#include<stdio.h>
#include<glut.h>


void myInit()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);

}
void display()
{
	float x1 = 200.0;
	float y1 = 200.0;
	float  x2 = 100.0;
	float y2 = 300.0;
	float  x3 = 200.0;
	float  y3 = 400.0;
	float x4 = 300.0;
	float y4 = 300.0;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);
	glVertex2f(x4, y4);
	glEnd();
	glFlush();

}
void menu(int top)
{
	if (top == 1)
		glColor3f(1.0, 0.0, 0.0);
	else if (top == 2)
		glColor3f(0.0, 1.0, 0.0);
	else if (top == 3)
		glColor3f(0.0, 0.0, 1.0);
	else if (top == 4)
		exit(0);
	glutPostRedisplay();
}

int main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(300, 150);
	glutCreateWindow("menu");
	glutCreateMenu(menu);
	glutAddMenuEntry("red", 1);
	glutAddMenuEntry("green", 2);
	glutAddMenuEntry("blue", 3);
	glutAddMenuEntry("quit", 4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}

