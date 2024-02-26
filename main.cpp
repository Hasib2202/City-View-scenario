#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#include <mmsystem.h>
# define PI           3.14159265358979323846
GLfloat position = 0.0f;
GLfloat speed = 0.05f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.005f;
GLfloat position4 = 0.0f;
GLfloat position5 = 0.0f;
GLfloat position6 = 0.0f;
GLfloat position7 = 0.0f;
GLfloat position8 = 0.0f;
GLfloat position9 = 0.0f;
GLfloat position10 = 0.0f;
GLfloat speed4 = 0.02f;
GLfloat speed2 = 0.001f;

void update(int value) {
    if(position >1.8)
        position = -1.0f;
    position += speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}

void update2(int value) {
    if(position2 <-1.8)
        position2 = 1.0f;
    position2 -= speed;
	glutPostRedisplay();
	glutTimerFunc(100, update2, 0);
}
void update3(int value) {
    if(position3 >1.8)
        position3 = -1.0f;
    position3 += speed3;
	glutPostRedisplay();
	glutTimerFunc(100, update3, 0);
}
void update4(int value) {
    if(position4 >1.8)
        position4 = -1.0f;
    position4 += speed4;
	glutPostRedisplay();
	glutTimerFunc(100, update4, 0);
}

void update5(int value) {
    if(position5 <-1.8)
        position5 = 1.0f;
    position5 -= speed4;
	glutPostRedisplay();
	glutTimerFunc(100, update5, 0);
}

void update6(int value) {
    if(position6 <-1.8)
        position6 = 1.0f;
    position6 -= speed4;
	glutPostRedisplay();
	glutTimerFunc(100, update6, 0);
}

void update7(int value) {
    if(position7 <-0.2)
        position7 = 1.0f;
    position7 -= speed;
	glutPostRedisplay();
	glutTimerFunc(100, update7, 0);
}

void update8(int value) {
    if(position8 >0.1)
        position8 = -0.1f;
    position8 += speed2;
	glutPostRedisplay();
	glutTimerFunc(100, update8, 0);
}
void update9(int value) {
    if(position9 <-1.8)
        position9 = 1.0f;
    position9 -= speed3;
	glutPostRedisplay();
	glutTimerFunc(100, update9, 0);
}

void update10(int value) {
    if(position10 >1.8)
        position10 = -1.0f;
    position10 += speed3;
	glutPostRedisplay();
	glutTimerFunc(100, update10, 0);
}

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

}

void rain()
{
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_QUADS);           //road
 glColor3ub(84, 84, 84);
 glVertex2f(-1.0,-1.0);
 glVertex2f(1.0,-1.0);
 glVertex2f(1.0,-0.4);
 glVertex2f(-1.0,-0.4);
 glEnd();
 glLineWidth(20);
 glBegin(GL_LINES);   //white
 glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-1.0);
 glVertex2f(-0.8,-1.0);
glVertex2f(-0.6,-1.0);
 glVertex2f(-0.4,-1.0);
 glVertex2f(-0.2,-1.0);
 glVertex2f(0.0,-1.0);
  glVertex2f(0.2,-1.0);
 glVertex2f(0.4,-1.0);
 glVertex2f(0.6,-1.0);
 glVertex2f(0.8,-1.0);
 glEnd();
 glLineWidth(20);
 glBegin(GL_LINES);//black
 glColor3ub(10, 10, 10);
 glVertex2f(-0.8,-1.0);
 glVertex2f(-0.6,-1.0);
 glVertex2f(-0.4,-1.0);
 glVertex2f(-0.2,-1.0);
 glVertex2f(0.0,-1.0);
 glVertex2f(0.2,-1.0);
 glVertex2f(0.4,-1.0);
 glVertex2f(0.6,-1.0);
 glVertex2f(0.8,-1.0);
 glVertex2f(1.0,-1.0);
 glEnd();
     glLineWidth(40);
  glBegin(GL_LINES);   //white
  glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-0.4);
 glVertex2f(-0.8,-0.4);
glVertex2f(-0.6,-0.4);
 glVertex2f(-0.4,-0.4);
 glVertex2f(-0.2,-0.4);
 glVertex2f(0.0,-0.4);
  glVertex2f(0.2,-0.4);
 glVertex2f(0.4,-0.4);
 glVertex2f(0.6,-0.4);
 glVertex2f(0.8,-0.4);
 glEnd();
 glLineWidth(40);
 glBegin(GL_LINES);//black
 glColor3ub(10, 10, 10);
 glVertex2f(-0.8,-0.4);
 glVertex2f(-0.6,-0.4);
 glVertex2f(-0.4,-0.4);
 glVertex2f(-0.2,-0.4);
 glVertex2f(0.0,-0.4);
 glVertex2f(0.2,-0.4);
 glVertex2f(0.4,-0.4);
 glVertex2f(0.6,-0.4);
 glVertex2f(0.8,-0.4);
 glVertex2f(1.0,-0.4);
 glEnd();
 glLineWidth(5);
  glBegin(GL_LINES);   //road div
  glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-0.7);
 glVertex2f(-0.8,-0.7);
 glVertex2f(-0.6,-0.7);
 glVertex2f(-0.4,-0.7);
 glVertex2f(-0.2,-0.7);
 glVertex2f(0.0,-0.7);
 glVertex2f(0.2,-0.7);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.6,-0.7);
 glVertex2f(0.8,-0.7);
 glVertex2f(1.0,-0.7);
 glEnd();
 glBegin(GL_QUADS);           //river 168, 216, 240
 glColor3ub(168, 216, 240);
 glVertex2f(-1.0,-0.4);
 glVertex2f(1.0,-0.4);
 glVertex2f(1.0,0.1);
 glVertex2f(-1.0,0.1);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub(28, 27, 27);        //sky

 glVertex2f(-1.0,0.1);
 glVertex2f(1.0,0.1);

 glVertex2f(1.0,1.0);
 glVertex2f(-1.0,1.0);
 glEnd();
  glBegin(GL_LINES);
  glColor3ub(115, 115, 115);
  glVertex2f(-1.0,0.1);
  glVertex2f(1.0,0.1);
  glEnd();



  glBegin(GL_QUADS);           //building
 glColor3ub(0, 16, 140);
 glVertex2f(-1.0,0.1);
 glVertex2f(-0.88,0.1);
 glVertex2f(-0.88,0.3);
 glVertex2f(-1.0,0.3);
   glVertex2f(-0.88,0.1);
 glVertex2f(-0.865,0.1);
 glVertex2f(-0.865,0.25);
 glVertex2f(-0.88,0.3);
 glEnd();
 glBegin(GL_QUADS);           //building2
 glColor3ub(90, 184, 64);
 glVertex2f(-0.73,0.1);
 glVertex2f(-0.85,0.1);
 glVertex2f(-0.85,0.4);
 glVertex2f(-0.73,0.4);
    glVertex2f(-0.73,0.1);
 glVertex2f(-0.71,0.1);
 glVertex2f(-0.71,0.35);
 glVertex2f(-0.73,0.4);
 glEnd();
glBegin(GL_QUADS);           //building3
 glColor3ub(96, 166, 141);
 glVertex2f(-0.7,0.1);
 glVertex2f(-0.58,0.1);
 glVertex2f(-0.58,0.45);
 glVertex2f(-0.7,0.45);
   glVertex2f(-0.58,0.1);
 glVertex2f(-0.57,0.1);
 glVertex2f(-0.57,0.4);
 glVertex2f(-0.58,0.45);
 glEnd();
  glBegin(GL_QUADS);           //building4
 glColor3ub(46, 8, 92);
 glVertex2f(-0.56,0.1);
 glVertex2f(-0.44,0.1);
 glVertex2f(-0.44,0.33);
 glVertex2f(-0.56,0.33);
   glVertex2f(-0.44,0.1);
 glVertex2f(-0.43,0.1);
 glVertex2f(-0.43,0.3);
 glVertex2f(-0.44,0.33);
 glEnd();
 glBegin(GL_QUADS);           //building5
 glColor3ub(242, 189, 10);
 glVertex2f(-0.41,0.1);
 glVertex2f(-0.29,0.1);
 glVertex2f(-0.29,0.55);
 glVertex2f(-0.41,0.55);
  glVertex2f(-0.29,0.1);
 glVertex2f(-0.28,0.1);
 glVertex2f(-0.28,0.5);
 glVertex2f(-0.29,0.55);
 glEnd();
 glBegin(GL_QUADS);           //building6
 glColor3ub(138, 42, 4);
 glVertex2f(-0.27,0.1);
 glVertex2f(-0.15,0.1);
 glVertex2f(-0.15,0.45);
 glVertex2f(-0.27,0.45);
  glVertex2f(-0.15,0.1);
 glVertex2f(-0.14,0.1);
 glVertex2f(-0.14,0.4);
 glVertex2f(-0.15,0.45);
 glEnd();

 glBegin(GL_QUADS);           //building7
 glColor3ub(131, 0, 189);
 glVertex2f(-0.13,0.1);
 glVertex2f(-0.01,0.1);
 glVertex2f(-0.01,0.3);
 glVertex2f(-0.13,0.3);
  glVertex2f(-0.01,0.1);
 glVertex2f(-0.0,0.1);
 glVertex2f(-0.0,0.25);
 glVertex2f(-0.01,0.3);
 glEnd();

 glBegin(GL_QUADS);           //building8
 glColor3ub(94, 90, 92);
 glVertex2f(0.01,0.1);
 glVertex2f(0.13,0.1);
 glVertex2f(0.13,0.4);
 glVertex2f(0.01,0.4);
  glVertex2f(0.13,0.1);
 glVertex2f(0.14,0.1);
 glVertex2f(0.14,0.35);
 glVertex2f(0.13,0.4);
 glEnd();

 glBegin(GL_QUADS);           //building9
 glColor3ub(212, 23, 111);
 glVertex2f(0.15,0.1);
 glVertex2f(0.27,0.1);
 glVertex2f(0.27,0.5);
 glVertex2f(0.15,0.5);
  glVertex2f(0.27,0.1);
 glVertex2f(0.28,0.1);
 glVertex2f(0.28,0.45);
 glVertex2f(0.27,0.5);
 glEnd();

 glBegin(GL_QUADS);           //building10
 glColor3ub(17, 142, 184);
 glVertex2f(0.29,0.1);
 glVertex2f(0.41,0.1);
 glVertex2f(0.41,0.55);
 glVertex2f(0.29,0.55);
  glVertex2f(0.41,0.1);
 glVertex2f(0.42,0.1);
 glVertex2f(0.42,0.5);
 glVertex2f(0.41,0.55);
 glEnd();

  glBegin(GL_QUADS);           //building11
 glColor3ub(140, 82, 0);
 glVertex2f(0.43,0.1);
 glVertex2f(0.55,0.1);
 glVertex2f(0.55,0.33);
 glVertex2f(0.43,0.33);
  glVertex2f(0.55,0.1);
 glVertex2f(0.56,0.1);
 glVertex2f(0.56,0.3);
 glVertex2f(0.55,0.33);
 glEnd();

 glBegin(GL_QUADS);           //building12
 glColor3ub(94, 90, 92);
 glVertex2f(0.57,0.1);
 glVertex2f(0.69,0.1);
 glVertex2f(0.69,0.5);
 glVertex2f(0.57,0.5);
  glVertex2f(0.69,0.1);
 glVertex2f(0.7,0.1);
 glVertex2f(0.7,0.45);
 glVertex2f(0.69,0.5);
 glEnd();

  glBegin(GL_QUADS);           //building13
 glColor3ub(125, 6, 6);
 glVertex2f(0.71,0.1);
 glVertex2f(0.83,0.1);
 glVertex2f(0.83,0.4);
 glVertex2f(0.71,0.4);
  glVertex2f(0.83,0.1);
 glVertex2f(0.84,0.1);
 glVertex2f(0.84,0.35);
 glVertex2f(0.83,0.4);
 glEnd();

 glBegin(GL_QUADS);           //building14
 glColor3ub(153, 105, 0);
 glVertex2f(0.85,0.1);
 glVertex2f(0.97,0.1);
 glVertex2f(0.97,0.6);
 glVertex2f(0.85,0.6);
  glVertex2f(0.97,0.1);
 glVertex2f(0.98,0.1);
 glVertex2f(0.98,0.55);
 glVertex2f(0.97,0.6);
 glEnd();
 glPointSize(30);
 glBegin(GL_POINTS);
 glColor3ub(227, 212, 129);//255, 236, 173  227, 212, 129 240, 255, 77
 glVertex2f(-0.97,0.2);////building1
 glVertex2f(-0.92,0.2);
 glVertex2f(-0.82,0.3);////building2
 glVertex2f(-0.77,0.3);
 glVertex2f(-0.82,0.2);////building2
 glVertex2f(-0.77,0.2);
  glVertex2f(-0.67,0.35);////building3
 glVertex2f(-0.62,0.35);
   glVertex2f(-0.67,0.22);////building3
 glVertex2f(-0.62,0.22);
  glVertex2f(-0.53,0.27);////building4
 glVertex2f(-0.48,0.27);
 glVertex2f(-0.53,0.18);////building4
 glVertex2f(-0.48,0.18);
  glVertex2f(-0.38,0.47);////building5
 glVertex2f(-0.33,0.47);
 glVertex2f(-0.38,0.36);////building5
 glVertex2f(-0.33,0.36);
 glVertex2f(-0.38,0.24);////building5
 glVertex2f(-0.33,0.24);
  glVertex2f(-0.24,0.35);////building6
 glVertex2f(-0.19,0.35);
 glVertex2f(-0.24,0.25);////building6
 glVertex2f(-0.19,0.25);
  glVertex2f(-0.1,0.2);////building7
 glVertex2f(-0.05,0.2);
   glVertex2f(0.04,0.3);////building8
 glVertex2f(0.09,0.3);
 glVertex2f(0.04,0.2);////building8
 glVertex2f(0.09,0.2);
 glVertex2f(0.18,0.4);////building9
 glVertex2f(0.23,0.4);
  glVertex2f(0.18,0.3);////building9
 glVertex2f(0.23,0.3);
 glVertex2f(0.18,0.2);////building9
 glVertex2f(0.23,0.2);
  glVertex2f(0.32,0.45);////building10
 glVertex2f(0.37,0.45);
 glVertex2f(0.32,0.35);////building10
 glVertex2f(0.37,0.35);
 glVertex2f(0.32,0.25);////building10
 glVertex2f(0.37,0.25);
  glVertex2f(0.46,0.27);////building11
 glVertex2f(0.51,0.27);
 glVertex2f(0.46,0.18);////building11
 glVertex2f(0.51,0.18);
  glVertex2f(0.6,0.4);////building12
 glVertex2f(0.65,0.4);
 glVertex2f(0.6,0.3);////building12
 glVertex2f(0.65,0.3);
 glVertex2f(0.6,0.2);////building12
 glVertex2f(0.65,0.2);
 glVertex2f(0.74,0.3);////building13
 glVertex2f(0.79,0.3);
 glVertex2f(0.74,0.2);////building13
 glVertex2f(0.79,0.2);
 glVertex2f(0.88,0.5);////building14
 glVertex2f(0.93,0.5);
 glVertex2f(0.88,0.4);////building14
 glVertex2f(0.93,0.4);
 glVertex2f(0.88,0.3);////building14
 glVertex2f(0.93,0.3);
 glVertex2f(0.88,0.2);////building14
 glVertex2f(0.93,0.2);
  glEnd();

  glPushMatrix();
glTranslatef(position5,0.0f, 0.0f);
  glBegin(GL_QUADS);//ship2
  glColor3ub(156, 156, 156);
  glVertex2f(0.6,-0.05);
  glVertex2f(0.8,-0.05);
  glVertex2f(0.8,0.1);
  glVertex2f(0.5,0.1);
  glEnd();

  glBegin(GL_QUADS);//ship2floor1
  glColor3ub(30, 124, 133);
  glVertex2f(0.78,0.1);
  glVertex2f(0.78,0.18);
  glVertex2f(0.6,0.18);
  glVertex2f(0.55,0.1);
  glEnd();

   glBegin(GL_QUADS);//ship2floor2
  glColor3ub(30, 64, 133);
  glVertex2f(0.75,0.18);
  glVertex2f(0.75,0.25);
  glVertex2f(0.66,0.25);
  glVertex2f(0.62,0.18);
  glEnd();

    glPointSize(20);
glBegin(GL_POINTS);//ship2 window
 glColor3ub(227, 212, 129);
 glVertex2f(0.72,0.14);
 glVertex2f(0.65,0.14);
 glVertex2f(0.69,0.21);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);
  glBegin(GL_QUADS);//ship1
  glColor3ub(156, 156, 156);
  glVertex2f(-0.8,-0.2);
  glVertex2f(-0.4,-0.2);
  glVertex2f(-0.25,-0.02);
  glVertex2f(-0.8,-0.02);
  glEnd();

   glBegin(GL_QUADS);//shipfloor1
  glColor3ub(79, 78, 78);
  glVertex2f(-0.78,-0.02);
  glVertex2f(-0.4,-0.02);
  glVertex2f(-0.45,0.07);
  glVertex2f(-0.78,0.07);
  glEnd();

  glBegin(GL_QUADS);//shipfloor2
  glColor3ub(30, 124, 133);
  glVertex2f(-0.75,0.07);
  glVertex2f(-0.5,0.07);
  glVertex2f(-0.55,0.15);
  glVertex2f(-0.75,0.15);
  glEnd();

  glBegin(GL_QUADS);//shipfloor3
  glColor3ub(30, 64, 133);
  glVertex2f(-0.72,0.15);
  glVertex2f(-0.58,0.15);
  glVertex2f(-0.63,0.22);
  glVertex2f(-0.72,0.22);
  glEnd();

  glPointSize(20);
glBegin(GL_POINTS);//ship window
 glColor3ub(227, 212, 129);
 glVertex2f(-0.7,0.025);
 glVertex2f(-0.6,0.025);
glVertex2f(-0.5,0.025);

glVertex2f(-0.68,0.11);
 glVertex2f(-0.6,0.11);
glVertex2f(-0.67,0.185);
// glVertex2f(-0.7,0.025);
glEnd();//end ship
glPopMatrix();

   glLineWidth(10);//lamp
  glBegin(GL_LINES);
  glColor3ub(18, 18, 18);
  glVertex2f(0.6,-0.4);//lampstand1
  glVertex2f(0.6,-0.15);
   glVertex2f(0.0,-0.4);//lampstand2
  glVertex2f(0.0,-0.15);

  glVertex2f(-0.6,-0.4);//lampstand3
  glVertex2f(-0.6,-0.15);
  glEnd();

glLineWidth(5);//lampbulb
  glBegin(GL_LINES);
  glColor3ub(18, 18, 18);
  glVertex2f(0.72,-0.25);
  glVertex2f(0.48,-0.25);
  glVertex2f(0.72,-0.25);
  glVertex2f(0.72,-0.2);

  glVertex2f(0.48,-0.25);
  glVertex2f(0.48,-0.2);

  glVertex2f(-0.12,-0.25);//lamp2
  glVertex2f(0.12,-0.25);
  glVertex2f(-0.12,-0.25);
  glVertex2f(-0.12,-0.2);
  glVertex2f(0.12,-0.25);
  glVertex2f(0.12,-0.2);

  glVertex2f(-0.72,-0.25);//lamp3
  glVertex2f(-0.48,-0.25);
  glVertex2f(-0.72,-0.25);
  glVertex2f(-0.72,-0.2);

  glVertex2f(-0.48,-0.25);
  glVertex2f(-0.48,-0.2);
  glEnd();

  glEnable(GL_LIGHTING);
  GLfloat global_ambient[] = {4.9,3.9,0.0, 0.1};
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
  int l;//lampmidbulb2
GLfloat m1=0.6f; GLfloat m2 =-0.1f; GLfloat radi1 =0.06f;
int triangleAmount1 = 20;
GLfloat twicePi1 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m1, m2);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           m1+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   m2 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();
glDisable(GL_LIGHTING);

  int l1;//lampbulb1
GLfloat m3=0.72f; GLfloat m4 =-0.17f; GLfloat radi2 =0.04f;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(m3, m4);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m3+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m4 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


GLfloat m5=0.48f; GLfloat m6 =-0.17f;//lampbulb3
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(m5, m6);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m5+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m6 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}

glEnd();

glEnable(GL_LIGHTING);
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
GLfloat m11=0.0f; GLfloat m12 =-0.1f; //lampmidbulb2
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m11, m12);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           m11+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   m12 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();
glDisable(GL_LIGHTING);

GLfloat m31=-0.12f; GLfloat m41=-0.17f; //lampbulb1

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(m31, m41);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m31+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m41 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat m32=0.12f; GLfloat m42=-0.17f; //lampbulb2

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(m32, m42);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m32+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m42 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

glEnable(GL_LIGHTING);

  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);

GLfloat mm=-0.6f; GLfloat mm2 =-0.1f; //lampleftbulb2

glBegin(GL_TRIANGLE_FAN);
glColor3f(1,0,0);
glVertex2f(mm, mm2);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           mm+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   mm2 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();
glDisable(GL_LIGHTING);


GLfloat mm3=-0.72f; GLfloat mm4 =-0.17f;//lampleftbulb1

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(mm3, mm4);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           mm3+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   mm4 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat mm5=-0.48f; GLfloat mm6 =-0.17f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(mm5, mm6);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           mm5+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   mm6 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}

glEnd();


//glLoadIdentity();
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
GLfloat c1=-0.8f; GLfloat c2 =0.8f;GLfloat radi3 =0.08f; //cloud

glBegin(GL_TRIANGLE_FAN);
glColor3ub(69, 67, 67);
glVertex2f(c1, c2);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c1+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c2 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c12=-0.7f; GLfloat c22 =0.85f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(69, 67, 67);
glVertex2f(c12, c22);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c12+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c22 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c13=-0.72f; GLfloat c23 =0.7f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(69, 67, 67);
glVertex2f(c13, c23);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c13+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c23 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c14=-0.62f; GLfloat c24 =0.8f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(69, 67, 67);
glVertex2f(c14, c24);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c14+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c24 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c15=-0.85f; GLfloat c25 =0.7f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(69, 67, 67);
glVertex2f(c15, c25);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c15+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c25 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position9,0.0f, 0.0f);
glTranslatef(1.2,0.0,0.0);//Cloud 2

glBegin(GL_TRIANGLE_FAN);//cloud 2
glColor3ub(69, 67, 67);
glVertex2f(c1, c2);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c1+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c2 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

//GLfloat c12=-0.7f; GLfloat c22 =0.85f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(69, 67, 67);
glVertex2f(c12, c22);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c12+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c22 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(69, 67, 67);
glVertex2f(c13, c23);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c13+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c23 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(69, 67, 67);
glVertex2f(c14, c24);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c14+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c24 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(69, 67, 67);
glVertex2f(c15, c25);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c15+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c25 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();
glPopMatrix();


glLoadIdentity();
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_POLYGON);//Private Car
    glColor3ub(18, 54, 128);
      glVertex2f(-0.95,-0.45);
    glVertex2f(-0.95,-0.58);
    glVertex2f(-0.46,-0.58);
     glVertex2f(-0.46,-0.49);
       glVertex2f(-0.52,-0.45);

     glEnd();

//glLoadIdentity();

//glTranslatef(-0.45,0.05,0);
glBegin(GL_QUADS);
 glColor3ub(232, 23, 93);
 glVertex2f(-0.86,-0.45);
 glVertex2f(-0.79,-0.37);
 glVertex2f(-0.67,-0.37);
 glVertex2f(-0.59,-0.45);
 glEnd();
//glLoadIdentity();
int j;
GLfloat a=-0.84f; GLfloat b =-0.58f;GLfloat radi =0.05f;

int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(a, b);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           a+ (radi * cos(j *  twicePi/ triangleAmount)),
   b + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

GLfloat c=-0.57f; GLfloat d =-0.58f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(c, d);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           c+ (radi * cos(j *  twicePi/ triangleAmount)),
   d + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glPointSize(7);
glBegin(GL_POINTS);//private car light
 glColor3ub(237, 229, 185);
 glVertex2f(-0.46,-0.56);

glEnd();

glPointSize(28);
glBegin(GL_POINTS);//private car window
 glColor3ub(227, 212, 129);
 glVertex2f(-0.77,-0.41);
 glVertex2f(-0.69,-0.41);

glEnd();//Private Car end
glPopMatrix();

 glLoadIdentity();
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
  glBegin(GL_QUADS);           //Micro Car
 glColor3ub(97, 34, 110);
 glVertex2f(0.3,-0.7);
 glVertex2f(0.3,-0.85);
 glVertex2f(0.7,-0.85);
 glVertex2f(0.7,-0.7);
  glVertex2f(0.4,-0.64);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.7,-0.7);
 glVertex2f(0.7,-0.64);
 glEnd();

glBegin(GL_QUADS);
 glColor3ub(148, 16, 146);
 glVertex2f(0.4,-0.6);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.7,-0.7);
 glVertex2f(0.7,-0.6);
 glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(163, 193, 227);
glVertex2f(0.4,-0.6);
glVertex2f(0.3,-0.7);
glVertex2f(0.4,-0.7);

glEnd();
glPointSize(7);
glBegin(GL_POINTS);
 glColor3ub(247, 246, 218);
 glVertex2f(0.295,-0.82);

glEnd();

GLfloat r=0.4f; GLfloat s =-0.85f;

//int triangleAmount = 20;
//GLfloat twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(r, s);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           r+ (radi * cos(j *  twicePi/ triangleAmount)),
   s + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x=0.6f; GLfloat y =-0.85f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(x, y);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           x+ (radi * cos(j *  twicePi/ triangleAmount)),
   y + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();
glPointSize(30);
glBegin(GL_POINTS);//Micro window
 glColor3ub(227, 212, 129);
 glVertex2f(0.45,-0.65);
 glVertex2f(0.55,-0.65);
 glVertex2f(0.65,-0.65);
glEnd();//End Micro
glPopMatrix();
//glTranslatef(-0.4,0.05,0);


glPushMatrix();
glTranslatef(position6,0.0f, 0.0f);
glBegin(GL_QUADS);//Plane
    glColor3ub(20, 97, 23);//body
      glVertex2f(0.22,0.76);
      glVertex2f(0.62,0.76);
//glColor3ub(163, 2, 2);
    glVertex2f(0.62,0.82);
    glVertex2f(0.28,0.82);
glColor3ub(163, 2, 2);
         glVertex2f(0.6,0.82);//back body
         glVertex2f(0.62,0.76);
         glVertex2f(0.7,0.88);
       glVertex2f(0.66,0.88);

        glVertex2f(0.38,0.82);//wing1
        glVertex2f(0.46,0.9);
       glVertex2f(0.51,0.9);
         glVertex2f(0.43,0.82);


      glVertex2f(0.38,0.76);//wing2
        glVertex2f(0.44,0.64);
       glVertex2f(0.48,0.64);
         glVertex2f(0.42,0.76);


     glEnd();


glPointSize(15);
glBegin(GL_POINTS);//plane window
 glColor3ub(227, 212, 129);
  glVertex2f(0.3,0.79);
 glVertex2f(0.38,0.79);
 glVertex2f(0.46,0.79);
 glVertex2f(0.54,0.79);

glEnd();//End Plane
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f, position7,0.0f);
glLineWidth(2);//Rain
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(-0.95,0.95);
glVertex2f(-0.96,0.85);
glVertex2f(-0.9,0.95);
glVertex2f(-0.91,0.85);
 glVertex2f(-0.85,0.95);
glVertex2f(-0.86,0.85);
glVertex2f(-0.8,0.95);
glVertex2f(-0.81,0.85);
 glVertex2f(-0.75,0.95);
glVertex2f(-0.76,0.85);
glVertex2f(-0.7,0.95);
glVertex2f(-0.71,0.85);
 glVertex2f(-0.65,0.95);
glVertex2f(-0.66,0.85);
glVertex2f(-0.6,0.95);
glVertex2f(-0.61,0.85);
 glVertex2f(-0.55,0.95);
glVertex2f(-0.56,0.85);
glVertex2f(-0.5,0.95);
glVertex2f(-0.51,0.85);
 glVertex2f(-0.45,0.95);
glVertex2f(-0.46,0.85);
glVertex2f(-0.4,0.95);
glVertex2f(-0.41,0.85);
 glVertex2f(-0.35,0.95);
glVertex2f(-0.36,0.85);
glVertex2f(-0.3,0.95);
glVertex2f(-0.31,0.85);
 glVertex2f(-0.25,0.95);
glVertex2f(-0.26,0.85);
glVertex2f(-0.2,0.95);
glVertex2f(-0.21,0.85);
 glVertex2f(-0.15,0.95);
glVertex2f(-0.16,0.85);
glVertex2f(-0.1,0.95);
glVertex2f(-0.11,0.85);
 glVertex2f(-0.05,0.95);
glVertex2f(-0.06,0.85);
glVertex2f(0.0,0.95);
glVertex2f(-0.01,0.85);

glVertex2f(-0.95,0.65);
glVertex2f(-0.96,0.55);
glVertex2f(-0.9,0.65);
glVertex2f(-0.91,0.55);
 glVertex2f(-0.85,0.65);
glVertex2f(-0.86,0.55);
glVertex2f(-0.8,0.65);
glVertex2f(-0.81,0.55);
 glVertex2f(-0.75,0.65);
glVertex2f(-0.76,0.55);
glVertex2f(-0.7,0.65);
glVertex2f(-0.71,0.55);
 glVertex2f(-0.65,0.65);
glVertex2f(-0.66,0.55);
glVertex2f(-0.6,0.65);
glVertex2f(-0.61,0.55);
 glVertex2f(-0.55,0.65);
glVertex2f(-0.56,0.55);
glVertex2f(-0.5,0.65);
glVertex2f(-0.51,0.55);
 glVertex2f(-0.45,0.65);
glVertex2f(-0.46,0.55);
glVertex2f(-0.4,0.65);
glVertex2f(-0.41,0.55);
 glVertex2f(-0.35,0.65);
glVertex2f(-0.36,0.55);
glVertex2f(-0.3,0.65);
glVertex2f(-0.31,0.55);
 glVertex2f(-0.25,0.65);
glVertex2f(-0.26,0.55);
glVertex2f(-0.2,0.65);
glVertex2f(-0.21,0.55);
 glVertex2f(-0.15,0.65);
glVertex2f(-0.16,0.55);
glVertex2f(-0.1,0.65);
glVertex2f(-0.11,0.55);
 glVertex2f(-0.05,0.65);
glVertex2f(-0.06,0.55);
glVertex2f(0.0,0.65);
glVertex2f(-0.01,0.55);

glVertex2f(-0.95,0.35);
glVertex2f(-0.96,0.25);
glVertex2f(-0.9,0.35);
glVertex2f(-0.91,0.25);
 glVertex2f(-0.85,0.35);
glVertex2f(-0.86,0.25);
glVertex2f(-0.8,0.35);
glVertex2f(-0.81,0.25);
 glVertex2f(-0.75,0.35);
glVertex2f(-0.76,0.25);
glVertex2f(-0.7,0.35);
glVertex2f(-0.71,0.25);
 glVertex2f(-0.65,0.35);
glVertex2f(-0.66,0.25);
glVertex2f(-0.6,0.35);
glVertex2f(-0.61,0.25);
 glVertex2f(-0.55,0.35);
glVertex2f(-0.56,0.25);
glVertex2f(-0.5,0.35);
glVertex2f(-0.51,0.25);
 glVertex2f(-0.45,0.35);
glVertex2f(-0.46,0.25);
glVertex2f(-0.4,0.35);
glVertex2f(-0.41,0.25);
 glVertex2f(-0.35,0.35);
glVertex2f(-0.36,0.25);
glVertex2f(-0.3,0.35);
glVertex2f(-0.31,0.25);
 glVertex2f(-0.25,0.35);
glVertex2f(-0.26,0.25);
glVertex2f(-0.2,0.35);
glVertex2f(-0.21,0.25);
 glVertex2f(-0.15,0.35);
glVertex2f(-0.16,0.25);
glVertex2f(-0.1,0.35);
glVertex2f(-0.11,0.25);
 glVertex2f(-0.05,0.35);
glVertex2f(-0.06,0.25);
glVertex2f(0.0,0.35);
glVertex2f(-0.01,0.25);

glVertex2f(-0.95,0.05);
glVertex2f(-0.96,-0.05);
glVertex2f(-0.9,0.05);
glVertex2f(-0.91,-0.05);
 glVertex2f(-0.85,0.05);
glVertex2f(-0.86,-0.05);
glVertex2f(-0.8,0.05);
glVertex2f(-0.81,-0.05);
 glVertex2f(-0.75,0.05);
glVertex2f(-0.76,-0.05);
glVertex2f(-0.7,0.05);
glVertex2f(-0.71,-0.05);
 glVertex2f(-0.65,0.05);
glVertex2f(-0.66,-0.05);
glVertex2f(-0.6,0.05);
glVertex2f(-0.61,-0.05);
 glVertex2f(-0.55,0.05);
glVertex2f(-0.56,-0.05);
glVertex2f(-0.5,0.05);
glVertex2f(-0.51,-0.05);
 glVertex2f(-0.45,0.05);
glVertex2f(-0.46,-0.05);
glVertex2f(-0.4,0.05);
glVertex2f(-0.41,-0.05);
 glVertex2f(-0.35,0.05);
glVertex2f(-0.36,-0.05);
glVertex2f(-0.3,0.05);
glVertex2f(-0.31,-0.05);
 glVertex2f(-0.25,0.05);
glVertex2f(-0.26,-0.05);
glVertex2f(-0.2,0.05);
glVertex2f(-0.21,-0.05);
 glVertex2f(-0.15,0.05);
glVertex2f(-0.16,-0.05);
glVertex2f(-0.1,0.05);
glVertex2f(-0.11,-0.05);
 glVertex2f(-0.05,0.05);
glVertex2f(-0.06,-0.05);
glVertex2f(0.0,0.05);
glVertex2f(-0.01,-0.05);

glVertex2f(-0.95,-0.25);
glVertex2f(-0.96,-0.35);
glVertex2f(-0.9,-0.25);
glVertex2f(-0.91,-0.35);
 glVertex2f(-0.85,-0.25);
glVertex2f(-0.86,-0.35);
glVertex2f(-0.8,-0.25);
glVertex2f(-0.81,-0.35);
 glVertex2f(-0.75,-0.25);
glVertex2f(-0.76,-0.35);
glVertex2f(-0.7,-0.25);
glVertex2f(-0.71,-0.35);
 glVertex2f(-0.65,-0.25);
glVertex2f(-0.66,-0.35);
glVertex2f(-0.6,-0.25);
glVertex2f(-0.61,-0.35);
 glVertex2f(-0.55,-0.25);
glVertex2f(-0.56,-0.35);
glVertex2f(-0.5,-0.25);
glVertex2f(-0.51,-0.35);
 glVertex2f(-0.45,-0.25);
glVertex2f(-0.46,-0.35);
glVertex2f(-0.4,-0.25);
glVertex2f(-0.41,-0.35);
 glVertex2f(-0.35,-0.25);
glVertex2f(-0.36,-0.35);
glVertex2f(-0.3,-0.25);
glVertex2f(-0.31,-0.35);
 glVertex2f(-0.25,-0.25);
glVertex2f(-0.26,-0.35);
glVertex2f(-0.2,-0.25);
glVertex2f(-0.21,-0.35);
 glVertex2f(-0.15,-0.25);
glVertex2f(-0.16,-0.35);
glVertex2f(-0.1,-0.25);
glVertex2f(-0.11,-0.35);
 glVertex2f(-0.05,-0.25);
glVertex2f(-0.06,-0.35);
glVertex2f(0.0,-0.25);
glVertex2f(-0.01,-0.35);

glVertex2f(-0.95,-0.55);
glVertex2f(-0.96,-0.65);
glVertex2f(-0.9,-0.55);
glVertex2f(-0.91,-0.65);
 glVertex2f(-0.85,-0.55);
glVertex2f(-0.86,-0.65);
glVertex2f(-0.8,-0.55);
glVertex2f(-0.81,-0.65);
 glVertex2f(-0.75,-0.55);
glVertex2f(-0.76,-0.65);
glVertex2f(-0.7,-0.55);
glVertex2f(-0.71,-0.65);
 glVertex2f(-0.65,-0.55);
glVertex2f(-0.66,-0.65);
glVertex2f(-0.6,-0.55);
glVertex2f(-0.61,-0.65);
 glVertex2f(-0.55,-0.55);
glVertex2f(-0.56,-0.65);
glVertex2f(-0.5,-0.55);
glVertex2f(-0.51,-0.65);
 glVertex2f(-0.45,-0.55);
glVertex2f(-0.46,-0.65);
glVertex2f(-0.4,-0.55);
glVertex2f(-0.41,-0.65);
 glVertex2f(-0.35,-0.55);
glVertex2f(-0.36,-0.65);
glVertex2f(-0.3,-0.55);
glVertex2f(-0.31,-0.65);
 glVertex2f(-0.25,-0.55);
glVertex2f(-0.26,-0.65);
glVertex2f(-0.2,-0.55);
glVertex2f(-0.21,-0.65);
 glVertex2f(-0.15,-0.55);
glVertex2f(-0.16,-0.65);
glVertex2f(-0.1,-0.55);
glVertex2f(-0.11,-0.65);
 glVertex2f(-0.05,-0.55);
glVertex2f(-0.06,-0.65);
glVertex2f(0.0,-0.55);
glVertex2f(-0.01,-0.65);

glVertex2f(-0.95,-0.85);
glVertex2f(-0.96,-0.95);
glVertex2f(-0.9,-0.85);
glVertex2f(-0.91,-0.95);
 glVertex2f(-0.85,-0.85);
glVertex2f(-0.86,-0.95);
glVertex2f(-0.8,-0.85);
glVertex2f(-0.81,-0.95);
 glVertex2f(-0.75,-0.85);
glVertex2f(-0.76,-0.95);
glVertex2f(-0.7,-0.85);
glVertex2f(-0.71,-0.95);
 glVertex2f(-0.65,-0.85);
glVertex2f(-0.66,-0.95);
glVertex2f(-0.6,-0.85);
glVertex2f(-0.61,-0.95);
 glVertex2f(-0.55,-0.85);
glVertex2f(-0.56,-0.95);
glVertex2f(-0.5,-0.85);
glVertex2f(-0.51,-0.95);
 glVertex2f(-0.45,-0.85);
glVertex2f(-0.46,-0.95);
glVertex2f(-0.4,-0.85);
glVertex2f(-0.41,-0.95);
 glVertex2f(-0.35,-0.85);
glVertex2f(-0.36,-0.95);
glVertex2f(-0.3,-0.85);
glVertex2f(-0.31,-0.95);
 glVertex2f(-0.25,-0.85);
glVertex2f(-0.26,-0.95);
glVertex2f(-0.2,-0.85);
glVertex2f(-0.21,-0.95);
 glVertex2f(-0.15,-0.85);
glVertex2f(-0.16,-0.95);
glVertex2f(-0.1,-0.85);
glVertex2f(-0.11,-0.95);
 glVertex2f(-0.05,-0.85);
glVertex2f(-0.06,-0.95);
glVertex2f(0.0,-0.85);
glVertex2f(-0.01,-0.95);

glVertex2f(0.95,0.95);
glVertex2f(0.94,0.85);
glVertex2f(0.9,0.95);
glVertex2f(0.89,0.85);
 glVertex2f(0.85,0.95);
glVertex2f(0.84,0.85);
glVertex2f(0.8,0.95);
glVertex2f(0.79,0.85);
 glVertex2f(0.75,0.95);
glVertex2f(0.74,0.85);
glVertex2f(0.7,0.95);
glVertex2f(0.69,0.85);
 glVertex2f(0.65,0.95);
glVertex2f(0.64,0.85);
glVertex2f(0.6,0.95);
glVertex2f(0.59,0.85);
 glVertex2f(0.55,0.95);
glVertex2f(0.54,0.85);
glVertex2f(0.5,0.95);
glVertex2f(0.49,0.85);
 glVertex2f(0.45,0.95);
glVertex2f(0.44,0.85);
glVertex2f(0.4,0.95);
glVertex2f(0.39,0.85);
 glVertex2f(0.35,0.95);
glVertex2f(0.34,0.85);
glVertex2f(0.3,0.95);
glVertex2f(0.29,0.85);
 glVertex2f(0.25,0.95);
glVertex2f(0.24,0.85);
glVertex2f(0.2,0.95);
glVertex2f(0.19,0.85);
 glVertex2f(0.15,0.95);
glVertex2f(0.14,0.85);
glVertex2f(0.1,0.95);
glVertex2f(0.09,0.85);
 glVertex2f(0.05,0.95);
glVertex2f(0.04,0.85);

glVertex2f(0.95,0.65);
glVertex2f(0.94,0.55);
glVertex2f(0.9,0.65);
glVertex2f(0.89,0.55);
 glVertex2f(0.85,0.65);
glVertex2f(0.84,0.55);
glVertex2f(0.8,0.65);
glVertex2f(0.79,0.55);
 glVertex2f(0.75,0.65);
glVertex2f(0.74,0.55);
glVertex2f(0.7,0.65);
glVertex2f(0.69,0.55);
 glVertex2f(0.65,0.65);
glVertex2f(0.64,0.55);
glVertex2f(0.6,0.65);
glVertex2f(0.59,0.55);
 glVertex2f(0.55,0.65);
glVertex2f(0.54,0.55);
glVertex2f(0.5,0.65);
glVertex2f(0.49,0.55);
 glVertex2f(0.45,0.65);
glVertex2f(0.44,0.55);
glVertex2f(0.4,0.65);
glVertex2f(0.39,0.55);
 glVertex2f(0.35,0.65);
glVertex2f(0.34,0.55);
glVertex2f(0.3,0.65);
glVertex2f(0.29,0.55);
 glVertex2f(0.25,0.65);
glVertex2f(0.24,0.55);
glVertex2f(0.2,0.65);
glVertex2f(0.19,0.55);
 glVertex2f(0.15,0.65);
glVertex2f(0.14,0.55);
glVertex2f(0.1,0.65);
glVertex2f(0.09,0.55);
 glVertex2f(0.05,0.65);
glVertex2f(0.04,0.55);

glVertex2f(0.95,0.35);
glVertex2f(0.94,0.25);
glVertex2f(0.9,0.35);
glVertex2f(0.89,0.25);
 glVertex2f(0.85,0.35);
glVertex2f(0.84,0.25);
glVertex2f(0.8,0.35);
glVertex2f(0.79,0.25);
glVertex2f(0.75,0.35);
glVertex2f(0.74,0.25);
glVertex2f(0.7,0.35);
glVertex2f(0.69,0.25);
glVertex2f(0.65,0.35);
glVertex2f(0.64,0.25);
glVertex2f(0.6,0.35);
glVertex2f(0.59,0.25);
glVertex2f(0.55,0.35);
glVertex2f(0.54,0.25);
glVertex2f(0.5,0.35);
glVertex2f(0.49,0.25);
glVertex2f(0.45,0.35);
glVertex2f(0.44,0.25);
glVertex2f(0.4,0.35);
glVertex2f(0.39,0.25);
glVertex2f(0.35,0.35);
glVertex2f(0.34,0.25);
glVertex2f(0.3,0.35);
glVertex2f(0.29,0.25);
glVertex2f(0.25,0.35);
glVertex2f(0.24,0.25);
glVertex2f(0.2,0.35);
glVertex2f(0.19,0.25);
glVertex2f(0.15,0.35);
glVertex2f(0.14,0.25);
glVertex2f(0.1,0.35);
glVertex2f(0.09,0.25);
glVertex2f(0.05,0.35);
glVertex2f(0.04,0.25);

glVertex2f(0.95,0.05);
glVertex2f(0.94,-0.05);
glVertex2f(0.9,0.05);
glVertex2f(0.89,-0.05);
 glVertex2f(0.85,0.05);
glVertex2f(0.84,-0.05);
glVertex2f(0.8,0.05);
glVertex2f(0.79,-0.05);
glVertex2f(0.75,0.05);
glVertex2f(0.74,-0.05);
glVertex2f(0.7,0.05);
glVertex2f(0.69,-0.05);
glVertex2f(0.65,0.05);
glVertex2f(0.64,-0.05);
glVertex2f(0.6,0.05);
glVertex2f(0.59,-0.05);
glVertex2f(0.55,0.05);
glVertex2f(0.54,-0.05);
glVertex2f(0.5,0.05);
glVertex2f(0.49,-0.05);
glVertex2f(0.45,0.05);
glVertex2f(0.44,-0.05);
glVertex2f(0.4,0.05);
glVertex2f(0.39,-0.05);
glVertex2f(0.35,0.05);
glVertex2f(0.34,-0.05);
glVertex2f(0.3,0.05);
glVertex2f(0.29,-0.05);
glVertex2f(0.25,0.05);
glVertex2f(0.24,-0.05);
glVertex2f(0.2,0.05);
glVertex2f(0.19,-0.05);
glVertex2f(0.15,0.05);
glVertex2f(0.14,-0.05);
glVertex2f(0.1,0.05);
glVertex2f(0.09,-0.05);
glVertex2f(0.05,0.05);
glVertex2f(0.04,-0.05);

glVertex2f(0.95,-0.25);
glVertex2f(0.94,-0.35);
glVertex2f(0.9,-0.25);
glVertex2f(0.89,-0.35);
 glVertex2f(0.85,-0.25);
glVertex2f(0.84,-0.35);
glVertex2f(0.8,-0.25);
glVertex2f(0.79,-0.35);
glVertex2f(0.75,-0.25);
glVertex2f(0.74,-0.35);
glVertex2f(0.7,-0.25);
glVertex2f(0.69,-0.35);
glVertex2f(0.65,-0.25);
glVertex2f(0.64,-0.35);
glVertex2f(0.6,-0.25);
glVertex2f(0.59,-0.35);
glVertex2f(0.55,-0.25);
glVertex2f(0.54,-0.35);
glVertex2f(0.5,-0.25);
glVertex2f(0.49,-0.35);
glVertex2f(0.45,-0.25);
glVertex2f(0.44,-0.35);
glVertex2f(0.4,-0.25);
glVertex2f(0.39,-0.35);
glVertex2f(0.35,-0.25);
glVertex2f(0.34,-0.35);
glVertex2f(0.3,-0.25);
glVertex2f(0.29,-0.35);
glVertex2f(0.25,-0.25);
glVertex2f(0.24,-0.35);
glVertex2f(0.2,-0.25);
glVertex2f(0.19,-0.35);
glVertex2f(0.15,-0.25);
glVertex2f(0.14,-0.35);
glVertex2f(0.1,-0.25);
glVertex2f(0.09,-0.35);
glVertex2f(0.05,-0.25);
glVertex2f(0.04,-0.35);

glVertex2f(0.95,-0.55);
glVertex2f(0.94,-0.65);
glVertex2f(0.9,-0.55);
glVertex2f(0.89,-0.65);
 glVertex2f(0.85,-0.55);
glVertex2f(0.84,-0.65);
glVertex2f(0.8,-0.55);
glVertex2f(0.79,-0.65);
glVertex2f(0.75,-0.55);
glVertex2f(0.74,-0.65);
glVertex2f(0.7,-0.55);
glVertex2f(0.69,-0.65);
glVertex2f(0.65,-0.55);
glVertex2f(0.64,-0.65);
glVertex2f(0.6,-0.55);
glVertex2f(0.59,-0.65);
glVertex2f(0.55,-0.55);
glVertex2f(0.54,-0.65);
glVertex2f(0.5,-0.55);
glVertex2f(0.49,-0.65);
glVertex2f(0.45,-0.55);
glVertex2f(0.44,-0.65);
glVertex2f(0.4,-0.55);
glVertex2f(0.39,-0.65);
glVertex2f(0.35,-0.55);
glVertex2f(0.34,-0.65);
glVertex2f(0.3,-0.55);
glVertex2f(0.29,-0.65);
glVertex2f(0.25,-0.55);
glVertex2f(0.24,-0.65);
glVertex2f(0.2,-0.55);
glVertex2f(0.19,-0.65);
glVertex2f(0.15,-0.55);
glVertex2f(0.14,-0.65);
glVertex2f(0.1,-0.55);
glVertex2f(0.09,-0.65);
glVertex2f(0.05,-0.55);
glVertex2f(0.04,-0.65);

glVertex2f(0.95,-0.85);
glVertex2f(0.94,-0.95);
glVertex2f(0.9,-0.85);
glVertex2f(0.89,-0.95);
 glVertex2f(0.85,-0.85);
glVertex2f(0.84,-0.95);
glVertex2f(0.8,-0.85);
glVertex2f(0.79,-0.95);
glVertex2f(0.75,-0.85);
glVertex2f(0.74,-0.95);
glVertex2f(0.7,-0.85);
glVertex2f(0.69,-0.95);
glVertex2f(0.65,-0.85);
glVertex2f(0.64,-0.95);
glVertex2f(0.6,-0.85);
glVertex2f(0.59,-0.95);
glVertex2f(0.55,-0.85);
glVertex2f(0.54,-0.95);
glVertex2f(0.5,-0.85);
glVertex2f(0.49,-0.95);
glVertex2f(0.45,-0.85);
glVertex2f(0.44,-0.95);
glVertex2f(0.4,-0.85);
glVertex2f(0.39,-0.95);
glVertex2f(0.35,-0.85);
glVertex2f(0.34,-0.95);
glVertex2f(0.3,-0.85);
glVertex2f(0.29,-0.95);
glVertex2f(0.25,-0.85);
glVertex2f(0.24,-0.95);
glVertex2f(0.2,-0.85);
glVertex2f(0.19,-0.95);
glVertex2f(0.15,-0.85);
glVertex2f(0.14,-0.95);
glVertex2f(0.1,-0.85);
glVertex2f(0.09,-0.95);
glVertex2f(0.05,-0.85);
glVertex2f(0.04,-0.95);
glEnd();
glPopMatrix();

 glFlush();
}

//----------End Rain-------------
void Demorain(int c)
{
    glutDisplayFunc(rain);
    //glutPostRedisplay();
}


void night()
{
 glClear(GL_COLOR_BUFFER_BIT);

 glBegin(GL_QUADS);           //road
 glColor3ub(84, 84, 84);
 glVertex2f(-1.0,-1.0);
 glVertex2f(1.0,-1.0);
 glVertex2f(1.0,-0.4);
 glVertex2f(-1.0,-0.4);
 glEnd();
 glLineWidth(20);
 glBegin(GL_LINES);   //white
 glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-1.0);
 glVertex2f(-0.8,-1.0);
glVertex2f(-0.6,-1.0);
 glVertex2f(-0.4,-1.0);
 glVertex2f(-0.2,-1.0);
 glVertex2f(0.0,-1.0);
  glVertex2f(0.2,-1.0);
 glVertex2f(0.4,-1.0);
 glVertex2f(0.6,-1.0);
 glVertex2f(0.8,-1.0);
 glEnd();
 glLineWidth(20);
 glBegin(GL_LINES);//black
 glColor3ub(10, 10, 10);
 glVertex2f(-0.8,-1.0);
 glVertex2f(-0.6,-1.0);
 glVertex2f(-0.4,-1.0);
 glVertex2f(-0.2,-1.0);
 glVertex2f(0.0,-1.0);
 glVertex2f(0.2,-1.0);
 glVertex2f(0.4,-1.0);
 glVertex2f(0.6,-1.0);
 glVertex2f(0.8,-1.0);
 glVertex2f(1.0,-1.0);
 glEnd();
     glLineWidth(40);
  glBegin(GL_LINES);   //white
  glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-0.4);
 glVertex2f(-0.8,-0.4);
glVertex2f(-0.6,-0.4);
 glVertex2f(-0.4,-0.4);
 glVertex2f(-0.2,-0.4);
 glVertex2f(0.0,-0.4);
  glVertex2f(0.2,-0.4);
 glVertex2f(0.4,-0.4);
 glVertex2f(0.6,-0.4);
 glVertex2f(0.8,-0.4);
 glEnd();
 glLineWidth(40);
 glBegin(GL_LINES);//black
 glColor3ub(10, 10, 10);
 glVertex2f(-0.8,-0.4);
 glVertex2f(-0.6,-0.4);
 glVertex2f(-0.4,-0.4);
 glVertex2f(-0.2,-0.4);
 glVertex2f(0.0,-0.4);
 glVertex2f(0.2,-0.4);
 glVertex2f(0.4,-0.4);
 glVertex2f(0.6,-0.4);
 glVertex2f(0.8,-0.4);
 glVertex2f(1.0,-0.4);
 glEnd();
 glLineWidth(5);
  glBegin(GL_LINES);   //road div
  glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-0.7);
 glVertex2f(-0.8,-0.7);
 glVertex2f(-0.6,-0.7);
 glVertex2f(-0.4,-0.7);
 glVertex2f(-0.2,-0.7);
 glVertex2f(0.0,-0.7);
 glVertex2f(0.2,-0.7);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.6,-0.7);
 glVertex2f(0.8,-0.7);
 glVertex2f(1.0,-0.7);
 glEnd();
 glBegin(GL_QUADS);           //river 168, 216, 240
 glColor3ub(168, 216, 240);
 glVertex2f(-1.0,-0.4);
 glVertex2f(1.0,-0.4);
 glVertex2f(1.0,0.1);
 glVertex2f(-1.0,0.1);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub(3,0,46 );        //sky

 glVertex2f(-1.0,0.1);
 glVertex2f(1.0,0.1);

 glVertex2f(1.0,1.0);
 glVertex2f(-1.0,1.0);
 glEnd();
  glBegin(GL_LINES);
  glColor3ub(115, 115, 115);
  glVertex2f(-1.0,0.1);
  glVertex2f(1.0,0.1);
  glEnd();

  glPointSize(3);//star
  glBegin(GL_POINTS);
  glColor3f(1.0,1.0,1.0);
  glVertex2f(-0.9,0.9);
  glVertex2f(-0.85,0.85);
   glVertex2f(-0.8,0.75);
  glVertex2f(-0.75,0.85);
  glVertex2f(-0.78,0.75);
   glVertex2f(-0.65,0.75);
    glVertex2f(-0.6,0.9);
  glVertex2f(-0.55,0.85);
  glVertex2f(-0.45,0.85);
  glVertex2f(-0.38,0.75);
   glVertex2f(-0.2,0.9);
  glVertex2f(-0.15,0.85);
  glVertex2f(-0.1,0.85);
  glVertex2f(-0.0,0.75);
    glVertex2f(-0.7,0.9);
  glVertex2f(-0.3,0.85);
  glVertex2f(-0.48,0.85);
  glVertex2f(-0.25,0.75);
 glVertex2f(-0.32,0.75);
  glVertex2f(-0.18,0.75);

  glVertex2f(0.32,0.75);
  glVertex2f(0.18,0.75);
   glVertex2f(0.9,0.9);
  glVertex2f(0.85,0.85);
  glVertex2f(0.75,0.85);
  glVertex2f(0.78,0.75);
    glVertex2f(0.6,0.9);
  glVertex2f(0.55,0.85);
  glVertex2f(0.45,0.85);
  glVertex2f(0.38,0.75);
   glVertex2f(0.2,0.9);
  glVertex2f(0.15,0.85);
  glVertex2f(0.1,0.85);
  glVertex2f(0.0,0.75);
    glVertex2f(0.7,0.9);
  glVertex2f(0.3,0.85);
  glVertex2f(0.48,0.85);
  glVertex2f(0.25,0.75);
  glEnd();

  glBegin(GL_QUADS);           //building
 glColor3ub(0, 16, 140);
 glVertex2f(-1.0,0.1);
 glVertex2f(-0.88,0.1);
 glVertex2f(-0.88,0.3);
 glVertex2f(-1.0,0.3);
   glVertex2f(-0.88,0.1);
 glVertex2f(-0.865,0.1);
 glVertex2f(-0.865,0.25);
 glVertex2f(-0.88,0.3);
 glEnd();
 glBegin(GL_QUADS);           //building2
 glColor3ub(90, 184, 64);
 glVertex2f(-0.73,0.1);
 glVertex2f(-0.85,0.1);
 glVertex2f(-0.85,0.4);
 glVertex2f(-0.73,0.4);
    glVertex2f(-0.73,0.1);
 glVertex2f(-0.71,0.1);
 glVertex2f(-0.71,0.35);
 glVertex2f(-0.73,0.4);
 glEnd();
glBegin(GL_QUADS);           //building3
 glColor3ub(96, 166, 141);
 glVertex2f(-0.7,0.1);
 glVertex2f(-0.58,0.1);
 glVertex2f(-0.58,0.45);
 glVertex2f(-0.7,0.45);
   glVertex2f(-0.58,0.1);
 glVertex2f(-0.57,0.1);
 glVertex2f(-0.57,0.4);
 glVertex2f(-0.58,0.45);
 glEnd();
  glBegin(GL_QUADS);           //building4
 glColor3ub(46, 8, 92);
 glVertex2f(-0.56,0.1);
 glVertex2f(-0.44,0.1);
 glVertex2f(-0.44,0.33);
 glVertex2f(-0.56,0.33);
   glVertex2f(-0.44,0.1);
 glVertex2f(-0.43,0.1);
 glVertex2f(-0.43,0.3);
 glVertex2f(-0.44,0.33);
 glEnd();
 glBegin(GL_QUADS);           //building5
 glColor3ub(242, 189, 10);
 glVertex2f(-0.41,0.1);
 glVertex2f(-0.29,0.1);
 glVertex2f(-0.29,0.55);
 glVertex2f(-0.41,0.55);
  glVertex2f(-0.29,0.1);
 glVertex2f(-0.28,0.1);
 glVertex2f(-0.28,0.5);
 glVertex2f(-0.29,0.55);
 glEnd();
 glBegin(GL_QUADS);           //building6
 glColor3ub(138, 42, 4);
 glVertex2f(-0.27,0.1);
 glVertex2f(-0.15,0.1);
 glVertex2f(-0.15,0.45);
 glVertex2f(-0.27,0.45);
  glVertex2f(-0.15,0.1);
 glVertex2f(-0.14,0.1);
 glVertex2f(-0.14,0.4);
 glVertex2f(-0.15,0.45);
 glEnd();

 glBegin(GL_QUADS);           //building7
 glColor3ub(131, 0, 189);
 glVertex2f(-0.13,0.1);
 glVertex2f(-0.01,0.1);
 glVertex2f(-0.01,0.3);
 glVertex2f(-0.13,0.3);
  glVertex2f(-0.01,0.1);
 glVertex2f(-0.0,0.1);
 glVertex2f(-0.0,0.25);
 glVertex2f(-0.01,0.3);
 glEnd();

 glBegin(GL_QUADS);           //building8
 glColor3ub(94, 90, 92);
 glVertex2f(0.01,0.1);
 glVertex2f(0.13,0.1);
 glVertex2f(0.13,0.4);
 glVertex2f(0.01,0.4);
  glVertex2f(0.13,0.1);
 glVertex2f(0.14,0.1);
 glVertex2f(0.14,0.35);
 glVertex2f(0.13,0.4);
 glEnd();

 glBegin(GL_QUADS);           //building9
 glColor3ub(212, 23, 111);
 glVertex2f(0.15,0.1);
 glVertex2f(0.27,0.1);
 glVertex2f(0.27,0.5);
 glVertex2f(0.15,0.5);
  glVertex2f(0.27,0.1);
 glVertex2f(0.28,0.1);
 glVertex2f(0.28,0.45);
 glVertex2f(0.27,0.5);
 glEnd();

 glBegin(GL_QUADS);           //building10
 glColor3ub(17, 142, 184);
 glVertex2f(0.29,0.1);
 glVertex2f(0.41,0.1);
 glVertex2f(0.41,0.55);
 glVertex2f(0.29,0.55);
  glVertex2f(0.41,0.1);
 glVertex2f(0.42,0.1);
 glVertex2f(0.42,0.5);
 glVertex2f(0.41,0.55);
 glEnd();

  glBegin(GL_QUADS);           //building11
 glColor3ub(140, 82, 0);
 glVertex2f(0.43,0.1);
 glVertex2f(0.55,0.1);
 glVertex2f(0.55,0.33);
 glVertex2f(0.43,0.33);
  glVertex2f(0.55,0.1);
 glVertex2f(0.56,0.1);
 glVertex2f(0.56,0.3);
 glVertex2f(0.55,0.33);
 glEnd();

 glBegin(GL_QUADS);           //building12
 glColor3ub(94, 90, 92);
 glVertex2f(0.57,0.1);
 glVertex2f(0.69,0.1);
 glVertex2f(0.69,0.5);
 glVertex2f(0.57,0.5);
  glVertex2f(0.69,0.1);
 glVertex2f(0.7,0.1);
 glVertex2f(0.7,0.45);
 glVertex2f(0.69,0.5);
 glEnd();

  glBegin(GL_QUADS);           //building13
 glColor3ub(125, 6, 6);
 glVertex2f(0.71,0.1);
 glVertex2f(0.83,0.1);
 glVertex2f(0.83,0.4);
 glVertex2f(0.71,0.4);
  glVertex2f(0.83,0.1);
 glVertex2f(0.84,0.1);
 glVertex2f(0.84,0.35);
 glVertex2f(0.83,0.4);
 glEnd();

 glBegin(GL_QUADS);           //building14
 glColor3ub(153, 105, 0);
 glVertex2f(0.85,0.1);
 glVertex2f(0.97,0.1);
 glVertex2f(0.97,0.6);
 glVertex2f(0.85,0.6);
  glVertex2f(0.97,0.1);
 glVertex2f(0.98,0.1);
 glVertex2f(0.98,0.55);
 glVertex2f(0.97,0.6);
 glEnd();
 glPointSize(30);
 glBegin(GL_POINTS);
 glColor3ub(227, 212, 129);//255, 236, 173  227, 212, 129 240, 255, 77
 glVertex2f(-0.97,0.2);////building1
 glVertex2f(-0.92,0.2);
 glVertex2f(-0.82,0.3);////building2
 glVertex2f(-0.77,0.3);
 glVertex2f(-0.82,0.2);////building2
 glVertex2f(-0.77,0.2);
  glVertex2f(-0.67,0.35);////building3
 glVertex2f(-0.62,0.35);
   glVertex2f(-0.67,0.22);////building3
 glVertex2f(-0.62,0.22);
  glVertex2f(-0.53,0.27);////building4
 glVertex2f(-0.48,0.27);
 glVertex2f(-0.53,0.18);////building4
 glVertex2f(-0.48,0.18);
  glVertex2f(-0.38,0.47);////building5
 glVertex2f(-0.33,0.47);
 glVertex2f(-0.38,0.36);////building5
 glVertex2f(-0.33,0.36);
 glVertex2f(-0.38,0.24);////building5
 glVertex2f(-0.33,0.24);
  glVertex2f(-0.24,0.35);////building6
 glVertex2f(-0.19,0.35);
 glVertex2f(-0.24,0.25);////building6
 glVertex2f(-0.19,0.25);
  glVertex2f(-0.1,0.2);////building7
 glVertex2f(-0.05,0.2);
   glVertex2f(0.04,0.3);////building8
 glVertex2f(0.09,0.3);
 glVertex2f(0.04,0.2);////building8
 glVertex2f(0.09,0.2);
 glVertex2f(0.18,0.4);////building9
 glVertex2f(0.23,0.4);
  glVertex2f(0.18,0.3);////building9
 glVertex2f(0.23,0.3);
 glVertex2f(0.18,0.2);////building9
 glVertex2f(0.23,0.2);
  glVertex2f(0.32,0.45);////building10
 glVertex2f(0.37,0.45);
 glVertex2f(0.32,0.35);////building10
 glVertex2f(0.37,0.35);
 glVertex2f(0.32,0.25);////building10
 glVertex2f(0.37,0.25);
  glVertex2f(0.46,0.27);////building11
 glVertex2f(0.51,0.27);
 glVertex2f(0.46,0.18);////building11
 glVertex2f(0.51,0.18);
  glVertex2f(0.6,0.4);////building12
 glVertex2f(0.65,0.4);
 glVertex2f(0.6,0.3);////building12
 glVertex2f(0.65,0.3);
 glVertex2f(0.6,0.2);////building12
 glVertex2f(0.65,0.2);
 glVertex2f(0.74,0.3);////building13
 glVertex2f(0.79,0.3);
 glVertex2f(0.74,0.2);////building13
 glVertex2f(0.79,0.2);
 glVertex2f(0.88,0.5);////building14
 glVertex2f(0.93,0.5);
 glVertex2f(0.88,0.4);////building14
 glVertex2f(0.93,0.4);
 glVertex2f(0.88,0.3);////building14
 glVertex2f(0.93,0.3);
 glVertex2f(0.88,0.2);////building14
 glVertex2f(0.93,0.2);
  glEnd();

  glPushMatrix();
glTranslatef(position5,0.0f, 0.0f);
  glBegin(GL_QUADS);//ship2
  glColor3ub(156, 156, 156);
  glVertex2f(0.6,-0.05);
  glVertex2f(0.8,-0.05);
  glVertex2f(0.8,0.1);
  glVertex2f(0.5,0.1);
  glEnd();

  glBegin(GL_QUADS);//ship2floor1
  glColor3ub(30, 124, 133);
  glVertex2f(0.78,0.1);
  glVertex2f(0.78,0.18);
  glVertex2f(0.6,0.18);
  glVertex2f(0.55,0.1);
  glEnd();

   glBegin(GL_QUADS);//ship2floor2
  glColor3ub(30, 64, 133);
  glVertex2f(0.75,0.18);
  glVertex2f(0.75,0.25);
  glVertex2f(0.66,0.25);
  glVertex2f(0.62,0.18);
  glEnd();

    glPointSize(20);
glBegin(GL_POINTS);//ship2 window
 glColor3ub(227, 212, 129);
 glVertex2f(0.72,0.14);
 glVertex2f(0.65,0.14);
 glVertex2f(0.69,0.21);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);
  glBegin(GL_QUADS);//ship1
  glColor3ub(156, 156, 156);
  glVertex2f(-0.8,-0.2);
  glVertex2f(-0.4,-0.2);
  glVertex2f(-0.25,-0.02);
  glVertex2f(-0.8,-0.02);
  glEnd();

   glBegin(GL_QUADS);//shipfloor1
  glColor3ub(79, 78, 78);
  glVertex2f(-0.78,-0.02);
  glVertex2f(-0.4,-0.02);
  glVertex2f(-0.45,0.07);
  glVertex2f(-0.78,0.07);
  glEnd();

  glBegin(GL_QUADS);//shipfloor2
  glColor3ub(30, 124, 133);
  glVertex2f(-0.75,0.07);
  glVertex2f(-0.5,0.07);
  glVertex2f(-0.55,0.15);
  glVertex2f(-0.75,0.15);
  glEnd();

  glBegin(GL_QUADS);//shipfloor3
  glColor3ub(30, 64, 133);
  glVertex2f(-0.72,0.15);
  glVertex2f(-0.58,0.15);
  glVertex2f(-0.63,0.22);
  glVertex2f(-0.72,0.22);
  glEnd();

  glPointSize(20);
glBegin(GL_POINTS);//ship window
 glColor3ub(227, 212, 129);
 glVertex2f(-0.7,0.025);
 glVertex2f(-0.6,0.025);
glVertex2f(-0.5,0.025);

glVertex2f(-0.68,0.11);
 glVertex2f(-0.6,0.11);
glVertex2f(-0.67,0.185);
// glVertex2f(-0.7,0.025);
glEnd();//end ship
glPopMatrix();

   glLineWidth(10);//lamp
  glBegin(GL_LINES);
  glColor3ub(18, 18, 18);
  glVertex2f(0.6,-0.4);//lampstand1
  glVertex2f(0.6,-0.15);
   glVertex2f(0.0,-0.4);//lampstand2
  glVertex2f(0.0,-0.15);

  glVertex2f(-0.6,-0.4);//lampstand3
  glVertex2f(-0.6,-0.15);
  glEnd();

glLineWidth(5);//lampbulb
  glBegin(GL_LINES);
  glColor3ub(18, 18, 18);
  glVertex2f(0.72,-0.25);
  glVertex2f(0.48,-0.25);
  glVertex2f(0.72,-0.25);
  glVertex2f(0.72,-0.2);

  glVertex2f(0.48,-0.25);
  glVertex2f(0.48,-0.2);

  glVertex2f(-0.12,-0.25);//lamp2
  glVertex2f(0.12,-0.25);
  glVertex2f(-0.12,-0.25);
  glVertex2f(-0.12,-0.2);
  glVertex2f(0.12,-0.25);
  glVertex2f(0.12,-0.2);

  glVertex2f(-0.72,-0.25);//lamp3
  glVertex2f(-0.48,-0.25);
  glVertex2f(-0.72,-0.25);
  glVertex2f(-0.72,-0.2);

  glVertex2f(-0.48,-0.25);
  glVertex2f(-0.48,-0.2);
  glEnd();

  glEnable(GL_LIGHTING);
  GLfloat global_ambient[] = {4.9,3.9,0.0, 0.1};
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
  int l;//lampmidbulb2
GLfloat m1=0.6f; GLfloat m2 =-0.1f; GLfloat radi1 =0.06f;
int triangleAmount1 = 20;
GLfloat twicePi1 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m1, m2);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           m1+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   m2 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();
glDisable(GL_LIGHTING);

  int l1;//lampbulb1
GLfloat m3=0.72f; GLfloat m4 =-0.17f; GLfloat radi2 =0.04f;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(m3, m4);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m3+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m4 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


GLfloat m5=0.48f; GLfloat m6 =-0.17f;//lampbulb3
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(m5, m6);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m5+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m6 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}

glEnd();

glEnable(GL_LIGHTING);
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
GLfloat m11=0.0f; GLfloat m12 =-0.1f; //lampmidbulb2
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m11, m12);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           m11+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   m12 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();
glDisable(GL_LIGHTING);

GLfloat m31=-0.12f; GLfloat m41=-0.17f; //lampbulb1

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(m31, m41);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m31+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m41 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat m32=0.12f; GLfloat m42=-0.17f; //lampbulb2

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(m32, m42);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m32+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m42 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

glEnable(GL_LIGHTING);

  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);

GLfloat mm=-0.6f; GLfloat mm2 =-0.1f; //lampleftbulb2

glBegin(GL_TRIANGLE_FAN);
glColor3f(1,0,0);
glVertex2f(mm, mm2);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           mm+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   mm2 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();
glDisable(GL_LIGHTING);


GLfloat mm3=-0.72f; GLfloat mm4 =-0.17f;//lampleftbulb1

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(mm3, mm4);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           mm3+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   mm4 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat mm5=-0.48f; GLfloat mm6 =-0.17f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 244, 84);
glVertex2f(mm5, mm6);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           mm5+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   mm6 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}

glEnd();





GLfloat s1=-0.85f; GLfloat s2 =0.8f;GLfloat radi3 =0.08f;//moon
glBegin(GL_TRIANGLE_FAN);
glColor3ub(252, 252, 255);
glVertex2f(s1, s2);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           s1+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   s2 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

//glLoadIdentity();
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
GLfloat c1=-0.8f; GLfloat c2 =0.8f; //cloud

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c1, c2);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c1+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c2 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c12=-0.7f; GLfloat c22 =0.85f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c12, c22);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c12+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c22 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c13=-0.72f; GLfloat c23 =0.7f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c13, c23);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c13+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c23 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c14=-0.62f; GLfloat c24 =0.8f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c14, c24);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c14+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c24 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c15=-0.85f; GLfloat c25 =0.7f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c15, c25);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c15+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c25 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();
glPopMatrix();
glLoadIdentity();

glPushMatrix();
glTranslatef(position9,0.0f, 0.0f);
glTranslatef(1.2,0.0,0.0);//Cloud 2

glBegin(GL_TRIANGLE_FAN);//cloud 2
glColor3ub(255, 255, 255);
glVertex2f(c1, c2);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c1+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c2 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c12, c22);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c12+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c22 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c13, c23);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c13+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c23 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c14, c24);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c14+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c24 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c15, c25);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c15+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c25 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();
glPopMatrix();
glLoadIdentity();

glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_POLYGON);//Private Car
    glColor3ub(18, 54, 128);
      glVertex2f(-0.95,-0.45);
    glVertex2f(-0.95,-0.58);
    glVertex2f(-0.46,-0.58);
     glVertex2f(-0.46,-0.49);
       glVertex2f(-0.52,-0.45);

     glEnd();

//glLoadIdentity();

//glTranslatef(-0.45,0.05,0);
glBegin(GL_QUADS);
 glColor3ub(232, 23, 93);
 glVertex2f(-0.86,-0.45);
 glVertex2f(-0.79,-0.37);
 glVertex2f(-0.67,-0.37);
 glVertex2f(-0.59,-0.45);
 glEnd();
//glLoadIdentity();
int j;
GLfloat a=-0.84f; GLfloat b =-0.58f;GLfloat radi =0.05f;

int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(a, b);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           a+ (radi * cos(j *  twicePi/ triangleAmount)),
   b + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

GLfloat c=-0.57f; GLfloat d =-0.58f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(c, d);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           c+ (radi * cos(j *  twicePi/ triangleAmount)),
   d + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glPointSize(7);
glBegin(GL_POINTS);//private car light
 glColor3ub(237, 229, 185);
 glVertex2f(-0.46,-0.56);

glEnd();

glPointSize(28);
glBegin(GL_POINTS);//private car window
 glColor3ub(227, 212, 129);
 glVertex2f(-0.77,-0.41);
 glVertex2f(-0.69,-0.41);

glEnd();//Private Car end
glPopMatrix();

 glLoadIdentity();


glPushMatrix();
glTranslatef(position6,0.0f, 0.0f);
glBegin(GL_QUADS);//Plane
    glColor3ub(20,97,23);//body
      glVertex2f(0.22,0.76);
      glVertex2f(0.62,0.76);

    glVertex2f(0.62,0.82);
    glVertex2f(0.28,0.82);
glColor3ub(163,2,2);
         glVertex2f(0.6,0.82);//back body
         glVertex2f(0.62,0.76);
         glVertex2f(0.7,0.88);
       glVertex2f(0.66,0.88);

        glVertex2f(0.38,0.82);//wing1
        glVertex2f(0.46,0.9);
       glVertex2f(0.51,0.9);
         glVertex2f(0.43,0.82);


      glVertex2f(0.38,0.76);//wing2
        glVertex2f(0.44,0.64);
       glVertex2f(0.48,0.64);
         glVertex2f(0.42,0.76);


     glEnd();


glPointSize(15);
glBegin(GL_POINTS);//plane window
 glColor3ub(227, 212, 129);
  glVertex2f(0.3,0.79);
 glVertex2f(0.38,0.79);
 glVertex2f(0.46,0.79);
 glVertex2f(0.54,0.79);

glEnd();//End Plane
glPopMatrix();

 glFlush();
}


//------------------------------End night---------------=-

void Demonight(int a)
{
    glutDisplayFunc(night);

}
void day()
{
 glClear(GL_COLOR_BUFFER_BIT);

 glBegin(GL_QUADS);           //road
 glColor3ub(84, 84, 84);
 glVertex2f(-1.0,-1.0);
 glVertex2f(1.0,-1.0);
 glVertex2f(1.0,-0.4);
 glVertex2f(-1.0,-0.4);
 glEnd();
 glLineWidth(20);
 glBegin(GL_LINES);   //white
 glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-1.0);
 glVertex2f(-0.8,-1.0);
glVertex2f(-0.6,-1.0);
 glVertex2f(-0.4,-1.0);
 glVertex2f(-0.2,-1.0);
 glVertex2f(0.0,-1.0);
  glVertex2f(0.2,-1.0);
 glVertex2f(0.4,-1.0);
 glVertex2f(0.6,-1.0);
 glVertex2f(0.8,-1.0);
 glEnd();
 glLineWidth(20);
 glBegin(GL_LINES);//black
 glColor3ub(10, 10, 10);
 glVertex2f(-0.8,-1.0);
 glVertex2f(-0.6,-1.0);
 glVertex2f(-0.4,-1.0);
 glVertex2f(-0.2,-1.0);
 glVertex2f(0.0,-1.0);
 glVertex2f(0.2,-1.0);
 glVertex2f(0.4,-1.0);
 glVertex2f(0.6,-1.0);
 glVertex2f(0.8,-1.0);
 glVertex2f(1.0,-1.0);
 glEnd();
     glLineWidth(40);
  glBegin(GL_LINES);   //white
  glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-0.4);
 glVertex2f(-0.8,-0.4);
glVertex2f(-0.6,-0.4);
 glVertex2f(-0.4,-0.4);
 glVertex2f(-0.2,-0.4);
 glVertex2f(0.0,-0.4);
  glVertex2f(0.2,-0.4);
 glVertex2f(0.4,-0.4);
 glVertex2f(0.6,-0.4);
 glVertex2f(0.8,-0.4);
 glEnd();
 glLineWidth(40);
 glBegin(GL_LINES);//black
 glColor3ub(10, 10, 10);
 glVertex2f(-0.8,-0.4);
 glVertex2f(-0.6,-0.4);
 glVertex2f(-0.4,-0.4);
 glVertex2f(-0.2,-0.4);
 glVertex2f(0.0,-0.4);
 glVertex2f(0.2,-0.4);
 glVertex2f(0.4,-0.4);
 glVertex2f(0.6,-0.4);
 glVertex2f(0.8,-0.4);
 glVertex2f(1.0,-0.4);
 glEnd();
 glLineWidth(5);
  glBegin(GL_LINES);   //road div
  glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-0.7);
 glVertex2f(-0.8,-0.7);
 glVertex2f(-0.6,-0.7);
 glVertex2f(-0.4,-0.7);
 glVertex2f(-0.2,-0.7);
 glVertex2f(0.0,-0.7);
 glVertex2f(0.2,-0.7);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.6,-0.7);
 glVertex2f(0.8,-0.7);
 glVertex2f(1.0,-0.7);
 glEnd();
 glBegin(GL_QUADS);           //river
 glColor3ub(168, 216, 240);
 glVertex2f(-1.0,-0.4);
 glVertex2f(1.0,-0.4);
 glVertex2f(1.0,0.1);
 glVertex2f(-1.0,0.1);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub(252, 255, 255);        //sky

 glVertex2f(-1.0,0.1);
 glVertex2f(1.0,0.1);
 glColor3ub(27, 160, 247);
 glVertex2f(1.0,1.0);
 glVertex2f(-1.0,1.0);
 glEnd();
  glBegin(GL_LINES);
  glColor3ub(115, 115, 115);
  glVertex2f(-1.0,0.1);
  glVertex2f(1.0,0.1);
  glEnd();
  glBegin(GL_QUADS);           //building
 glColor3ub(0, 16, 140);
 glVertex2f(-1.0,0.1);
 glVertex2f(-0.88,0.1);
 glVertex2f(-0.88,0.3);
 glVertex2f(-1.0,0.3);
   glVertex2f(-0.88,0.1);
 glVertex2f(-0.865,0.1);
 glVertex2f(-0.865,0.25);
 glVertex2f(-0.88,0.3);
 glEnd();
 glBegin(GL_QUADS);           //building2
 glColor3ub(90, 184, 64);
 glVertex2f(-0.73,0.1);
 glVertex2f(-0.85,0.1);
 glVertex2f(-0.85,0.4);
 glVertex2f(-0.73,0.4);
    glVertex2f(-0.73,0.1);
 glVertex2f(-0.71,0.1);
 glVertex2f(-0.71,0.35);
 glVertex2f(-0.73,0.4);
 glEnd();
glBegin(GL_QUADS);           //building3
 glColor3ub(96, 166, 141);
 glVertex2f(-0.7,0.1);
 glVertex2f(-0.58,0.1);
 glVertex2f(-0.58,0.45);
 glVertex2f(-0.7,0.45);
   glVertex2f(-0.58,0.1);
 glVertex2f(-0.57,0.1);
 glVertex2f(-0.57,0.4);
 glVertex2f(-0.58,0.45);
 glEnd();
  glBegin(GL_QUADS);           //building4
 glColor3ub(199, 181, 121);
 glVertex2f(-0.56,0.1);
 glVertex2f(-0.44,0.1);
 glVertex2f(-0.44,0.33);
 glVertex2f(-0.56,0.33);
   glVertex2f(-0.44,0.1);
 glVertex2f(-0.43,0.1);
 glVertex2f(-0.43,0.3);
 glVertex2f(-0.44,0.33);
 glEnd();
 glBegin(GL_QUADS);           //building5
 glColor3ub(242, 189, 10);
 glVertex2f(-0.41,0.1);
 glVertex2f(-0.29,0.1);
 glVertex2f(-0.29,0.55);
 glVertex2f(-0.41,0.55);
  glVertex2f(-0.29,0.1);
 glVertex2f(-0.28,0.1);
 glVertex2f(-0.28,0.5);
 glVertex2f(-0.29,0.55);
 glEnd();
 glBegin(GL_QUADS);           //building6
 glColor3ub(138, 42, 4);
 glVertex2f(-0.27,0.1);
 glVertex2f(-0.15,0.1);
 glVertex2f(-0.15,0.45);
 glVertex2f(-0.27,0.45);
  glVertex2f(-0.15,0.1);
 glVertex2f(-0.14,0.1);
 glVertex2f(-0.14,0.4);
 glVertex2f(-0.15,0.45);
 glEnd();

 glBegin(GL_QUADS);           //building7
 glColor3ub(131, 0, 189);
 glVertex2f(-0.13,0.1);
 glVertex2f(-0.01,0.1);
 glVertex2f(-0.01,0.3);
 glVertex2f(-0.13,0.3);
  glVertex2f(-0.01,0.1);
 glVertex2f(-0.0,0.1);
 glVertex2f(-0.0,0.25);
 glVertex2f(-0.01,0.3);
 glEnd();

 glBegin(GL_QUADS);           //building8
 glColor3ub(196, 194, 195);
 glVertex2f(0.01,0.1);
 glVertex2f(0.13,0.1);
 glVertex2f(0.13,0.4);
 glVertex2f(0.01,0.4);
  glVertex2f(0.13,0.1);
 glVertex2f(0.14,0.1);
 glVertex2f(0.14,0.35);
 glVertex2f(0.13,0.4);
 glEnd();

 glBegin(GL_QUADS);           //building9
 glColor3ub(212, 23, 111);
 glVertex2f(0.15,0.1);
 glVertex2f(0.27,0.1);
 glVertex2f(0.27,0.5);
 glVertex2f(0.15,0.5);
  glVertex2f(0.27,0.1);
 glVertex2f(0.28,0.1);
 glVertex2f(0.28,0.45);
 glVertex2f(0.27,0.5);
 glEnd();

 glBegin(GL_QUADS);           //building10
 glColor3ub(17, 142, 184);
 glVertex2f(0.29,0.1);
 glVertex2f(0.41,0.1);
 glVertex2f(0.41,0.55);
 glVertex2f(0.29,0.55);
  glVertex2f(0.41,0.1);
 glVertex2f(0.42,0.1);
 glVertex2f(0.42,0.5);
 glVertex2f(0.41,0.55);
 glEnd();

  glBegin(GL_QUADS);           //building11
 glColor3ub(140, 82, 0);
 glVertex2f(0.43,0.1);
 glVertex2f(0.55,0.1);
 glVertex2f(0.55,0.33);
 glVertex2f(0.43,0.33);
  glVertex2f(0.55,0.1);
 glVertex2f(0.56,0.1);
 glVertex2f(0.56,0.3);
 glVertex2f(0.55,0.33);
 glEnd();

 glBegin(GL_QUADS);           //building12
 glColor3ub(191, 190, 189);
 glVertex2f(0.57,0.1);
 glVertex2f(0.69,0.1);
 glVertex2f(0.69,0.5);
 glVertex2f(0.57,0.5);
  glVertex2f(0.69,0.1);
 glVertex2f(0.7,0.1);
 glVertex2f(0.7,0.45);
 glVertex2f(0.69,0.5);
 glEnd();

  glBegin(GL_QUADS);           //building13
 glColor3ub(255, 133, 190);
 glVertex2f(0.71,0.1);
 glVertex2f(0.83,0.1);
 glVertex2f(0.83,0.4);
 glVertex2f(0.71,0.4);
  glVertex2f(0.83,0.1);
 glVertex2f(0.84,0.1);
 glVertex2f(0.84,0.35);
 glVertex2f(0.83,0.4);
 glEnd();

 glBegin(GL_QUADS);           //building14
 glColor3ub(153, 105, 0);
 glVertex2f(0.85,0.1);
 glVertex2f(0.97,0.1);
 glVertex2f(0.97,0.6);
 glVertex2f(0.85,0.6);
  glVertex2f(0.97,0.1);
 glVertex2f(0.98,0.1);
 glVertex2f(0.98,0.55);
 glVertex2f(0.97,0.6);
 glEnd();
 glPointSize(30);
 glBegin(GL_POINTS);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(-0.97,0.2);////building1
 glVertex2f(-0.92,0.2);
 glVertex2f(-0.82,0.3);////building2
 glVertex2f(-0.77,0.3);
 glVertex2f(-0.82,0.2);////building2
 glVertex2f(-0.77,0.2);
  glVertex2f(-0.67,0.35);////building3
 glVertex2f(-0.62,0.35);
   glVertex2f(-0.67,0.22);////building3
 glVertex2f(-0.62,0.22);
  glVertex2f(-0.53,0.27);////building4
 glVertex2f(-0.48,0.27);
 glVertex2f(-0.53,0.18);////building4
 glVertex2f(-0.48,0.18);
  glVertex2f(-0.38,0.47);////building5
 glVertex2f(-0.33,0.47);
 glVertex2f(-0.38,0.36);////building5
 glVertex2f(-0.33,0.36);
 glVertex2f(-0.38,0.24);////building5
 glVertex2f(-0.33,0.24);
  glVertex2f(-0.24,0.35);////building6
 glVertex2f(-0.19,0.35);
 glVertex2f(-0.24,0.25);////building6
 glVertex2f(-0.19,0.25);
  glVertex2f(-0.1,0.2);////building7
 glVertex2f(-0.05,0.2);
   glVertex2f(0.04,0.3);////building8
 glVertex2f(0.09,0.3);
 glVertex2f(0.04,0.2);////building8
 glVertex2f(0.09,0.2);
 glVertex2f(0.18,0.4);////building9
 glVertex2f(0.23,0.4);
  glVertex2f(0.18,0.3);////building9
 glVertex2f(0.23,0.3);
 glVertex2f(0.18,0.2);////building9
 glVertex2f(0.23,0.2);
  glVertex2f(0.32,0.45);////building10
 glVertex2f(0.37,0.45);
 glVertex2f(0.32,0.35);////building10
 glVertex2f(0.37,0.35);
 glVertex2f(0.32,0.25);////building10
 glVertex2f(0.37,0.25);
  glVertex2f(0.46,0.27);////building11
 glVertex2f(0.51,0.27);
 glVertex2f(0.46,0.18);////building11
 glVertex2f(0.51,0.18);
  glVertex2f(0.6,0.4);////building12
 glVertex2f(0.65,0.4);
 glVertex2f(0.6,0.3);////building12
 glVertex2f(0.65,0.3);
 glVertex2f(0.6,0.2);////building12
 glVertex2f(0.65,0.2);
 glVertex2f(0.74,0.3);////building13
 glVertex2f(0.79,0.3);
 glVertex2f(0.74,0.2);////building13
 glVertex2f(0.79,0.2);
 glVertex2f(0.88,0.5);////building14
 glVertex2f(0.93,0.5);
 glVertex2f(0.88,0.4);////building14
 glVertex2f(0.93,0.4);
 glVertex2f(0.88,0.3);////building14
 glVertex2f(0.93,0.3);
 glVertex2f(0.88,0.2);////building14
 glVertex2f(0.93,0.2);
  glEnd();

  //glLoadIdentity();
glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);
  glBegin(GL_QUADS);//ship1
  glColor3ub(156, 156, 156);
  glVertex2f(-0.8,-0.2);
  glVertex2f(-0.4,-0.2);
  glVertex2f(-0.25,-0.02);
  glVertex2f(-0.8,-0.02);
  glEnd();

   glBegin(GL_QUADS);//shipfloor1
  glColor3ub(79, 78, 78);
  glVertex2f(-0.78,-0.02);
  glVertex2f(-0.4,-0.02);
  glVertex2f(-0.45,0.07);
  glVertex2f(-0.78,0.07);
  glEnd();

  glBegin(GL_QUADS);//shipfloor2
  glColor3ub(30, 124, 133);
  glVertex2f(-0.75,0.07);
  glVertex2f(-0.5,0.07);
  glVertex2f(-0.55,0.15);
  glVertex2f(-0.75,0.15);
  glEnd();

  glBegin(GL_QUADS);//shipfloor3
  glColor3ub(30, 64, 133);
  glVertex2f(-0.72,0.15);
  glVertex2f(-0.58,0.15);
  glVertex2f(-0.63,0.22);
  glVertex2f(-0.72,0.22);
  glEnd();

  glPointSize(20);
glBegin(GL_POINTS);//ship window
 glColor3ub(225, 225, 230);
 glVertex2f(-0.7,0.025);
 glVertex2f(-0.6,0.025);
glVertex2f(-0.5,0.025);

glVertex2f(-0.68,0.11);
 glVertex2f(-0.6,0.11);
glVertex2f(-0.67,0.185);
// glVertex2f(-0.7,0.025);
glEnd();//end ship
glPopMatrix();

   glLineWidth(10);//lamp
  glBegin(GL_LINES);
  glColor3ub(18, 18, 18);
  glVertex2f(0.6,-0.4);//lampstand1
  glVertex2f(0.6,-0.15);
   glVertex2f(0.0,-0.4);//lampstand2
  glVertex2f(0.0,-0.15);

  glVertex2f(-0.6,-0.4);//lampstand3
  glVertex2f(-0.6,-0.15);
  glEnd();

glLineWidth(5);//lampbulb
  glBegin(GL_LINES);
  glColor3ub(18, 18, 18);
  glVertex2f(0.72,-0.25);
  glVertex2f(0.48,-0.25);
  glVertex2f(0.72,-0.25);
  glVertex2f(0.72,-0.2);

  glVertex2f(0.48,-0.25);
  glVertex2f(0.48,-0.2);

  glVertex2f(-0.12,-0.25);//lamp2
  glVertex2f(0.12,-0.25);
  glVertex2f(-0.12,-0.25);
  glVertex2f(-0.12,-0.2);
  glVertex2f(0.12,-0.25);
  glVertex2f(0.12,-0.2);

  glVertex2f(-0.72,-0.25);//lamp3
  glVertex2f(-0.48,-0.25);
  glVertex2f(-0.72,-0.25);
  glVertex2f(-0.72,-0.2);

  glVertex2f(-0.48,-0.25);
  glVertex2f(-0.48,-0.2);
  glEnd();

  int l;//lampbulb2
GLfloat m1=0.6f; GLfloat m2 =-0.1f; GLfloat radi1 =0.06f;
int triangleAmount1 = 20;
GLfloat twicePi1 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m1, m2);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           m1+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   m2 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();

  int l1;//lampbulb1
GLfloat m3=0.72f; GLfloat m4 =-0.17f; GLfloat radi2 =0.04f;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m3, m4);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m3+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m4 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


GLfloat m5=0.48f; GLfloat m6 =-0.17f;//lampbulb3
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m5, m6);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m5+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m6 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}

glEnd();
GLfloat m11=0.0f; GLfloat m12 =-0.1f; //lampmidbulb2
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m11, m12);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           m11+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   m12 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat m31=-0.12f; GLfloat m41=-0.17f; //lampbulb1

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m31, m41);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m31+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m41 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat m32=0.12f; GLfloat m42=-0.17f; //lampbulb2

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m32, m42);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m32+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m42 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


GLfloat mm=-0.6f; GLfloat mm2 =-0.1f; //lampleftbulb2

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(mm, mm2);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           mm+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   mm2 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();


GLfloat mm3=-0.72f; GLfloat mm4 =-0.17f;//lampleftbulb1

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(mm3, mm4);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           mm3+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   mm4 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat mm5=-0.48f; GLfloat mm6 =-0.17f;//lampleftbulb3
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(mm5, mm6);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           mm5+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   mm6 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}

glEnd();



GLfloat s1=-0.05f; GLfloat s2 =0.7f;GLfloat radi3 =0.08f;//sun
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 226, 5);
glVertex2f(s1, s2);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           s1+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   s2 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

//glLoadIdentity();
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
GLfloat c1=-0.8f; GLfloat c2 =0.8f; //cloud

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c1, c2);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c1+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c2 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c12=-0.7f; GLfloat c22 =0.85f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c12, c22);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c12+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c22 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c13=-0.72f; GLfloat c23 =0.7f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c13, c23);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c13+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c23 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c14=-0.62f; GLfloat c24 =0.8f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c14, c24);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c14+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c24 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c15=-0.85f; GLfloat c25 =0.7f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c15, c25);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c15+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c25 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();
glPopMatrix();

glLoadIdentity();
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_POLYGON);//Private Car
    glColor3ub(18, 54, 128);
      glVertex2f(-0.95,-0.45);
    glVertex2f(-0.95,-0.58);
    glVertex2f(-0.46,-0.58);
     glVertex2f(-0.46,-0.49);
       glVertex2f(-0.52,-0.45);

     glEnd();


glBegin(GL_QUADS);
 glColor3ub(232, 23, 93);
 glVertex2f(-0.86,-0.45);
 glVertex2f(-0.79,-0.37);
 glVertex2f(-0.67,-0.37);
 glVertex2f(-0.59,-0.45);
 glEnd();
//glLoadIdentity();
int j;
GLfloat a=-0.84f; GLfloat b =-0.58f;GLfloat radi =0.05f;

int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(a, b);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           a+ (radi * cos(j *  twicePi/ triangleAmount)),
   b + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

GLfloat c=-0.57f; GLfloat d =-0.58f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(c, d);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           c+ (radi * cos(j *  twicePi/ triangleAmount)),
   d + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glPointSize(7);
glBegin(GL_POINTS);//private car light
 glColor3ub(237, 229, 185);
 glVertex2f(-0.46,-0.56);

glEnd();

glPointSize(28);
glBegin(GL_POINTS);//private car window
 glColor3ub(225, 225, 230);
 glVertex2f(-0.77,-0.41);
 glVertex2f(-0.69,-0.41);

glEnd();//Private Car end
glPopMatrix();

 glLoadIdentity();
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
  glBegin(GL_QUADS);           //Micro Car
 glColor3ub(97, 34, 110);
 glVertex2f(0.3,-0.7);
 glVertex2f(0.3,-0.85);
 glVertex2f(0.7,-0.85);
 glVertex2f(0.7,-0.7);
  glVertex2f(0.4,-0.64);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.7,-0.7);
 glVertex2f(0.7,-0.64);
 glEnd();

glBegin(GL_QUADS);
 glColor3ub(148, 16, 146);
 glVertex2f(0.4,-0.6);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.7,-0.7);
 glVertex2f(0.7,-0.6);
 glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(163, 193, 227);
glVertex2f(0.4,-0.6);
glVertex2f(0.3,-0.7);
glVertex2f(0.4,-0.7);

glEnd();
glPointSize(7);
glBegin(GL_POINTS);
 glColor3ub(247, 246, 218);
 glVertex2f(0.295,-0.82);

glEnd();

GLfloat r=0.4f; GLfloat s =-0.85f;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(r, s);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           r+ (radi * cos(j *  twicePi/ triangleAmount)),
   s + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x=0.6f; GLfloat y =-0.85f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(x, y);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           x+ (radi * cos(j *  twicePi/ triangleAmount)),
   y + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();
glPointSize(30);
glBegin(GL_POINTS);//Micro window
 glColor3ub(227, 212, 129);
 glVertex2f(0.45,-0.65);
 glVertex2f(0.55,-0.65);
 glVertex2f(0.65,-0.65);
glEnd();//End Micro
glPopMatrix();


glutTimerFunc(5000, Demonight, 0);
 glFlush();

}

void DemoDay(int a)
{
   glutDisplayFunc(day);

}






void morning()
{
 glClear(GL_COLOR_BUFFER_BIT);



 glBegin(GL_QUADS);           //road
 glColor3ub(84, 84, 84);
 glVertex2f(-1.0,-1.0);
 glVertex2f(1.0,-1.0);
 glVertex2f(1.0,-0.4);
 glVertex2f(-1.0,-0.4);
 glEnd();
 glLineWidth(20);
 glBegin(GL_LINES);   //white
 glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-1.0);
 glVertex2f(-0.8,-1.0);
glVertex2f(-0.6,-1.0);
 glVertex2f(-0.4,-1.0);
 glVertex2f(-0.2,-1.0);
 glVertex2f(0.0,-1.0);
  glVertex2f(0.2,-1.0);
 glVertex2f(0.4,-1.0);
 glVertex2f(0.6,-1.0);
 glVertex2f(0.8,-1.0);
 glEnd();
 glLineWidth(20);
 glBegin(GL_LINES);//black
 glColor3ub(10, 10, 10);
 glVertex2f(-0.8,-1.0);
 glVertex2f(-0.6,-1.0);
 glVertex2f(-0.4,-1.0);
 glVertex2f(-0.2,-1.0);
 glVertex2f(0.0,-1.0);
 glVertex2f(0.2,-1.0);
 glVertex2f(0.4,-1.0);
 glVertex2f(0.6,-1.0);
 glVertex2f(0.8,-1.0);
 glVertex2f(1.0,-1.0);
 glEnd();
     glLineWidth(40);
  glBegin(GL_LINES);   //white
  glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-0.4);
 glVertex2f(-0.8,-0.4);
glVertex2f(-0.6,-0.4);
 glVertex2f(-0.4,-0.4);
 glVertex2f(-0.2,-0.4);
 glVertex2f(0.0,-0.4);
  glVertex2f(0.2,-0.4);
 glVertex2f(0.4,-0.4);
 glVertex2f(0.6,-0.4);
 glVertex2f(0.8,-0.4);
 glEnd();
 glLineWidth(40);
 glBegin(GL_LINES);//black
 glColor3ub(10, 10, 10);
 glVertex2f(-0.8,-0.4);
 glVertex2f(-0.6,-0.4);
 glVertex2f(-0.4,-0.4);
 glVertex2f(-0.2,-0.4);
 glVertex2f(0.0,-0.4);
 glVertex2f(0.2,-0.4);
 glVertex2f(0.4,-0.4);
 glVertex2f(0.6,-0.4);
 glVertex2f(0.8,-0.4);
 glVertex2f(1.0,-0.4);
 glEnd();
 glLineWidth(5);
  glBegin(GL_LINES);   //road div
  glColor3ub(252, 250, 250);
 glVertex2f(-1.0,-0.7);
 glVertex2f(-0.8,-0.7);
 glVertex2f(-0.6,-0.7);
 glVertex2f(-0.4,-0.7);
 glVertex2f(-0.2,-0.7);
 glVertex2f(0.0,-0.7);
 glVertex2f(0.2,-0.7);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.6,-0.7);
 glVertex2f(0.8,-0.7);
 glVertex2f(1.0,-0.7);
 glEnd();
 glBegin(GL_QUADS);           //river
 glColor3ub(168, 216, 240);
 glVertex2f(-1.0,-0.4);
 glVertex2f(1.0,-0.4);
 glVertex2f(1.0,0.1);
 glVertex2f(-1.0,0.1);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub(252, 163, 61);        //sky

 glVertex2f(-1.0,0.1);
 glVertex2f(1.0,0.1);
 glColor3ub(0,133,255); // 27, 160, 247  114, 184, 232
 glVertex2f(1.0,1.0);
 glVertex2f(-1.0,1.0);
 glEnd();
  glBegin(GL_LINES);
  glColor3ub(115, 115, 115);
  glVertex2f(-1.0,0.1);
  glVertex2f(1.0,0.1);
  glEnd();

   glPushMatrix();
glTranslatef(0.0f, position8,0.0f);
  int l1;
  GLfloat s1=-0.05f; GLfloat s2 =0.35f;GLfloat radi3 =0.08f;//sun
  int triangleAmount1 = 20;
GLfloat twicePi1 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,103,0);//255, 226, 5
glVertex2f(s1, s2);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           s1+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   s2 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();
glPopMatrix();


  glBegin(GL_QUADS);           //building
 glColor3ub(0, 16, 140);
 glVertex2f(-1.0,0.1);
 glVertex2f(-0.88,0.1);
 glVertex2f(-0.88,0.3);
 glVertex2f(-1.0,0.3);
   glVertex2f(-0.88,0.1);
 glVertex2f(-0.865,0.1);
 glVertex2f(-0.865,0.25);
 glVertex2f(-0.88,0.3);
 glEnd();
 glBegin(GL_QUADS);           //building2
 glColor3ub(90, 184, 64);
 glVertex2f(-0.73,0.1);
 glVertex2f(-0.85,0.1);
 glVertex2f(-0.85,0.4);
 glVertex2f(-0.73,0.4);
    glVertex2f(-0.73,0.1);
 glVertex2f(-0.71,0.1);
 glVertex2f(-0.71,0.35);
 glVertex2f(-0.73,0.4);
 glEnd();
glBegin(GL_QUADS);           //building3
 glColor3ub(96, 166, 141);
 glVertex2f(-0.7,0.1);
 glVertex2f(-0.58,0.1);
 glVertex2f(-0.58,0.45);
 glVertex2f(-0.7,0.45);
   glVertex2f(-0.58,0.1);
 glVertex2f(-0.57,0.1);
 glVertex2f(-0.57,0.4);
 glVertex2f(-0.58,0.45);
 glEnd();
  glBegin(GL_QUADS);           //building4
 glColor3ub(199, 181, 121);
 glVertex2f(-0.56,0.1);
 glVertex2f(-0.44,0.1);
 glVertex2f(-0.44,0.33);
 glVertex2f(-0.56,0.33);
   glVertex2f(-0.44,0.1);
 glVertex2f(-0.43,0.1);
 glVertex2f(-0.43,0.3);
 glVertex2f(-0.44,0.33);
 glEnd();
 glBegin(GL_QUADS);           //building5
 glColor3ub(242, 189, 10);
 glVertex2f(-0.41,0.1);
 glVertex2f(-0.29,0.1);
 glVertex2f(-0.29,0.55);
 glVertex2f(-0.41,0.55);
  glVertex2f(-0.29,0.1);
 glVertex2f(-0.28,0.1);
 glVertex2f(-0.28,0.5);
 glVertex2f(-0.29,0.55);
 glEnd();
 glBegin(GL_QUADS);           //building6
 glColor3ub(138, 42, 4);
 glVertex2f(-0.27,0.1);
 glVertex2f(-0.15,0.1);
 glVertex2f(-0.15,0.45);
 glVertex2f(-0.27,0.45);
  glVertex2f(-0.15,0.1);
 glVertex2f(-0.14,0.1);
 glVertex2f(-0.14,0.4);
 glVertex2f(-0.15,0.45);
 glEnd();

 glBegin(GL_QUADS);           //building7
 glColor3ub(131, 0, 189);
 glVertex2f(-0.13,0.1);
 glVertex2f(-0.01,0.1);
 glVertex2f(-0.01,0.3);
 glVertex2f(-0.13,0.3);
  glVertex2f(-0.01,0.1);
 glVertex2f(-0.0,0.1);
 glVertex2f(-0.0,0.25);
 glVertex2f(-0.01,0.3);
 glEnd();

 glBegin(GL_QUADS);           //building8
 glColor3ub(196, 194, 195);
 glVertex2f(0.01,0.1);
 glVertex2f(0.13,0.1);
 glVertex2f(0.13,0.4);
 glVertex2f(0.01,0.4);
  glVertex2f(0.13,0.1);
 glVertex2f(0.14,0.1);
 glVertex2f(0.14,0.35);
 glVertex2f(0.13,0.4);
 glEnd();

 glBegin(GL_QUADS);           //building9
 glColor3ub(212, 23, 111);
 glVertex2f(0.15,0.1);
 glVertex2f(0.27,0.1);
 glVertex2f(0.27,0.5);
 glVertex2f(0.15,0.5);
  glVertex2f(0.27,0.1);
 glVertex2f(0.28,0.1);
 glVertex2f(0.28,0.45);
 glVertex2f(0.27,0.5);
 glEnd();

 glBegin(GL_QUADS);           //building10
 glColor3ub(17, 142, 184);
 glVertex2f(0.29,0.1);
 glVertex2f(0.41,0.1);
 glVertex2f(0.41,0.55);
 glVertex2f(0.29,0.55);
  glVertex2f(0.41,0.1);
 glVertex2f(0.42,0.1);
 glVertex2f(0.42,0.5);
 glVertex2f(0.41,0.55);
 glEnd();

  glBegin(GL_QUADS);           //building11
 glColor3ub(140, 82, 0);
 glVertex2f(0.43,0.1);
 glVertex2f(0.55,0.1);
 glVertex2f(0.55,0.33);
 glVertex2f(0.43,0.33);
  glVertex2f(0.55,0.1);
 glVertex2f(0.56,0.1);
 glVertex2f(0.56,0.3);
 glVertex2f(0.55,0.33);
 glEnd();

 glBegin(GL_QUADS);           //building12
 glColor3ub(191, 190, 189);
 glVertex2f(0.57,0.1);
 glVertex2f(0.69,0.1);
 glVertex2f(0.69,0.5);
 glVertex2f(0.57,0.5);
  glVertex2f(0.69,0.1);
 glVertex2f(0.7,0.1);
 glVertex2f(0.7,0.45);
 glVertex2f(0.69,0.5);
 glEnd();

  glBegin(GL_QUADS);           //building13
 glColor3ub(255, 133, 190);
 glVertex2f(0.71,0.1);
 glVertex2f(0.83,0.1);
 glVertex2f(0.83,0.4);
 glVertex2f(0.71,0.4);
  glVertex2f(0.83,0.1);
 glVertex2f(0.84,0.1);
 glVertex2f(0.84,0.35);
 glVertex2f(0.83,0.4);
 glEnd();

 glBegin(GL_QUADS);           //building14
 glColor3ub(153, 105, 0);
 glVertex2f(0.85,0.1);
 glVertex2f(0.97,0.1);
 glVertex2f(0.97,0.6);
 glVertex2f(0.85,0.6);
  glVertex2f(0.97,0.1);
 glVertex2f(0.98,0.1);
 glVertex2f(0.98,0.55);
 glVertex2f(0.97,0.6);
 glEnd();
 glPointSize(30);
 glBegin(GL_POINTS);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(-0.97,0.2);////building1
 glVertex2f(-0.92,0.2);
 glVertex2f(-0.82,0.3);////building2
 glVertex2f(-0.77,0.3);
 glVertex2f(-0.82,0.2);////building2
 glVertex2f(-0.77,0.2);
  glVertex2f(-0.67,0.35);////building3
 glVertex2f(-0.62,0.35);
   glVertex2f(-0.67,0.22);////building3
 glVertex2f(-0.62,0.22);
  glVertex2f(-0.53,0.27);////building4
 glVertex2f(-0.48,0.27);
 glVertex2f(-0.53,0.18);////building4
 glVertex2f(-0.48,0.18);
  glVertex2f(-0.38,0.47);////building5
 glVertex2f(-0.33,0.47);
 glVertex2f(-0.38,0.36);////building5
 glVertex2f(-0.33,0.36);
 glVertex2f(-0.38,0.24);////building5
 glVertex2f(-0.33,0.24);
  glVertex2f(-0.24,0.35);////building6
 glVertex2f(-0.19,0.35);
 glVertex2f(-0.24,0.25);////building6
 glVertex2f(-0.19,0.25);
  glVertex2f(-0.1,0.2);////building7
 glVertex2f(-0.05,0.2);
   glVertex2f(0.04,0.3);////building8
 glVertex2f(0.09,0.3);
 glVertex2f(0.04,0.2);////building8
 glVertex2f(0.09,0.2);
 glVertex2f(0.18,0.4);////building9
 glVertex2f(0.23,0.4);
  glVertex2f(0.18,0.3);////building9
 glVertex2f(0.23,0.3);
 glVertex2f(0.18,0.2);////building9
 glVertex2f(0.23,0.2);
  glVertex2f(0.32,0.45);////building10
 glVertex2f(0.37,0.45);
 glVertex2f(0.32,0.35);////building10
 glVertex2f(0.37,0.35);
 glVertex2f(0.32,0.25);////building10
 glVertex2f(0.37,0.25);
  glVertex2f(0.46,0.27);////building11
 glVertex2f(0.51,0.27);
 glVertex2f(0.46,0.18);////building11
 glVertex2f(0.51,0.18);
  glVertex2f(0.6,0.4);////building12
 glVertex2f(0.65,0.4);
 glVertex2f(0.6,0.3);////building12
 glVertex2f(0.65,0.3);
 glVertex2f(0.6,0.2);////building12
 glVertex2f(0.65,0.2);
 glVertex2f(0.74,0.3);////building13
 glVertex2f(0.79,0.3);
 glVertex2f(0.74,0.2);////building13
 glVertex2f(0.79,0.2);
 glVertex2f(0.88,0.5);////building14
 glVertex2f(0.93,0.5);
 glVertex2f(0.88,0.4);////building14
 glVertex2f(0.93,0.4);
 glVertex2f(0.88,0.3);////building14
 glVertex2f(0.93,0.3);
 glVertex2f(0.88,0.2);////building14
 glVertex2f(0.93,0.2);
  glEnd();

  glPushMatrix();
glTranslatef(position5,0.0f, 0.0f);
  glBegin(GL_QUADS);//ship2
  glColor3ub(156, 156, 156);
  glVertex2f(0.6,-0.05);
  glVertex2f(0.8,-0.05);
  glVertex2f(0.8,0.1);
  glVertex2f(0.5,0.1);
  glEnd();

  glBegin(GL_QUADS);//ship2floor1
  glColor3ub(30, 124, 133);
  glVertex2f(0.78,0.1);
  glVertex2f(0.78,0.18);
  glVertex2f(0.6,0.18);
  glVertex2f(0.55,0.1);
  glEnd();

   glBegin(GL_QUADS);//ship2floor2
  glColor3ub(30, 64, 133);
  glVertex2f(0.75,0.18);
  glVertex2f(0.75,0.25);
  glVertex2f(0.66,0.25);
  glVertex2f(0.62,0.18);
  glEnd();

    glPointSize(20);
glBegin(GL_POINTS);//ship2 window
 glColor3ub(225, 225, 230);
 glVertex2f(0.72,0.14);
 glVertex2f(0.65,0.14);
 glVertex2f(0.69,0.21);
glEnd();
glPopMatrix();
  //glLoadIdentity();
glPushMatrix();//ship1
glTranslatef(position4,0.0f, 0.0f);
  glBegin(GL_QUADS);
  glColor3ub(156, 156, 156);
  glVertex2f(-0.8,-0.2);
  glVertex2f(-0.4,-0.2);
  glVertex2f(-0.25,-0.02);
  glVertex2f(-0.8,-0.02);
  glEnd();

   glBegin(GL_QUADS);//shipfloor1
  glColor3ub(79, 78, 78);
  glVertex2f(-0.78,-0.02);
  glVertex2f(-0.4,-0.02);
  glVertex2f(-0.45,0.07);
  glVertex2f(-0.78,0.07);
  glEnd();

  glBegin(GL_QUADS);//shipfloor2
  glColor3ub(30, 124, 133);
  glVertex2f(-0.75,0.07);
  glVertex2f(-0.5,0.07);
  glVertex2f(-0.55,0.15);
  glVertex2f(-0.75,0.15);
  glEnd();

  glBegin(GL_QUADS);//shipfloor3
  glColor3ub(30, 64, 133);
  glVertex2f(-0.72,0.15);
  glVertex2f(-0.58,0.15);
  glVertex2f(-0.63,0.22);
  glVertex2f(-0.72,0.22);
  glEnd();

  glPointSize(20);
glBegin(GL_POINTS);//ship window
 glColor3ub(225, 225, 230);
 glVertex2f(-0.7,0.025);
 glVertex2f(-0.6,0.025);
glVertex2f(-0.5,0.025);

glVertex2f(-0.68,0.11);
 glVertex2f(-0.6,0.11);
glVertex2f(-0.67,0.185);
// glVertex2f(-0.7,0.025);
glEnd();//end ship

glPopMatrix();


   glLineWidth(10);//lamp
  glBegin(GL_LINES);
  glColor3ub(18, 18, 18);
  glVertex2f(0.6,-0.4);//lampstand1
  glVertex2f(0.6,-0.15);
   glVertex2f(0.0,-0.4);//lampstand2
  glVertex2f(0.0,-0.15);

  glVertex2f(-0.6,-0.4);//lampstand3
  glVertex2f(-0.6,-0.15);
  glEnd();

glLineWidth(5);//lampbulb
  glBegin(GL_LINES);
  glColor3ub(18, 18, 18);
  glVertex2f(0.72,-0.25);
  glVertex2f(0.48,-0.25);
  glVertex2f(0.72,-0.25);
  glVertex2f(0.72,-0.2);

  glVertex2f(0.48,-0.25);
  glVertex2f(0.48,-0.2);

  glVertex2f(-0.12,-0.25);//lamp2
  glVertex2f(0.12,-0.25);
  glVertex2f(-0.12,-0.25);
  glVertex2f(-0.12,-0.2);
  glVertex2f(0.12,-0.25);
  glVertex2f(0.12,-0.2);

  glVertex2f(-0.72,-0.25);//lamp3
  glVertex2f(-0.48,-0.25);
  glVertex2f(-0.72,-0.25);
  glVertex2f(-0.72,-0.2);

  glVertex2f(-0.48,-0.25);
  glVertex2f(-0.48,-0.2);
  glEnd();

  int l;//lampbulb2
GLfloat m1=0.6f; GLfloat m2 =-0.1f; GLfloat radi1 =0.06f;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m1, m2);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           m1+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   m2 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();

//  int l1;//lampbulb1
GLfloat m3=0.72f; GLfloat m4 =-0.17f; GLfloat radi2 =0.04f;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m3, m4);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m3+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m4 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


GLfloat m5=0.48f; GLfloat m6 =-0.17f;//lampbulb3
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m5, m6);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m5+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m6 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}

glEnd();
GLfloat m11=0.0f; GLfloat m12 =-0.1f; //lampmidbulb2
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m11, m12);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           m11+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   m12 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat m31=-0.12f; GLfloat m41=-0.17f; //lampbulb1

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m31, m41);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m31+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m41 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat m32=0.12f; GLfloat m42=-0.17f; //lampbulb2

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(m32, m42);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           m32+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   m42 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();


GLfloat mm=-0.6f; GLfloat mm2 =-0.1f; //lampleftbulb2

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(mm, mm2);
for(l = 0; l <= triangleAmount1;l++) {
glVertex2f(
           mm+ (radi1 * cos(l *  twicePi1/ triangleAmount1)),
   mm2 + (radi1 * sin(l * twicePi1 / triangleAmount1))
);
}
glEnd();


GLfloat mm3=-0.72f; GLfloat mm4 =-0.17f;//lampleftbulb1

glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(mm3, mm4);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           mm3+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   mm4 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat mm5=-0.48f; GLfloat mm6 =-0.17f;//lampleftbulb3
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 240, 240);
glVertex2f(mm5, mm6);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           mm5+ (radi2 * cos(l1 *  twicePi1/ triangleAmount1)),
   mm6 + (radi2 * sin(l1 * twicePi1 / triangleAmount1))
);
}

glEnd();


//glLoadIdentity();
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
GLfloat c1=-0.8f; GLfloat c2 =0.8f; //cloud

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c1, c2);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c1+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c2 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c12=-0.7f; GLfloat c22 =0.85f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c12, c22);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c12+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c22 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c13=-0.72f; GLfloat c23 =0.7f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c13, c23);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c13+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c23 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c14=-0.62f; GLfloat c24 =0.8f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c14, c24);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c14+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c24 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

GLfloat c15=-0.85f; GLfloat c25 =0.7f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c15, c25);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c15+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c25 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();
glPopMatrix();

glLoadIdentity();
glPushMatrix();
glTranslatef(position9,0.0f, 0.0f);
glTranslatef(1.2,0.0,0.0);//Cloud 2

glBegin(GL_TRIANGLE_FAN);//cloud 2
glColor3ub(255, 255, 255);
glVertex2f(c1, c2);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c1+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c2 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

//GLfloat c12=-0.7f; GLfloat c22 =0.85f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c12, c22);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c12+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c22 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

//GLfloat c13=-0.72f; GLfloat c23 =0.7f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c13, c23);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c13+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c23 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

//GLfloat c14=-0.62f; GLfloat c24 =0.8f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c14, c24);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c14+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c24 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();

//GLfloat c15=-0.85f; GLfloat c25 =0.7f;//cloud
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(c15, c25);
for(l1 = 0; l1 <= triangleAmount1;l1++) {
glVertex2f(
           c15+ (radi3 * cos(l1 *  twicePi1/ triangleAmount1)),
   c25 + (radi3 * sin(l1 * twicePi1 / triangleAmount1))
);
}
glEnd();
glPopMatrix();
glLoadIdentity();


glPushMatrix();// private car
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_POLYGON);//Private Car
    glColor3ub(18, 54, 128);
      glVertex2f(-0.95,-0.45);
    glVertex2f(-0.95,-0.58);
    glVertex2f(-0.46,-0.58);
     glVertex2f(-0.46,-0.49);
       glVertex2f(-0.52,-0.45);

     glEnd();


glBegin(GL_QUADS);
 glColor3ub(232, 23, 93);
 glVertex2f(-0.86,-0.45);
 glVertex2f(-0.79,-0.37);
 glVertex2f(-0.67,-0.37);
 glVertex2f(-0.59,-0.45);
 glEnd();

int j;
GLfloat a=-0.84f; GLfloat b =-0.58f;GLfloat radi =0.05f;

int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(a, b);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           a+ (radi * cos(j *  twicePi/ triangleAmount)),
   b + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

GLfloat c=-0.57f; GLfloat d =-0.58f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(c, d);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           c+ (radi * cos(j *  twicePi/ triangleAmount)),
   d + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glPointSize(7);
glBegin(GL_POINTS);//private car light
 glColor3ub(237, 229, 185);
 glVertex2f(-0.46,-0.56);

glEnd();

glPointSize(28);
glBegin(GL_POINTS);//private car window
 glColor3ub(225, 225, 230);
 glVertex2f(-0.77,-0.41);
 glVertex2f(-0.69,-0.41);

glEnd();//Private Car end
glPopMatrix();

glLoadIdentity();
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
  glBegin(GL_QUADS);           //Micro Car
 glColor3ub(97, 34, 110);
 glVertex2f(0.3,-0.7);
 glVertex2f(0.3,-0.85);
 glVertex2f(0.7,-0.85);
 glVertex2f(0.7,-0.7);
  glVertex2f(0.4,-0.64);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.7,-0.7);
 glVertex2f(0.7,-0.64);
 glEnd();

glBegin(GL_QUADS);
 glColor3ub(148, 16, 146);
 glVertex2f(0.4,-0.6);
 glVertex2f(0.4,-0.7);
 glVertex2f(0.7,-0.7);
 glVertex2f(0.7,-0.6);
 glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(163, 193, 227);
glVertex2f(0.4,-0.6);
glVertex2f(0.3,-0.7);
glVertex2f(0.4,-0.7);

glEnd();
glPointSize(7);
glBegin(GL_POINTS);
 glColor3ub(247, 246, 218);
 glVertex2f(0.295,-0.82);

glEnd();

GLfloat r=0.4f; GLfloat s =-0.85f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(r, s);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           r+ (radi * cos(j *  twicePi/ triangleAmount)),
   s + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x=0.6f; GLfloat y =-0.85f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(31, 31, 28);
glVertex2f(x, y);
for(j = 0; j <= triangleAmount;j++) {
glVertex2f(
           x+ (radi * cos(j *  twicePi/ triangleAmount)),
   y + (radi * sin(j * twicePi / triangleAmount))
);
}
glEnd();
glPointSize(30);
glBegin(GL_POINTS);//Micro window
 glColor3ub(227, 212, 129);
 glVertex2f(0.45,-0.65);
 glVertex2f(0.55,-0.65);
 glVertex2f(0.65,-0.65);
glEnd();//End Micro
glPopMatrix();


  glPushMatrix();
glTranslatef(position6,0.0f, 0.0f);
glBegin(GL_QUADS);//Plane
    glColor3ub(20,97,23);//body
      glVertex2f(0.22,0.76);
      glVertex2f(0.62,0.76);

    glVertex2f(0.62,0.82);
    glVertex2f(0.28,0.82);
glColor3ub(163,2,2);
         glVertex2f(0.6,0.82);//back body
         glVertex2f(0.62,0.76);
         glVertex2f(0.7,0.88);
       glVertex2f(0.66,0.88);

        glVertex2f(0.38,0.82);//wing1
        glVertex2f(0.46,0.9);
       glVertex2f(0.51,0.9);
         glVertex2f(0.43,0.82);


      glVertex2f(0.38,0.76);//wing2
        glVertex2f(0.44,0.64);
       glVertex2f(0.48,0.64);
         glVertex2f(0.42,0.76);


     glEnd();


glPointSize(15);
glBegin(GL_POINTS);//plane window
 glColor3ub(245, 240, 240);
  glVertex2f(0.3,0.79);
 glVertex2f(0.38,0.79);
 glVertex2f(0.46,0.79);
 glVertex2f(0.54,0.79);

glEnd();//End Plane
glPopMatrix();

glPushMatrix();
glTranslatef(position10,0.0f, 0.0f);
glPointSize(9);
glBegin(GL_POINTS);
 glColor3ub(250, 12, 12);
  glVertex2f(-0.8,0.55);
  glVertex2f(-0.7,0.55);
  glVertex2f(-0.75,0.5);
   glVertex2f(-0.85,0.5);
  glEnd();

  glLineWidth(5);
  glBegin(GL_LINES);
  glColor3ub(250, 12, 12);
  glVertex2f(-0.8,0.55);
  glVertex2f(-0.79,0.6);
  glVertex2f(-0.8,0.55);
  glVertex2f(-0.79,0.5);

  glVertex2f(-0.7,0.55);
  glVertex2f(-0.69,0.6);
  glVertex2f(-0.7,0.55);
  glVertex2f(-0.69,0.5);

  glVertex2f(-0.75,0.5);
  glVertex2f(-0.74,0.55);
  glVertex2f(-0.75,0.5);
  glVertex2f(-0.74,0.45);

  glVertex2f(-0.85,0.5);
  glVertex2f(-0.84,0.55);
  glVertex2f(-0.85,0.5);
  glVertex2f(-0.84,0.45);
  glEnd();
  glPopMatrix();
glutTimerFunc(5000, DemoDay, 0);

 glFlush();


}



void handlekeypress(unsigned char key,int x,int y)
{
    switch (key)
    {
    case 'r':

    glutDisplayFunc(rain);
    break;
    case 's':

    glutDisplayFunc(morning);
    break;

    glutPostRedisplay();
    }
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("City View Scenario");
	glutInitWindowSize(320, 320);

	glutDisplayFunc(morning);
	   init();
	glutTimerFunc(100, update, 0);
	   glutTimerFunc(100, update2, 0);
	   glutTimerFunc(100, update3, 0);
	   glutTimerFunc(100, update4, 0);
	   glutTimerFunc(100, update5, 0);
	   glutTimerFunc(100, update6, 0);
	   glutTimerFunc(100, update7, 0);
	  glutTimerFunc(100, update8, 0);
       glutTimerFunc(100, update9, 0);
       glutTimerFunc(100, update10, 0);


        glutKeyboardFunc(handlekeypress);
	glutMainLoop();
	return 0;
}
