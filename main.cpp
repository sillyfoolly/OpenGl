#pragma region LAB3_1
// #include <GL/glew.h>
// #include <GL/glut.h>
// #include "math.h"

// double rotate_y = 0;
// double rotate_x = 0;
// double a = 1;
// double r = (a*(sqrt(3)/6));
// double R = (a*(sqrt(3)/3));
// GLfloat v[4][3] = {{a/2, -r, r}, {-a/2, -r, r}, {0, -r, -R}, {0, R, 0}};

// void display() {
//     // Очищаем буферы
//     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

//     // Поворачиваем на угол
//     glRotatef(rotate_x, 1.0, 0.0, 0.0);
//     glRotatef(rotate_y, 0.0, 1.0, 0.0);

//     // //низ
//     // glBegin(GL_POLYGON);
//     // glColor3f(1.0, 1.0, 0.0);
//     // glVertex3f(0.5, -0.3, 0.5);
//     // glVertex3f(0.5, -0.3, -0.5);
//     // glVertex3f(-0.5, -0.3, -0.5);
//     // glVertex3f(-0.5, -0.3, 0.5);
//     // glEnd();

//     // //Задаем грань куба 2
//     // glBegin(GL_POLYGON);
//     // glColor3f(1.0, 1.0, 1.0);
//     // glVertex3f(0.5, -0.3, 0.5);
//     // glVertex3f(0.5, -0.3, -0.5);
//     // glVertex3f(0, 0.5, 0);
//     // glEnd();

//     // //Задаем грань куба 3
//     // glBegin(GL_POLYGON);
//     // glColor3f(1.0, 0.0, 1.0);
//     // glVertex3f(0.5, -0.3, -0.5);
//     // glVertex3f(-0.5, -0.3, -0.5);
//     // glVertex3f(0, 0.5, 0);
//     // glEnd();

//     // //Задаем грань куба 4
//     // glBegin(GL_POLYGON);
//     // glColor3f(0.0, 1.0, 0.0);
//     // glVertex3f(-0.5, -0.3, -0.5);
//     // glVertex3f(-0.5, -0.3, 0.5);
//     // glVertex3f(0, 0.5, 0);
//     // glEnd();

//     // //Задаем грань куба 5
//     // glBegin(GL_POLYGON);
//     // glColor3f(0.0, 0.0, 1.0);
//     // glVertex3f(-0.5, -0.3, 0.5);
//     // glVertex3f(0.5, -0.3, 0.5);
//     // glVertex3f(0, 0.5, 0);
//     // glEnd();

//     //низ
//     glBegin(GL_POLYGON);
//     glColor3f(1.0, 1.0, 0.0);
//     glVertex3fv(v[0]);
//     glVertex3fv(v[2]);
//     glVertex3fv(v[1]);
//     glEnd();

//     //Задаем грань тетраэдора 1
//     glBegin(GL_POLYGON);
//     glColor3f(1.0, 1.0, 1.0);
//     glVertex3fv(v[0]);
//     glVertex3fv(v[1]);
//     glVertex3fv(v[3]);
//     glEnd();

//     //Задаем грань тетраэдора 2
//     glBegin(GL_POLYGON);
//     glColor3f(0.0, 0.0, 1.0);
//     glVertex3fv(v[0]);
//     glVertex3fv(v[2]);
//     glVertex3fv(v[3]);
//     glEnd();

//     //Задаем грань тетраэдора 3
//     glBegin(GL_POLYGON);
//     glColor3f(0.0, 1.0, 0.0);
//     glVertex3fv(v[2]);
//     glVertex3fv(v[1]);
//     glVertex3fv(v[3]);
//     glEnd();

//     glutSwapBuffers();
// }

// void specialKeys(int key, int x, int y) {
//     // Меняем угол на 5 градусов
//     if (key == GLUT_KEY_RIGHT){
//         rotate_y = 5;
//         rotate_x = 0;}
//     else if (key == GLUT_KEY_LEFT){
//         rotate_y = -5;
//         rotate_x = 0;}
//     else if (key == GLUT_KEY_UP){
//         rotate_x = 5;
//         rotate_y = 0;}
//     else if (key == GLUT_KEY_DOWN){
//         rotate_x = -5;
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
// #include <GL/glew.h>
// #include <GL/glut.h>
// #include <math.h>

// // Вызывается для рисования сцены
// void RenderScene(void)
// {
//     // Угол поворота вокруг ядра
//     static GLfloat fElect1 = 0.0f;
//     static GLfloat rofl = 0.0f;
//     // Очищаем окно текущим цветом очистки
//     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//     //Обновляем матрицу наблюдения модели
//     glMatrixMode(GL_MODELVIEW);
//     glLoadIdentity();
//     //Транслируем всю сцену в поле зрения
//     //Это исходное преобразование наблюдения
//     glTranslatef(0.0f, 0.0f, -100.0f);
//     // Красное ядро
//     glColor3ub(255, 255, 255);
//     glutSolidSphere(10.0f, 150, 150);
//     // Желтые электроны
//     glColor3ub(255, 255, 0);

//     // Орбита первого электрона
//     // Записываем преобразование наблюдения
//     glPushMatrix();
//     glRotatef(fElect1, 0.0f, 1.0f, 0.0f);
//     glTranslatef(90.0f, rofl, 0.0f);
//     // Рисуем электрон
//     glutSolidSphere(6.0f, 150, 150);
//     // Восстанавливаем преобразование наблюдения
//     glPopMatrix();

//     //Орбита второго электрона
//     glPushMatrix();
//     glRotatef(45.0f, 0.0f, 0.0f, 1.0f);
//     glRotatef(fElect1, 0.0f, 1.0f, 0.0f);
//     glTranslatef(-70.0f, rofl, 0.0f);
//     glutSolidSphere(6.0f, 15, 15);
//     glPopMatrix();

//     // Орбита третьего электрона
//     glPushMatrix();
//     glRotatef(360.0f - 45.0f, 0.0f, 0.0f, 1.0f);
//     glRotatef(fElect1, 0.0f, 1.0f, 0.0f);
//     glTranslatef(0.0f, rofl, 60.0f);
//     glutSolidSphere(6.0f, 15, 15);
//     glPopMatrix();

//     // Увеличиваем угол поворота
//     fElect1 += 10.0f;
//     if (fElect1 > 360.0f)
//         fElect1 = 0.0f;

//     rofl += 3.0f;
//     if (rofl > 6.0f)
//         rofl = 0.0f;

//     // Показываем построенное изображение
//     glutSwapBuffers();
// }

// // Функция выполняет необходимую инициализацию
// // в контексте визуализации
// void SetupRC()
// {
//     glEnable(GL_DEPTH_TEST); // Удаление скрытых поверхностей
//     glFrontFace(GL_CCW); // Полигоны с обходом против
//     //часовой стрелки направлены наружу
//     glEnable(GL_CULL_FACE); //Внутри пирамиды расчеты не //производятся
//     // Черный фон
//     glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
// }

// void TimerFunc(int value)
// {
//     glutPostRedisplay();
//     glutTimerFunc(100, TimerFunc, 1);
// }

// void ChangeSize(int w, int h)
// {
//     GLfloat nRange = 100.0f;
//     // Предотвращение деления на ноль
//     if (h == 0)
//     h = 1;
//     // Устанавливает поле просмотра по размерам окна
//     glViewport(0, 0, w, h);
//     // Обновляет стек матрицы проектирования
//     glMatrixMode(GL_PROJECTION);
//     glLoadIdentity();
//     // Устанавливает объем отсечения с помощью отсекающих
//     // плоскостей (левая, правая, нижняя, верхняя,
//     // ближняя, дальняя)
//     if (w <= h)
//     glOrtho(-nRange, nRange, nRange * h / w, -nRange * h / w, -nRange * 2.0f, nRange *
//     2.0f);
//     else
//     glOrtho(-nRange * w / h, nRange * w / h, nRange, -nRange, -nRange * 2.0f, nRange *
//     2.0f);
//     glMatrixMode(GL_MODELVIEW);
//     glLoadIdentity();
// }

// int main(int argc, char* argv[])
// {
//     glutInit(&argc, argv);
//     glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//     glutInitWindowSize(800, 600);
//     glutCreateWindow("OpenGL Atom");
//     glutReshapeFunc(ChangeSize);
//     glutDisplayFunc(RenderScene);
//     glutTimerFunc(500, TimerFunc, 1);
//     SetupRC();
//     glutMainLoop();
//     return 0;
// }
#pragma endregion

#pragma region LAB3_3
// #include <GL/glew.h>
// #include <GL/glut.h>
// #include <math.h>

// // Параметры освещения
// GLfloat whiteLight[] = { 0.2f, 0.2f, 0.2f, 1.0f };
// GLfloat sourceLight[] = { 0.8f, 0.8f, 0.8f, 1.0f };
// GLfloat lightPos[] = { 0.0f, 0.0f, 0.0f, 1.0f };

// // Вызывается для рисования сцены
// void RenderScene(void)
// {
//     // Угол поворота системы Земля/Луна
//     static float fMoonRot = 0.0f;
//     static float fEarthRot = 0.0f;
//     // Очищаем окно текущим цветом очистки
//     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//     // Save the matrix state and do the rotations
//     glMatrixMode(GL_MODELVIEW);
//     glPushMatrix();
//     // Транслируем всю сцену в поле зрения
//     glTranslatef(0.0f, 0.0f, -300.0f);
//     // Устанавливаем цвет материала красным
//     // Солнце
//     glDisable(GL_LIGHTING);
//     glColor3ub(255, 255, 0);
//     glutSolidSphere(15.0f, 30, 17);
//     glEnable(GL_LIGHTING);
//     // Движение источника света, после прорисовки солнца!
//     glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
//     // Поворот системы координат
//     glRotatef(60, 0.0f, 0.0f, 1.0f); 
//     glRotatef(fEarthRot, 0.0f, 1.0f, 0.0f);
//     // Прорисовка Земли
//     glColor3ub(0, 0, 255);
//     glTranslatef(105.0f, 0.0f, 0.0f);
//     glutSolidSphere(15.0f, 30, 17);
//     // Поворот в системе координат, связанной с Землей
//     // и изображение Луны
//     glColor3ub(200, 200, 200);
//     glRotatef(-fEarthRot, 0.0f, 1.0f, 0.0f);
//     glRotatef(-105, 0.0f, 0.0f, 1.0f);
//     glRotatef(fMoonRot, 0.0f, 1.0f, 0.0f);
//     glTranslatef(30.0f, 0.0f, 0.0f);
//     fMoonRot += 15.0f;
//     if (fMoonRot > 360.0f)
//         fMoonRot = 0.0f;
//     glutSolidSphere(6.0f, 30, 17);
//     // Восстанавливается состояние матрицы
//     glPopMatrix(); // Матрица наблюдения модели
//     // Шаг по орбите Земли равен пяти градусам
//     fEarthRot += 5.0f;
//     if (fEarthRot > 360.0f)
//         fEarthRot = 0.0f;
//     // Показывается построенное изображение
//     glutSwapBuffers();
// }

// // Функция выполняет всю необходимую инициализацию в контексте
// //визуализации
// void SetupRC()
// {
//     // Параметры света и координаты
//     glEnable(GL_DEPTH_TEST); // Удаление скрытых поверхностей
//     glFrontFace(GL_CCW); //Многоугольники с обходом против часовой стрелки направлены наружу
//     glEnable(GL_CULL_FACE); //Расчеты внутри самолета не выполняются
//     // Активация освещения
//     glEnable(GL_LIGHTING);
//     // Устанавливается и активизируется источник света 0
//     glLightModelfv(GL_LIGHT_MODEL_AMBIENT, whiteLight);
//     glLightfv(GL_LIGHT0, GL_DIFFUSE, sourceLight);
//     glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
//     glEnable(GL_LIGHT0);
//     // Активизирует согласование цветов
//     glEnable(GL_COLOR_MATERIAL);
//     // Свойства материалов соответствуют кодам glColor
//     glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
//     // Темно-синий фон
//     glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
// }

// void TimerFunc(int value)
// {
//     glutPostRedisplay();
//     glutTimerFunc(100, TimerFunc, 1);
// }

// void ChangeSize(int w, int h)
// {
//     GLfloat fAspect;
//     // Предотвращает деление на ноль
//     if (h == 0)
//         h = 1;
//     // Размер поля просмотра устанавливается равным размеру окна
//     glViewport(0, 0, w, h);
//     // Расчет соотношения сторон окна
//     fAspect = (GLfloat)w / (GLfloat)h;
//     // Устанавливаем перспективную систему координат
//     glMatrixMode(GL_PROJECTION);
//     glLoadIdentity();
//     // Поле обзора равно 45 градусов, ближняя и дальняя плоскости
//     // проходят через 1 и 425
//     gluPerspective(45.0f, fAspect, 1.0, 425.0);
//     // Обновляем матрицу наблюдения модели
//     glMatrixMode(GL_MODELVIEW);
//     glLoadIdentity();
// }

// int main(int argc, char* argv[])
// {
//     glutInit(&argc, argv);
//     glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//     glutInitWindowSize(800, 600);
//     glutCreateWindow("Earth/Moon/Sun System");
//     glutReshapeFunc(ChangeSize);
//     glutDisplayFunc(RenderScene);
//     glutTimerFunc(250, TimerFunc, 1);
//     SetupRC();
//     glutMainLoop();
// }
#pragma endregion
