#include <GL/glut.h>

void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�e��

    glColor3f(247/255.0,180/255.0,171/255.0);///�C��(RGB)
    glutSolidTeapot(0.3);///�N�@�ӯ��O

    glColor3f(251/255.0,233/255.0,219/255.0);
    glutSolidTeapot(0.2);


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
