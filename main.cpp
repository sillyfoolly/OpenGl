#pragma region LAB1_1
// подключаем заголовочные файлы библиотек
// #include <GL/glut.h>
// 
// void RenderScene(void)
// {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glFlush();
// }
// 
// void SetupRC(void)
// {
//    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
// }
// 
// int main(int args, char** argv)
// {
//    glutInit(&args, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutCreateWindow("Gromyko Andrey");
//    glutDisplayFunc(RenderScene);
//    SetupRC();
//    glutMainLoop();
//    return 0;
// }
#pragma endregion LAB1_1

#pragma region LAB1_2
// #include <GL/glut.h>
// 
// void RenderScene(void)
// {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glViewport(0, 0, 400, 400);
//    glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
//    glFlush();
// }
// 
// void SetupRC(void)
// {
//    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
// }
// 
// int main(int args, char** argv)
// {
//    glutInit(&args, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(400, 400);
//    glutCreateWindow("Gromyko Andrey");
//    glutDisplayFunc(RenderScene);
//    SetupRC();
//    glutMainLoop();
// 
//    return 0;
// }
#pragma endregion LAB1_2

#pragma region LAB1_3
// #include <GL/glut.h>
// 
// void RenderScene(void) 
// {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0f, 1.0f, 1.0f);
//    glRectf(-25.0f, 25.0f, 25.0f, -25.0f);
//    glFlush();
// }
// 
// void SetupRC(void)
// {
//    glClearColor(1.0f, 0.0f, 1.0f, 1.0f);
// }
// 
// void ChangeSize(GLsizei w, GLsizei h)
// {
//    GLfloat aspectRatio;
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(-100.0, 100.0, -100, 100.0, 1.0, -1.0);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
// }
// 
// int main(int args, char** argv)
// {
//    glutInit(&args, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutCreateWindow("Gromyko Andrey");
//    glutDisplayFunc(RenderScene);
//    glutReshapeFunc(ChangeSize);
//    SetupRC();
//    glutMainLoop();
//    return 0;
// }
#pragma endregion LAB1_3

#pragma region LAB1_4
// #include <GL/glut.h>
// 
// void RenderScene(void) 
// {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0f, 1.0f, 1.0f);
//    glRectf(-25.0f, 25.0f, 25.0f, -25.0f);
//    glFlush();
// }
// 
// void SetupRC(void)
// {
//    glClearColor(1.0f, 0.0f, 1.0f, 1.0f);
// }
// 
// void ChangeSize(GLsizei w, GLsizei h)
// {
//    GLfloat aspectRatio;
//    if (h == 0)
//        h = 1;
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    aspectRatio = (GLfloat)w / (GLfloat)h; if (w <= h)
//        glOrtho(-100.0, 100.0, -100 / aspectRatio, 100.0 / aspectRatio,
//                1.0, -1.0);
//    else
//        glOrtho(-100.0 * aspectRatio, 100.0 * aspectRatio, -100.0, 100.0,
//                1.0, -1.0);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
// }
// 
// int main(int args, char** argv)
// {
//    glutInit(&args, argv);
//    glutCreateWindow("Gromyko Andrey");
//    glutDisplayFunc(RenderScene);
//    glutReshapeFunc(ChangeSize);
//    SetupRC();
//    glutMainLoop();
// 
//    return 0;
// }
#pragma endregion LAB1_4

#pragma region LAB1_5
// #include <GL/glut.h>
// 
// void RenderScene(void) 
// {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0f, 1.0f, 1.0f);
//    glRectf(-25.0f, 25.0f, 25.0f, -25.0f);
//    glFlush();
// }
// 
// void SetupRC(void)
// {
//    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
// }
// 
// void ChangeSize(GLsizei w, GLsizei h)
// {
//    GLfloat aspectRatio;
//    if (h == 0)
//       h = 1;
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    aspectRatio = (GLfloat)w / (GLfloat)h; 
//    if (w <= h)
//       glOrtho(-100.0, 100.0, -100 / aspectRatio, 100.0 / aspectRatio, 1.0, -1.0);
//    else
//        glOrtho(-100.0 * aspectRatio, 100.0 * aspectRatio, -100.0, 100.0, 1.0, -1.0);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
// }
// 
// int main(int args, char** argv)
// {
//    glutInit(&args, argv);
//    glutInitWindowPosition(100, 100);
//    glutInitWindowSize(400, 300);
//    // Установка режима отображения для окна, создаваемого библиотекой GLUT
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutCreateWindow("Gromyko Andrey");
//    glutDisplayFunc(RenderScene);
//    glutReshapeFunc(ChangeSize);
//    SetupRC();
//    glutMainLoop();
// 
//    return 0;
// }
#pragma endregion LAB1_5

#pragma region LAB1_6
// #include <GL/glut.h>
// 
// void RenderScene(void) 
// {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0f, 1.0f, 1.0f);
//    glRectf(-25.0f, 25.0f, 25.0f, -25.0f);
//    glFlush();
// }
// 
// void SetupRC(void)
// {
//    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
// }
// 
// void ChangeSize(GLsizei w, GLsizei h)
// {
//    GLfloat aspectRatio;
//    if (h == 0) h = 1;
//    if (w == 0) w = 1;
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    aspectRatio = (GLfloat)w / (GLfloat)h;
//    if (w < 200 ) glClearColor(1.0f, 0.0f, 0.0f, 1.0f); // Красный цвет
//    else if (w < 400) glClearColor(0.0f, 1.0f, 0.0f, 1.0f); // Зеленый цвет
//    else glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // Синий цвет
// 
//    if (w <= h) {
//        glOrtho(-100.0, 100.0, -100 / aspectRatio, 100.0 / aspectRatio, 1.0, -1.0);
//    }
//    else {
//        glOrtho(-100.0 * aspectRatio, 100.0 * aspectRatio, -100.0, 100.0, 1.0, -1.0);
//        glMatrixMode(GL_MODELVIEW);
//    }
//    glLoadIdentity();
// }
// int main(int args, char** argv)
// {
//    glutInit(&args, argv);
//    glutInitWindowPosition(100, 100);
//    glutInitWindowSize(400, 300);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutCreateWindow("Gromyko Andrey");
//    glutDisplayFunc(RenderScene);
//    glutReshapeFunc(ChangeSize);
//    SetupRC();
//    glutMainLoop();
// 
//    return 0;
// }
#pragma endregion LAB1_6

#pragma region LAB1_7
// #include <GL/glut.h>

// void RenderScene(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(0.27f, 1.0f, 0.95f);
//    glRectf(-20.0f, 20.0f, -10.0f, 10.0f);
//    glRectf(-10.0f, 20.0f, 10.f, 10.0f);
//    glRectf(-20.0f, 10.0f, -10.0f, -10.0f);
//    glRectf(-20.0f, -20.0f, 10.0f, -30.0f);
//    glRectf(-10.0f, 0.0f, 10.0f, -10.0f);
//    glRectf(0.0f, -10.0f, 10.0f, -20.0f);
//    glColor3f(0.0f, 1.0f, 0.0f);
//    glRectf(0.0f, 0.0f, 10.0f, -10.0f);
//    glFlush();
// }

// void SetupRC(void) {
//    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
// }

// void ChangeSize(GLsizei w, GLsizei h) {
//    GLfloat aspectRatio;
//    if (h == 0)
//       h = 1;
//    glViewport(w/2, 0, w/2, h/2);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    aspectRatio = (GLfloat)w / (GLfloat)h;
//    if (w <= h)
//       glOrtho(-40.0, 40.0, -40.0 / aspectRatio, 40.0 / aspectRatio, 1.0, -1.0);
//    else
//       glOrtho(-40.0 * aspectRatio, 40.0 * aspectRatio, -40.0, 40.0, 1.0, -1.0);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
// }

// int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutCreateWindow("Gromyko Andrey");
//    glutDisplayFunc(RenderScene);
//    glutReshapeFunc(ChangeSize);
//    glutInitWindowSize(400, 400);
//    SetupRC();
//    glutMainLoop();
//    return 0;
// }
#pragma endregion LAB1_7

#pragma region LAB2_2
// #include <GL/glut.h>
// #include "math.h"

// GLfloat astep = 0.0f;
// GLfloat angle; GLfloat y; GLfloat x;

// void RenderScene(void)
// {
//     glClear(GL_COLOR_BUFFER_BIT);
//     glColor3f(0.0f, 1.0f, 0.0f);
//     glBegin(GL_LINE_LOOP);
//     for(angle = 0.0f; angle <= 3.14*2; angle += (3.14 / 2.0f))
//     {
//         x = 50 * cos(angle + astep);
//         y = 50 * sin(angle + astep);
//         glVertex3f(x, y, 0.0f);
//     }
//     glEnd();

//     glColor3f(0.02f, 0.85f, 1.0f);
//     glBegin(GL_LINE_LOOP);
//     x = 70 * cos(angle - astep);
//     y = 70 * sin(angle - astep);
//     glVertex3f(x - 15, y - 15, 0.0f);
//     glVertex3f(x + 15, y - 15, 0.0f);
//     glVertex3f(x + 15, y + 15, 0.0f);
//     glVertex3f(x - 15, y + 15, 0.0f);
//     glEnd();

//     glFlush();
//     glutSwapBuffers();
// }

// void TimerFunction(int value)
// {
//     if (astep < 3.14*2) astep += 0.2f;
//     else astep = 0.2f;
//     glutPostRedisplay();
//     glutTimerFunc(75, TimerFunction, 1);
// }

// void SetupRC(void)
// {
//     glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
// }

// void ChangeSize(GLsizei w, GLsizei h) {
//    GLfloat aspectRatio;
//    if (h == 0) h = 1;
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    aspectRatio = (GLfloat)w / (GLfloat)h;
//    if (w <= h)
//       glOrtho(-100.0, 100.0, -100.0 / aspectRatio, 100.0 / aspectRatio, 1.0, -1.0);
//    else
//       glOrtho(-100.0 * aspectRatio, 100.0 * aspectRatio, -100.0, 100.0, 1.0, -1.0);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
// }

// int main(int argc, char** argv)
// {
//     glutInit(&argc, argv);
//     glutCreateWindow("Gromyko Andrey");
//     glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//     glutDisplayFunc(RenderScene);
//     glutReshapeFunc(ChangeSize);
//     glutTimerFunc(75, TimerFunction, 1);
//     SetupRC();
//     glutMainLoop();
//     return 0;
// }
#pragma endregion

#pragma region LAB2_1
// #include <GL/glut.h>
// #include "math.h"

// GLubyte pattern[128] = { 0xf0, 0x00, 0x10, 0x00,
// 0x0f, 0x00, 0x01, 0x00,
// 0x00, 0xf0, 0x00, 0x10,
// 0x00, 0x0f, 0x00, 0x01,
// 0x10, 0x00, 0xf0, 0x00,
// 0x01, 0x00, 0x0f, 0x00,
// 0x00, 0x10, 0x00, 0xf0,
// 0x00, 0x01, 0x00, 0x0f,
// 0xf0, 0x00, 0x10, 0x00,
// 0x0f, 0x00, 0x01, 0x00,
// 0x00, 0xf0, 0x00, 0x10,
// 0x00, 0x0f, 0x00, 0x01,
// 0x10, 0x00, 0xf0, 0x00,
// 0x01, 0x00, 0x0f, 0x00,
// 0x00, 0x10, 0x00, 0xf0,
// 0x00, 0x01, 0x00, 0x0f,
// 0xf0, 0x00, 0x10, 0x00,
// 0x0f, 0x00, 0x01, 0x00,
// 0x00, 0xf0, 0x00, 0x10,
// 0x00, 0x0f, 0x00, 0x01,
// 0x10, 0x00, 0xf0, 0x00,
// 0x01, 0x00, 0x0f, 0x00,
// 0x00, 0x10, 0x00, 0xf0,
// 0x00, 0x01, 0x00, 0x0f,
// 0xf0, 0x00, 0x10, 0x00,
// 0x0f, 0x00, 0x01, 0x00,
// 0x00, 0xf0, 0x00, 0x10,
// 0x00, 0x0f, 0x00, 0x01,
// 0x10, 0x00, 0xf0, 0x00,
// 0x01, 0x00, 0x0f, 0x00,
// 0x00, 0x10, 0x00, 0xf0,
// 0x00, 0x01, 0x00, 0x0f,
// };
// GLfloat angle; GLfloat y; GLfloat x; GLfloat astep;

// void RenderScene(void)
// {
//     glClear(GL_COLOR_BUFFER_BIT);

//     glBegin(GL_POLYGON);
//     glColor3f(0.40f, 0.20f, 0.0f);
//     for(angle = 0.0f; angle <= 3.14; angle += (3.14 / 62.8f))
//     {
//         x = 35 * cos(angle);
//         y = 35 * sin(angle);
//         glVertex3f(x, y + 55, 0.0f);
//     }
//     glVertex3f(x, -90, 0.0f);
//     glVertex3f(35, -90, 0.0f);
//     glEnd();
    
//     glBegin(GL_QUADS);
//     glColor3f(0.90f, 0.60f, 0.0f);
//     glVertex3f(x - 5, y + 20, 0.0f);
//     glVertex3f(x + 75, y + 20, 0.0f);
//     glVertex3f(x + 75, y + 25, 0.0f);
//     glVertex3f(x - 5, y + 25, 0.0f);
//     glEnd();

//     glEnable(GL_POLYGON_STIPPLE);
//     glPolygonStipple(pattern);
//         glBegin(GL_QUADS);
//         glColor3f(0.0f, 0.60f, 0.0f);
//         glVertex3f(x - 5, y + 20, 0.0f);
//         glVertex3f(x + 75, y + 20, 0.0f);
//         glVertex3f(x + 75, y + 25, 0.0f);
//         glVertex3f(x - 5, y + 25, 0.0f);
//         glEnd();
//     glDisable(GL_POLYGON_STIPPLE);

//     glBegin(GL_POLYGON);
//     glColor3f(1.0f, 0.90f, 0.70f);
//     for(angle = 0.0f; angle <= 3.14 * 2; angle += (3.14 / 62.8f))
//     {
//         x = 25 * cos(angle);
//         y = 25 * sin(angle);
//         glVertex3f(x, y + 55, 0.0f);
//     }
//     glEnd();

//     glEnable(GL_LINE_STIPPLE);
//     glLineStipple(2, 0x00ff);
//     glLineWidth(3.0f);
//     glBegin(GL_LINE_LOOP);
//     glColor3f(0.0f, 0.0f, 0.0f);
//     for(angle = 0.0f; angle <= 3.14 * 2; angle += (3.14 / 62.8f))
//     {
//         x = 23 * cos(angle);
//         y = 23 * sin(angle);
//         glVertex3f(x, y + 55, 0.0f);
//     }
//     glEnd();
//     glDisable(GL_LINE_STIPPLE);

//     glLineWidth(1.5f);
//     glBegin(GL_LINES);
//     glColor3f(0.0f, 0.0f, 0.0f);
//     glVertex3f(0, 55, 0.0f);
//     glVertex3f(20 * cos(angle + astep), 20 * sin(angle + astep) + 55, 0.0f);
//     glVertex3f(0, 55, 0.0f);
//     glVertex3f(x - 10, y + 50, 0.0f);
//     glEnd();

//     glShadeModel(GL_SMOOTH);
//     glBegin(GL_TRIANGLE_STRIP);
//     glColor3f(0.0f, 0.5f, 1.0f);
//     glVertex3f(-30, -72, 0.0f);
//     glColor3f(0.60f, 0.87f, 1.0f);
//     glVertex3f(-15, 15, 0.0f);
//     glVertex3f(0, -60, 0.0f);
//     glVertex3f(15, 15, 0.0f);
//     glColor3f(0.0f, 0.5f, 1.0f);
//     glVertex3f(30, -72, 0.0f);
//     glEnd();

//     glLineWidth(1.1f);
//     glBegin(GL_LINE_STRIP);
//     glColor3f(0.0f, 0.0f, 0.0f);
//     glVertex3f(0, 15, 0.0f);
//     glVertex3f(5, -35, 0.0f);
//     glVertex3f(10, -48, 0.0f);
//     glVertex3f(2, -50, 0.0f);
//     glVertex3f(5, -35, 0.0f);
//     glEnd();

//     glFlush();
// }

// void TimerFunction(int value)
// {
//     if (astep < 3.14*2) astep += 0.2f;
//     else astep = 0.2f;
//     glutPostRedisplay();
//     glutTimerFunc(1000, TimerFunction, 1);
// }

// void SetupRC(void)
// {
//     glClearColor(1.0f, 0.97f, 0.90f, 0.0f);
// }

// void ChangeSize(GLsizei w, GLsizei h) 
// {
//    GLfloat aspectRatio;
//    if (h == 0) h = 1;
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    aspectRatio = (GLfloat)w / (GLfloat)h;
//    if (w <= h)
//       glOrtho(-100.0, 100.0, -100.0 / aspectRatio, 100.0 / aspectRatio, 1.0, -1.0);
//    else
//       glOrtho(-100.0 * aspectRatio, 100.0 * aspectRatio, -100.0, 100.0, 1.0, -1.0);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
// }

// int main(int argc, char** argv)
// {
//     glutInit(&argc, argv);
//     glutInitWindowPosition(10, 10);
//     glutInitWindowSize(500, 500);
//     glutCreateWindow("Gromyko Andrey");
//     glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//     glutDisplayFunc(RenderScene);
//     glutReshapeFunc(ChangeSize);
//     glutTimerFunc(1000, TimerFunction, 1);
//     SetupRC();
//     glutMainLoop();
//     return 0;
// }
#pragma endregion LAB2_2

#pragma region LAB3_1
// #include <GL/glew.h>
// #include <GL/glut.h>

// double rotate_y = 0;
// double rotate_x = 0;

// void display() {
//     // Очищаем буферы
//     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

//     // Поворачиваем на угол
//     glRotatef(rotate_x, 1.0, 0.0, 0.0);
//     glRotatef(rotate_y, 0.0, 1.0, 0.0);
//     //низ
//     glBegin(GL_POLYGON);
//     glColor3f(1.0, 1.0, 0.0);
//     glVertex3f(0.5, -0.3, 0.5);
//     glVertex3f(0.5, -0.3, -0.5);
//     glVertex3f(-0.5, -0.3, -0.5);
//     glVertex3f(-0.5, -0.3, 0.5);
//     glEnd();
//     //Задаем грань куба 2
//     glBegin(GL_POLYGON);
//     glColor3f(1.0, 1.0, 1.0);
//     glVertex3f(0.5, -0.3, 0.5);
//     glVertex3f(0.5, -0.3, -0.5);
//     glVertex3f(0, 0.5, 0);
//     glEnd();
//     //Задаем грань куба 3
//     glBegin(GL_POLYGON);
//     glColor3f(1.0, 0.0, 1.0);
//     glVertex3f(0.5, -0.3, -0.5);
//     glVertex3f(-0.5, -0.3, -0.5);
//     glVertex3f(0, 0.5, 0);
//     glEnd();
//     //Задаем грань куба 4
//     glBegin(GL_POLYGON);
//     glColor3f(0.0, 1.0, 0.0);
//     glVertex3f(-0.5, -0.3, -0.5);
//     glVertex3f(-0.5, -0.3, 0.5);
//     glVertex3f(0, 0.5, 0);
//     glEnd();
//     //Задаем грань куба 5
//     glBegin(GL_POLYGON);
//     glColor3f(0.0, 0.0, 1.0);
//     glVertex3f(-0.5, -0.3, 0.5);
//     glVertex3f(0.5, -0.3, 0.5);
//     glVertex3f(0, 0.5, 0);
//     glEnd();
//     glutSwapBuffers();
// }

// void specialKeys(int key, int x, int y) {
//     // Меняем угол на 5 градусов
//     if (key == GLUT_KEY_RIGHT){
//         rotate_y = 3;
//         rotate_x = 0;}
//     else if (key == GLUT_KEY_LEFT){
//         rotate_y = -3;
//         rotate_x = 0;}
//     else if (key == GLUT_KEY_UP){
//         rotate_x = 6;
//         rotate_y = 0;}
//     else if (key == GLUT_KEY_DOWN){
//         rotate_x = -6;
//         rotate_y = 0;}
//     glutPostRedisplay();
// }

// int main(int argc, char** argv) {
//     glutInit(&argc, argv);
//     glutCreateWindow("Gromyko Andrey");
//     glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//     glEnable(GL_DEPTH_TEST);
//     glutDisplayFunc(display);
//     glutSpecialFunc(specialKeys);
//     glutMainLoop();
//     return 0;
// }
#pragma endregion

#pragma region LAB3_2
#include <GL/glew.h>
#include <GL/glut.h>
#include <math.h>

// Вызывается для рисования сцены
void RenderScene(void)
{
    // Угол поворота вокруг ядра
    static GLfloat fElect1 = 0.0f;
    // Очищаем окно текущим цветом очистки
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //Обновляем матрицу наблюдения модели
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    //Транслируем всю сцену в поле зрения
    //Это исходное преобразование наблюдения
    glTranslatef(0.0f, 0.0f, -100.0f);
    // Красное ядро
    glColor3ub(255, 255, 255);
    glutSolidSphere(10.0f, 150, 150);
    // Желтые электроны
    glColor3ub(255, 255, 0);
    // Орбита первого электрона
    // Записываем преобразование наблюдения
    glPushMatrix();
    glRotatef(fElect1, 0.0f, 1.0f, 0.0f);
    glTranslatef(90.0f, 0.0f, 0.0f);
    // Рисуем электрон
    glutSolidSphere(6.0f, 150, 150);
    // Восстанавливаем преобразование наблюдения
    glPopMatrix();
    //Орбита второго электрона
    glPushMatrix();
    glRotatef(45.0f, 0.0f, 0.0f, 1.0f);
    glRotatef(fElect1, 0.0f, 1.0f, 0.0f);
    glTranslatef(-70.0f, 0.0f, 0.0f);
    glutSolidSphere(6.0f, 15, 15);
    glPopMatrix();
    // Орбита третьего электрона
    glPushMatrix();
    glRotatef(360.0f - 45.0f, 0.0f, 0.0f, 1.0f);
    glRotatef(fElect1, 0.0f, 1.0f, 0.0f);
    glTranslatef(0.0f, 0.0f, 60.0f);
    glutSolidSphere(6.0f, 15, 15);
    glPopMatrix();
    // Увеличиваем угол поворота
    fElect1 += 10.0f;
    if (fElect1 > 360.0f)
    fElect1 = 0.0f;
    // Показываем построенное изображение
    glutSwapBuffers();
}

// Функция выполняет необходимую инициализацию
// в контексте визуализации
void SetupRC()
{
    glEnable(GL_DEPTH_TEST); // Удаление скрытых поверхностей
    glFrontFace(GL_CCW); // Полигоны с обходом против
    //часовой стрелки направлены наружу
    glEnable(GL_CULL_FACE); //Внутри пирамиды расчеты не //производятся
    // Черный фон
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void TimerFunc(int value)
{
    glutPostRedisplay();
    glutTimerFunc(100, TimerFunc, 1);
}

void ChangeSize(int w, int h)
{
    GLfloat nRange = 100.0f;
    // Предотвращение деления на ноль
    if (h == 0)
    h = 1;
    // Устанавливает поле просмотра по размерам окна
    glViewport(0, 0, w, h);
    // Обновляет стек матрицы проектирования
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // Устанавливает объем отсечения с помощью отсекающих
    // плоскостей (левая, правая, нижняя, верхняя,
    // ближняя, дальняя)
    if (w <= h)
    glOrtho(-nRange, nRange, nRange * h / w, -nRange * h / w, -nRange * 2.0f, nRange *
    2.0f);
    else
    glOrtho(-nRange * w / h, nRange * w / h, nRange, -nRange, -nRange * 2.0f, nRange *
    2.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("OpenGL Atom");
    glutReshapeFunc(ChangeSize);
    glutDisplayFunc(RenderScene);
    glutTimerFunc(500, TimerFunc, 1);
    SetupRC();
    glutMainLoop();
    return 0;
}

#pragma endregion