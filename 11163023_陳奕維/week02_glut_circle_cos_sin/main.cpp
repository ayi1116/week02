#include <GL/glut.h>
#include <math.h>
void myCircle(float cx,float cy,float r){
    glBegin(GL_POLYGON);
    for(float a=0; a<=3.14*2; a+=0.1)
    {
        glVertex2f(r*cos(a)+cx,r*sin(a)+cy);
    }
    glEnd();
}


void display()
{
    glColor3f(1,1,1);myCircle(0,0,1);
    glColor3f(0,0,0);myCircle(0,0,1);
    glColor3f(0,0,0);myCircle(0,0,1);
    glColor3f(0,0,0);myCircle(0,0,1);
    glutSwapBuffers();///�e�n����
}

int main(int argc, char** argv)///�D�禡 �i���� �ݤ���
{
    glutInit( &argc, argv);///��ѼƵ�glutInit ��l��
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );///���w�İ�+3D�`�ץ\��
    glutCreateWindow("�ĤG�P���{��");///�}GLUT����

    glutDisplayFunc(display);///�Ψ���ܪ��禡

    glutMainLoop();
}
