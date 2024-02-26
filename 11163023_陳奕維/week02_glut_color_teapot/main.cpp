#include <GL/glut.h>

void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清畫面

    glColor3f(247/255.0,180/255.0,171/255.0);///顏色(RGB)
    glutSolidTeapot(0.3);///就一個神燈

    glColor3f(251/255.0,233/255.0,219/255.0);
    glutSolidTeapot(0.2);


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
