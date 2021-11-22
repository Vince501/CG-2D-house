#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	

	//Set colour to black
	glColor3f(0.0, 0.0, 0.0);
	//Adjust the point size
	glPointSize(5.0);


	
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(100, 200);
	glVertex2i(100, 50);

	glVertex2i(100, 50);
	glVertex2i(300, 50);

	glVertex2i(300, 50);
	glVertex2i(300, 200);

	glVertex2i(100, 200);
	glVertex2i(50, 200);

	glVertex2i(300, 200);
	glVertex2i(350, 200);

	glVertex2i(50, 200);
	glVertex2i(50, 250);

	glVertex2i(350, 200);
	glVertex2i(350, 250);

	glVertex2i(50, 250);
	glVertex2i(350, 250);








	glEnd();

	glFlush();	
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	

	glutInitWindowPosition(200, 70);				
	glutInitWindowSize(800, 600);					
	glutCreateWindow("OenGL 2D-House");	

	init();							
	glutDisplayFunc(drawShapes);		
	glutMainLoop();					

	return 0;
}