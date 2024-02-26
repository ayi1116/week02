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
    glutSwapBuffers();///畫好提交
}

int main(int argc, char** argv)///主函式 進階版 看不懂
{
    glutInit( &argc, argv);///把參數給glutInit 初始化
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );///雙緩衝區+3D深度功能
    glutCreateWindow("第二周的程式");///開GLUT視窗

    glutDisplayFunc(display);///用來顯示的函式

    glutMainLoop();
}
