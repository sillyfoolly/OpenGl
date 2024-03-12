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
//endregion

// region TASK6
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

//region TASK7
// #include <GL/glut.h>
// 
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
// 
// void SetupRC(void) {
//    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
// }
// 
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
// 
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
//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//region LAB2_1
// подключаем заголовочные файлы библиотек
#include <GL/glut.h>
// Исходное положение и размер прямоугольника
GLfloat x1 = 0.0f; GLfloat y1 = 0.0f; GLfloat rsize = 25;
// Величина шага в направлениях х и у (число пиксе-лей,
// на которые на каждом шаге перемещается прямоуголь-ник)
GLfloat xstep = 1.0f; GLfloat ystep = 1.0f;
// Отслеживание изменений ширины и высоты окна
GLfloat windowWidth; GLfloat windowHeight;
//Вызывается для рисования сцены
void RenderScene(void)
{
    // Очищаем окно, используя текущий цвет очист-ки
    glClear(GL_COLOR_BUFFER_BIT);
    // В качестве текущего цвета рисования задает красный //RGB
    glColor3f(1.0f, 0.0f, 0.0f);
    // Рисует прямоугольник, закрашенный текущим цветом
    glRectf(x1, y1, x1 + rsize, y1 - rsize);
    // Очищает очередь текущих команд и переключает буферы
    glutSwapBuffers();
}

//Вызывается библиотекой GLUT в холостом состоянии (окно не меняет размера и не перемещается)
void TimerFunction(int value)
{
    // Меняет направление на противоположное при подходе
    // к левому или правому краю
    if (x1 > windowWidth - rsize || x1 < -windowWidth)
    xstep = -xstep;
    // Меняет направление на противоположное при подходе
    // к верхнему или нижнему краю
    if (y1 > windowHeight || y1 < -windowHeight + rsize)
    ystep = -ystep;
    // Перемещает квадрат
    x1 += xstep; y1 += ystep;
    // Проверка границ. Если окно меньше прямо-угольника,
    // который прыгает внутри, и прямоугольник об-наруживает
    // себя вне нового объема отсечения
    if (x1 > (windowWidth - rsize + xstep))
    x1 = windowWidth - rsize - 1; else if (x1 < -(windowWidth + xstep)) x1 = -windowWidth - 1; if (y1 > (windowHeight + ystep))
    y1 = windowHeight - 1; else if (y1 < -(windowHeight - rsize + ystep)) y1 = -windowHeight + rsize - 1;
    // Перерисовывает сцену с новыми координатами
    glutPostRedisplay();
    glutTimerFunc(33, TimerFunction, 1);
}

//Задает состояние визуализации
void SetupRC(void)
{
    // Устанавливает в качестве цвета очистки синий
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
}

//Вызывается библиотекой GLUT при изменении размеров окна
void ChangeSize(GLsizei w, GLsizei h)
{
    GLfloat aspectRatio;
    // Предотвращает деление на нуль
    if (h == 0) h = 1;
    // Устанавливает поле просмотра с размерами ок-на
    glViewport(0, 0, w, h);
    // Обновляет систему координат
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //С помощью плоскостей отсечения (левая, пра-вая, нижняя,
    // верхняя, ближняя, дальняя) устанавливает объем отсечения
    aspectRatio = (GLfloat)w / (GLfloat)h;
    if (w <= h)
    {
        windowWidth = 100;
        windowHeight = 100 / aspectRatio;
        glOrtho(-100.0, 100.0, -windowHeight, windowHeight, 1.0, -1.0);
    }
    else
    {
        windowWidth = 100 * aspectRatio; windowHeight = 100;
        glOrtho(-windowWidth, windowWidth, -100.0, 100.0, 1.0, -1.0);
    }
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

//Точка входа основной программы
void main(void)
{
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); glutCreateWindow("Bounce");
    glutDisplayFunc(RenderScene);
    glutReshapeFunc(ChangeSize);
    glutTimerFunc(33, TimerFunction, 1);
    SetupRC();
    glutMainLoop();
}