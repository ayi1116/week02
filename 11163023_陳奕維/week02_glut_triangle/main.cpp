#include <GL/glut.h>

void display()
{
    glBegin(GL_POLYGON);
        glColor3f(1,1,0);glVertex2f(0,1);
        glColor3f(0,1,0);glVertex2f(1,-0.6);
        glColor3f(0,0,1);glVertex2f(-1,-0.6);
    glEnd();

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
