// region TASK1
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
// endregion

//region TASK2
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
//endregion

//region TASK3
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
//endregion

//region TASK4
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
//endregion

//region TAKS5
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
//    aspectRatio = (GLfloat)w / (GLfloat)h; if (w <= h)
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
//endregion

//region TASK6
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

#include <GL/glut.h>

void RenderScene(void) {
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.27f, 1.0f, 0.95f);
   glRectf(-20.0f, 20.0f, -10.0f, 10.0f);
   glRectf(-10.0f, 20.0f, 10.f, 10.0f);
   glRectf(-20.0f, 10.0f, -10.0f, -10.0f);
   glRectf(-20.0f, -20.0f, 10.0f, -30.0f);
   glRectf(-10.0f, 0.0f, 10.0f, -10.0f);
   glRectf(0.0f, -10.0f, 10.0f, -20.0f);
   glColor3f(0.0f, 1.0f, 0.0f);
   glRectf(0.0f, 0.0f, 10.0f, -10.0f);
   glFlush();
}

void SetupRC(void) {
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void ChangeSize(GLsizei w, GLsizei h) {
   GLfloat aspectRatio;
   if (h == 0)
       h = 1;
   glViewport(0, 0, w, h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   aspectRatio = (GLfloat)w / (GLfloat)h;
   if (w <= h)
       glOrtho(-40.0, 40.0, -40.0 / aspectRatio, 40.0 / aspectRatio, 1.0, -1.0);
   else
       glOrtho(-40.0 * aspectRatio, 40.0 * aspectRatio, -40.0, 40.0, 1.0, -1.0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutCreateWindow("Gromyko Andrey");
   glutDisplayFunc(RenderScene);
   glutReshapeFunc(ChangeSize);
   SetupRC();
   glutMainLoop();
   return 0;
}
////AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA