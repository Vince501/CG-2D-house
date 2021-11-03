#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <math.h>

#define SCREEN_WIDTH 1080
#define SCREEN_HEIGHT 680
#define M_PI 3.142

int main(void)
{
    GLFWwindow* window;

    // Initialize the library
    if (!glfwInit())
    {
        return -1;
    }

    // Create a windowed mode window and its OpenGL context

    window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "2D Graphics", NULL, NULL);

    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);

    glViewport(0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
    glMatrixMode(GL_PROJECTION); // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
    glLoadIdentity(); // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
    glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1); // essentially set coordinate system
    glMatrixMode(GL_MODELVIEW); // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
    glLoadIdentity(); // same as above comment

    // Loop until the user closes the window
    while (!glfwWindowShouldClose(window))
    {
        glClearColor(1, 1, 1, 0);
        glClear(GL_COLOR_BUFFER_BIT);

        // Left Window
        glColor3f(0, 1, 0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(300, 350);
        glVertex2f(225, 350);
        glVertex2f(225, 275);
        glVertex2f(300, 275);
        glEnd();

        glColor3f(0, 0, 1);
        glBegin(GL_LINES);
        glVertex2f(262.5, 350);
        glVertex2f(262.5, 275);
        glEnd();

        glColor3f(0, 0, 1);
        glBegin(GL_LINES);
        glVertex2f(225, 312.5);
        glVertex2f(300, 312.5);
        glEnd();

        // Right Window
        glColor3f(0, 1, 0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(575, 350);
        glVertex2f(500, 350);
        glVertex2f(500, 275);
        glVertex2f(575, 275);
        glEnd();

        glColor3f(0, 0, 1);
        glBegin(GL_LINES);
        glVertex2f(537.5, 350);
        glVertex2f(537.5, 275);
        glEnd();

        glColor3f(0, 0, 1);
        glBegin(GL_LINES);
        glVertex2f(500, 312.5);
        glVertex2f(575, 312.5);
        glEnd();


        

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}