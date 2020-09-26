#include<windows.h>
#include<bits/stdc++.h>
#include<GL/glut.h>
#include<C:\GLUT\include\GL\glut.h>



void iniciar()
{

glClearColor(0,0,1,1);
glLineWidth(3.f);
glOrtho(800,0,600,0,-1,1);


}

void dibujar()
{

    // FIGURA GEOMETRICA//
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.f,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(700,100);
    glVertex2i(700,300);
    glVertex2i(500,300);



    glEnd();

    glFlush();
}


int main(int argc,char*args[])
{
   glutInit(&argc,args);
   glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

   glutCreateWindow("Linea y Poligono");

   iniciar();
   glutDisplayFunc(dibujar);
   glutMainLoop();


   return 0;



}

