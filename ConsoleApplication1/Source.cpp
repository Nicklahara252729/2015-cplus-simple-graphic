#include <stdio.h>
#include <glut.h>
 
void mydisplay()
{
    glClear(GL_COLOR_BUFFER_BIT); // Menghapus layar
    glBegin(GL_POLYGON);
    glVertex2f(-0.5, 0);
    glVertex2f(-0.3, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, 0);
    glEnd();
    glFlush();
}
 
int main(int argc, char** argv)
{
    printf("Hello World... Ini adalah Trapesium 2D");
    glutCreateWindow("Dwi Ayu Lestari");
    glutDisplayFunc(mydisplay);
    glutMainLoop();
}