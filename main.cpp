#include<cstdio>
#include <windows.h>
#include <vector>
#include <GL/gl.h>
#include <GL/glut.h>

void PointLight(const float x, const float y, const float z,  const float amb, const float diff, const float spec);
void PointLight(const float x, const float y, const float z, const float amb, const float diff, const float spec)
{
  glEnable(GL_LIGHTING);
}

void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(38, 154, 214);
	glVertex2f(-1.0f, 0.45f);
	glVertex2f(1.0f, 0.45f);
    glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();
}
void ground()
{
    glBegin(GL_POLYGON);
	glColor3ub(100, 255, 100);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-1.0f,0.0f);
	glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, -0.03);
    glVertex2f(0.2f, -0.07);
    glVertex2f(0.3f, -0.1);//6
    glVertex2f(0.2f, -0.13);
    glVertex2f(0.1f, -0.17);
    glVertex2f(0.2f, -0.2);
    glVertex2f(0.35f, -0.23);
    glVertex2f(0.25f, -0.25);
    glVertex2f(0.18f, -0.28);//12
    glVertex2f(0.3f, -0.32);
    glVertex2f(0.2f, -0.35);
    glVertex2f(0.4f, -0.4);
    glVertex2f(0.4f, -0.6);
    glVertex2f(0.2f, -0.65);
    glVertex2f(0.3f, -0.7);
    glVertex2f(0.2f, -0.75);
    glVertex2f(0.4f, -0.8);
    glVertex2f(0.2f, -0.85);
    glVertex2f(0.35f, -0.9);
    glVertex2f(0.25f, -0.95);
    glVertex2f(0.4f, -1.0);
    glEnd();

}
void river()
{
   glBegin(GL_QUADS);
   glColor3ub(51, 204, 200);
	glVertex2f(-1.0f,0.45f);
	glVertex2f(1.0f,0.45f);
	glVertex2f(1.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);
    glEnd();
}
void hut()
{
    glBegin(GL_POLYGON);
    glColor3ub(204, 153, 100);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.18f,0.5f);
    glVertex2f(-0.58f,0.5f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(204, 153, 100);
    glVertex2f(-0.49f,0.2f);
    glVertex2f(-0.13f,0.2f);
    glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.49f,-0.2f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(204, 153, 100);
    glVertex2f(-0.58f,0.5f);
    glVertex2f(-0.63f,0.2f);
    glVertex2f(-0.61f,0.2f);
    glVertex2f(-0.61f,-0.15f);
    glVertex2f(-0.49f,-0.2f);
    glVertex2f(-0.17f,-0.2f);

    glEnd();
    glLineWidth(2);
     glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.1f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.49f,0.2f);
    glVertex2f(-0.49f,-0.2f);

    glColor3ub(0,0,0);
     glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.49f,-0.2f);

     glColor3ub(0,0,0);
     glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.13f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.58f,0.5f);

    glColor3ub(0,0,0);
    glVertex2f(-0.58f,0.5f);
    glVertex2f(-0.63f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.57f,0.445f);
    glVertex2f(-0.61f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.61f,0.2f);
    glVertex2f(-0.61f,-0.15f);

    glColor3ub(0,0,0);
    glVertex2f(-0.61f,-0.15f);
    glVertex2f(-0.49f,-0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.18f,0.5f);

    glColor3ub(0,0,0);
    glVertex2f(-0.18f,0.5f);
    glVertex2f(-0.58f,0.5f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(153, 115, 100);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.22f,0.1f);    //main door
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.35f,-0.2f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.35f,-0.2f);
    glVertex2f(-0.285f,0.1f);
    glVertex2f(-0.285f,-0.2f);
    glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(153, 115, 100);
    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.38f,0.05f); //left window
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.44f,-0.05f);
    glEnd();
     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.44f,-0.05f);
    glVertex2f(-0.38f,0.05f);
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.38f,0.05f);
    glVertex2f(-0.44f,-0.05f);
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.41f,0.05f);
    glVertex2f(-0.41f,-0.05f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(153, 115, 100);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.2f,0.05f);   //right window
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.14f,-0.05f);
    glEnd();
     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.14f,-0.05f);
    glVertex2f(-0.2f,0.05f);
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.2f,0.05f);
    glVertex2f(-0.14f,-0.05f);
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.17f,0.05f);
    glVertex2f(-0.17f,-0.05f);
    glEnd();
}
struct Point
{
    float x, y;
    unsigned char r, g, b, a;
};
std::vector< Point > points;
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(2);
    sky();

    glPushMatrix();
    glPopMatrix();
    glPushMatrix();


    glPopMatrix();

    river();
    glPushMatrix();
    glPopMatrix();
    ground();
    hut();
	glFlush();
	glutSwapBuffers();
}
void Display(void)
{
    //std::cout<<"Display 1 called"<<std::endl;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0,0,-20);

    glFlush();
    glutSwapBuffers();
}
void init(void)
{
    glClearColor( 1.0f, 1.0f, 1.0f, 1.0f);
    glClearDepth( 1.0 );
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_LIGHT0);
}
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case  'd':
	        glutDestroyWindow(1);
	        glutInitWindowSize(1240, 750);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
            glutCreateWindow("village scenario");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display);
            break;
    }
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1240, 750);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
    glutCreateWindow("village scenario");
    init();

    glutDisplayFunc(Display);
     for( size_t i = 0; i < 1000; ++i )
    {
        Point pt;
        pt.x = -50 + (rand() % 100);
        pt.y = -50 + (rand() % 100);
        pt.r = 255;
        pt.g = 255;
        pt.b = 255;
        pt.a = 255;
        points.push_back(pt);
    }
    glutKeyboardFunc(handleKeypress);
    init();
    glutMainLoop();
    return 0;
}
