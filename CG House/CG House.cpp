#include <Windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI   3.1415926535897932384626433832795

void Display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 1);
    glBegin(GL_LINES);
    glVertex3f(250, 200, 0);
    glVertex3f(250, 30, 0);
    glVertex3f(300, 200, 0);
    glVertex3f(300, 30, 0);
    glVertex3f(250, 30, 0);
    glVertex3f(300, 30, 0);
    glVertex3f(250, 200, 0);
    glVertex3f(300, 200, 0);
    glEnd();


    
    glFlush();

    
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(500, 400);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("door");
    glutDisplayFunc(Display);
    gluOrtho2D(0, 499, 0, 499);
    glutMainLoop();

}




