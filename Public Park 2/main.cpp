#include<windows.h>
#include <GL/glut.h>


void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 35.0, 0.0, 30.0);
}

void minhajulAbedin(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window


	// Draw a couple of points

	// grass
    glColor3f(0.0f, 1.0f, 0.0f);  // green

	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(0, 30);
		glVertex2i(35, 30);
		glVertex2i(35, 0);
		glVertex2i(0, 0);

	glEnd();

    // Road
	glColor3f(0.647059f,0.164706f,0.164706f);//brown

	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(0, 2);
		glVertex2i(19, 13);
		glVertex2i(28, 14);
		glVertex2i(10, 0);
		glVertex2i(0, 0);

	glEnd();
	glColor3f(0.647059f,0.164706f,0.164706f);//brown

	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(13, 16);
		glVertex2i(23, 16);
		glVertex2i(28, 14);
		glVertex2i(19, 13);

	glEnd();
	glColor3f(0.647059f,0.164706f,0.164706f);//brown

	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(13, 16);
		glVertex2i(35, 27);
		glVertex2i(35, 22);
		glVertex2i(23, 16);

	glEnd();
	// pool
	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);

	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(26, 10);
		glVertex2i(35, 10);
		glVertex2i(35, 4);
		glVertex2i(22, 4);

	glEnd();
	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red

	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(22, 4);
		glVertex2i(35, 4);
		glVertex2i(35, 3);
		glVertex2i(22, 3);

	glEnd();

	// stairs
	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
	  glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(24, 6);
		glVertex2i(24, 9);

	glEnd();
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
     glLineWidth(3);
    glBegin(GL_LINES);
		glVertex2i(25, 7);
		glVertex2i(25, 10);

	glEnd();
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
     glLineWidth(3);
    glBegin(GL_LINES);
		glVertex2i(24, 8);
		glVertex2i(25, 9);
	glEnd();
	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
	 glLineWidth(3);
    glBegin(GL_LINES);
		glVertex2i(24, 7);
		glVertex2i(25, 8);
	glEnd();
	// trash
	glColor3f(1.0f, 0.498039f, 0.0f);//cyan

	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(15, 5);
		glVertex2i(18, 5);
		glVertex2i(17, 3);
		glVertex2i(16, 3);

	glEnd();


	// bench
    glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid

	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(5, 7);
		glVertex2i(11, 7);
		glVertex2i(12, 6);
		glVertex2i(6, 6);

	glEnd();
	glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid

	// polygon
	glBegin(GL_LINE_LOOP);
		glVertex2i(5, 9);
		glVertex2i(11, 9);
		glVertex2i(11, 7);
		glVertex2i(5, 7);

	glEnd();
	 glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid

	// polygon
	glBegin(GL_LINE_LOOP);
		glVertex2i(5, 9);
		glVertex2i(11, 9);
		glVertex2i(11, 7);
		glVertex2i(5, 7);

	glEnd();
	glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(5, 5);
		glVertex2i(5, 7);

	glEnd();
  glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(6, 4);
		glVertex2i(6, 6);

	glEnd();
	 glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(10, 5);
		glVertex2i(10, 6);

	glEnd();
   glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(12, 4);
		glVertex2i(12, 6);

	glEnd();
	 glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(5, 8);
		glVertex2i(11, 8);

	glEnd();
	// bench 2
    glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(15, 20);
		glVertex2i(20, 20);
		glVertex2i(21, 19);
		glVertex2i(16, 19);

	glEnd();
	glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid

	// polygon
	glBegin(GL_LINE_LOOP);
		glVertex2i(15, 20);
		glVertex2i(15, 22);
		glVertex2i(20, 22);
		glVertex2i(20, 20);

	glEnd();
	 glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(15, 18);
		glVertex2i(15, 20);

	glEnd();
	  glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(16, 18);
		glVertex2i(16, 19);

	glEnd();
	glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(19, 18);
		glVertex2i(19, 19);

	glEnd();
	glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(21, 18);
		glVertex2i(21, 19);

	glEnd();
	glColor3f( 0.576471f,  0.439216f,   0.858824f);//MediumOrchid
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(15, 21);
		glVertex2i(20,21);

	glEnd();


	// lamp post 1
	glColor3f(0.0f, 0.0f, 0.0f);//Black
	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(2, 11);
		glVertex2i(3, 11);
		glVertex2i(3, 3);
		glVertex2i(2, 3);

	glEnd();
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(2, 13);
		glVertex2i(3, 13);
		glVertex2i(4, 12);
		glVertex2i(3, 11);
		glVertex2i(2, 11);
		glVertex2i(1, 12);

	glEnd();

	// lamp post 2
	glColor3f(0.0f, 0.0f, 0.0f);//Black
	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(12, 16);
		glVertex2i(13, 16);
		glVertex2i(13, 9);
		glVertex2i(12, 9);

	glEnd();
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(12, 18);
		glVertex2i(13, 18);
		glVertex2i(14, 17);
		glVertex2i(13, 16);
		glVertex2i(12, 16);
		glVertex2i(11, 17);

	glEnd();
	// lamp post 3
	glColor3f(0.0f, 0.0f, 0.0f);//Black
	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(23, 27);
		glVertex2i(24, 27);
		glVertex2i(24, 21);
		glVertex2i(23, 21);

	glEnd();
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(23, 29);
		glVertex2i(24, 29);
		glVertex2i(25, 28);
		glVertex2i(24, 27);
		glVertex2i(23, 27);
		glVertex2i(22, 28);

	glEnd();
	// lamp post 4
	glColor3f(0.0f, 0.0f, 0.0f);//Black
	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(30, 21);
		glVertex2i(31, 21);
		glVertex2i(31, 16);
		glVertex2i(30, 16);

	glEnd();
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
	// polygon
	glBegin(GL_POLYGON);
		glVertex2i(30, 23);
		glVertex2i(31, 23);
		glVertex2i(32, 22);
		glVertex2i(31, 21);
		glVertex2i(30, 21);
		glVertex2i(29, 22);

	glEnd();

	// tree
	glColor3f(0.35, 0.16,0.14);
	// polygon
	glBegin(GL_POLYGON);

		glVertex2i(4, 15);
		glVertex2i(5, 16);
		glVertex2i(6, 16);
		glVertex2i(7, 15);

	glEnd();
	glColor3f(0.35, 0.16,0.14);
	// polygon
	glBegin(GL_POLYGON);

		glVertex2i(5, 16);
		glVertex2i(5, 23);
		glVertex2i(6, 23);
		glVertex2i(6, 16);

	glEnd();
	// tree head
	glColor3f( 0.184314f, 0.309804f ,0.184314f);//yellow
	// polygon
	glBegin(GL_POLYGON);


		glVertex2i(4, 22);
		glVertex2i(2, 22);
		glVertex2i(1, 23);
		glVertex2i(1, 26);
		glVertex2i(2, 28);
		glVertex2i(4, 29);
		glVertex2i(7, 29);
		glVertex2i(9, 28);
		glVertex2i(10, 26);
		glVertex2i(10, 24);
		glVertex2i(9, 22);
		glVertex2i(8, 22);
		glVertex2i(7, 23);
		glVertex2i(5, 23);
	glEnd();


    // swing
    glColor3f(1.0f, 0.25f, 0.0f);//cyan
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(13, 24);
		glVertex2i(14,28);

	glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(14, 28);
		glVertex2i(18,28);

	glEnd();
	glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(19, 24);
		glVertex2i(18,28);

	glEnd();
	glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(15, 26);
		glVertex2i(15,28);

	glEnd();
	glLineWidth(3);
    glBegin(GL_LINES);

		glVertex2i(17, 26);
		glVertex2i(17,28);

	glEnd();
	glColor3f(0.35, 0.16,0.14);
	// polygon
	glBegin(GL_POLYGON);

		glVertex2i(15, 25);
		glVertex2i(15, 26);
		glVertex2i(17, 26);
		glVertex2i(17, 25);

	glEnd();





	glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(750, 650);					// Set window size
	glutCreateWindow("171-15-8700");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(minhajulAbedin);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
