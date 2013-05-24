// gls.cpp : Defines the entry point for the console application.
//

#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "glut.h"

void openglrender()
{

}

void setupGLConfig()
{

}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("opengl_test");
	glutDisplayFunc(openglrender);
	setupGLConfig();
	glutMainLoop();
	return 0;
}

