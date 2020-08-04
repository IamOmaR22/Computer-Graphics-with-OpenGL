#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0.796, 0.929, 0.969, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 35.0, 0.0, 45.0);
}

void MdOmarFaruk(void)
{
	float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	// Draw a filled quadrilateral
    // First house
    glColor3f(0.933, 0.961, 0.898);
	glBegin(GL_POLYGON);
        glVertex2i(0, 30);
		glVertex2i(0, 40);
		glVertex2i(5, 44);
		glVertex2i(10, 40);
		glVertex2i(10, 30);
	glEnd();
    glColor3f(0.561, 0.051, 0.22);
    glLineWidth(5);
	glBegin(GL_LINES);
        glVertex2i(0, 40);
        glVertex2i(5, 44);
        glVertex2i(5, 44);
        glVertex2i(10, 40);
    glEnd();

    // box 1
    glColor3f(0.263, 0.404, 0.545);
	glBegin(GL_POLYGON);
        glVertex2i(1, 36);
		glVertex2i(1, 39);
		glVertex2i(4, 39);
		glVertex2i(4, 36);
	glEnd();
	glColor3f(0.933, 0.961, 0.898);
    glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2i(1, 37);
		glVertex2i(4, 37);
		glVertex2i(1, 38);
		glVertex2i(4, 38);

		glVertex2i(2, 36);
		glVertex2i(2, 39);
		glVertex2i(3, 36);
		glVertex2i(3, 39);
    glEnd();

    // box-2
    glColor3f(0.263, 0.404, 0.545);
	glBegin(GL_POLYGON);
        glVertex2i(6, 36);
		glVertex2i(6, 39);
		glVertex2i(9, 39);
		glVertex2i(9, 36);
	glEnd();
	glColor3f(0.933, 0.961, 0.898);
    glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2i(6, 37);
		glVertex2i(9, 37);
		glVertex2i(6, 38);
		glVertex2i(9, 38);

		glVertex2i(7, 36);
		glVertex2i(7, 39);
		glVertex2i(8, 36);
		glVertex2i(8, 39);
    glEnd();

    // box-3
    glColor3f(0.263, 0.404, 0.545);
	glBegin(GL_POLYGON);
        glVertex2i(1, 31);
		glVertex2i(1, 34);
		glVertex2i(4, 34);
		glVertex2i(4, 31);
	glEnd();
	glColor3f(0.933, 0.961, 0.898);
    glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2i(1, 32);
		glVertex2i(4, 32);
		glVertex2i(1, 33);
		glVertex2i(4, 33);

		glVertex2i(2, 34);
		glVertex2i(2, 31);
		glVertex2i(3, 34);
		glVertex2i(3, 31);
    glEnd();

    // box-4
    glColor3f(0.263, 0.404, 0.545);
	glBegin(GL_POLYGON);
        glVertex2i(6, 31);
		glVertex2i(6, 34);
		glVertex2i(9, 34);
		glVertex2i(9, 31);
	glEnd();
	glColor3f(0.933, 0.961, 0.898);
    glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2i(6, 32);
		glVertex2i(9, 32);
		glVertex2i(6, 33);
		glVertex2i(9, 33);

		glVertex2i(7, 31);
		glVertex2i(7, 34);
		glVertex2i(8, 31);
		glVertex2i(8, 34);
    glEnd();


    // 2ND hOUSE
    glColor3f(0.58, 0.769, 0.769);
	glBegin(GL_POLYGON);
        glVertex2i(10, 30);
		glVertex2i(10, 39);
		glVertex2i(15, 39);
		glVertex2i(15, 30);
	glEnd();
	glColor3f(0.78, 0.894, 0.812);
	glBegin(GL_POLYGON);
        glVertex2i(10, 33);
		glVertex2i(10, 34);
		glVertex2i(15, 34);
		glVertex2i(15, 33);
	glEnd();

	glColor3f(0.149, 0.161, 0.149);
    glBegin(GL_POLYGON);
        glVertex2i(11, 38);
        glVertex2i(14, 38);
        glVertex2i(14, 34);
        glVertex2i(11, 34);
    glEnd();
    glColor3f(0.933, 0.961, 0.898);
    glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2i(12, 34);
		glVertex2i(12, 38);
		glVertex2i(13, 34);
		glVertex2i(13, 38);

		glVertex2i(11, 35);
		glVertex2i(14, 35);
		glVertex2i(11, 36);
		glVertex2i(14, 36);
		glVertex2i(11, 37);
		glVertex2i(14, 37);
    glEnd();
    glColor3f(0.149, 0.161, 0.149);
    glLineWidth(5);
	glBegin(GL_LINES);
        glVertex2i(12, 30);
		glVertex2i(12, 32);
		glVertex2i(12, 32);
		glVertex2i(13, 32);
		glVertex2i(13, 32);
		glVertex2i(13, 30);
        glVertex2i(15, 38);

		glVertex2i(16, 38);
	glEnd();


	// Third house
	glColor3f(0.933, 0.961, 0.898);
	glBegin(GL_POLYGON);
        glVertex2i(16, 30);
		glVertex2i(16, 38);
		glVertex2i(19, 42);
		glVertex2i(23, 38);
		glVertex2i(23, 30);
	glEnd();
	glColor3f(0.098, 0.451, 0.576);
    glLineWidth(5);
	glBegin(GL_LINES);
        glVertex2i(16, 38);
		glVertex2i(19, 42);
		glVertex2i(19, 42);
		glVertex2i(23, 38);
	glEnd();

	glColor3f(0.278, 0.373, 0.545);
	glBegin(GL_POLYGON);
        glVertex2i(17, 31);
		glVertex2i(17, 38);
		glVertex2i(22, 38);
		glVertex2i(22, 31);
	glEnd();
	glColor3f(0.933, 0.961, 0.898);
    glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2i(18, 38);
        glVertex2i(18, 31);
        glVertex2i(19, 38);
        glVertex2i(19, 31);
        glVertex2i(20, 38);
        glVertex2i(20, 31);
        glVertex2i(21, 38);
        glVertex2i(21, 31);
        glVertex2i(22, 38);
        glVertex2i(22, 31);

        glVertex2i(17, 32);
        glVertex2i(22, 32);
        glVertex2i(17, 33);
        glVertex2i(22, 33);
        glVertex2i(17, 34);
        glVertex2i(22, 34);
        glVertex2i(17, 35);
        glVertex2i(22, 35);
        glVertex2i(17, 36);
        glVertex2i(22, 36);
        glVertex2i(17, 37);
        glVertex2i(22, 37);
        glVertex2i(17, 38);
        glVertex2i(22, 38);
    glEnd();

    glColor3f(0.098, 0.451, 0.576);
    glLineWidth(5);
	glBegin(GL_LINES);
        glVertex2i(23, 37);
		glVertex2i(25, 37);
		glVertex2i(23, 31);
		glVertex2i(25, 31);
	glEnd();

	glColor3f(0.278, 0.373, 0.545);
	glBegin(GL_POLYGON);
        glVertex2i(25, 30);
		glVertex2i(25, 42);
		glVertex2i(32, 42);
		glVertex2i(32, 30);
	glEnd();

	glColor3f(0.706, 0.824, 0.863);
	glBegin(GL_POLYGON);
        glVertex2i(25, 41);
		glVertex2i(25, 42);
		glVertex2i(32, 42);
		glVertex2i(32, 41);
	glEnd();

	glColor3f(0.157, 0.467, 0.533);
	glBegin(GL_POLYGON);
        glVertex2i(26, 30);
        glVertex2i(26, 41);
		glVertex2i(27, 41);
		glVertex2i(27, 30);
	glEnd();
	glColor3f(0.157, 0.467, 0.533);
	glBegin(GL_POLYGON);
        glVertex2i(28, 30);
        glVertex2i(28, 41);
		glVertex2i(29, 41);
		glVertex2i(29, 30);
	glEnd();
	glColor3f(0.157, 0.467, 0.533);
	glBegin(GL_POLYGON);
        glVertex2i(30, 30);
        glVertex2i(30, 41);
		glVertex2i(31, 41);
		glVertex2i(31, 30);
	glEnd();

	// Green
	glColor3f(0.533, 0.694, 0.039);
	glBegin(GL_POLYGON);
        glVertex2i(0, 28);
        glVertex2i(0, 30);
        glVertex2i(35, 30);
        glVertex2i(35, 28);
	glEnd();

	// Road
	glColor3f(0.533, 0.537, 0.51);
	glBegin(GL_POLYGON);
        glVertex2i(0, 25);
        glVertex2i(0, 28);
        glVertex2i(5, 29);
        glVertex2i(5, 26);
	glEnd();
	glBegin(GL_POLYGON);
        glVertex2i(5, 26);
        glVertex2i(5, 29);
        glVertex2i(30, 29);
        glVertex2i(30, 26);
	glEnd();
	glBegin(GL_POLYGON);
        glVertex2i(30, 26);
        glVertex2i(30, 29);
        glVertex2i(35, 28);
        glVertex2i(35, 25);
	glEnd();
	glColor3f(0.867, 0.867, 0.867);
    glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2i(1, 26);
        glVertex2i(4, 27);
        glVertex2i(1, 27);
        glVertex2i(4, 28);
        glVertex2i(5, 27);
        glVertex2i(6, 27);
        glVertex2i(7, 27);
        glVertex2i(8, 27);
        glVertex2i(9, 27);
        glVertex2i(10, 27);
        glVertex2i(11, 27);
        glVertex2i(12, 27);
        glVertex2i(13, 27);
        glVertex2i(14, 27);
        glVertex2i(15, 27);
        glVertex2i(16, 27);
        glVertex2i(17, 27);
        glVertex2i(18, 27);
        glVertex2i(19, 27);
        glVertex2i(20, 27);
        glVertex2i(21, 27);
        glVertex2i(22, 27);
        glVertex2i(23, 27);
        glVertex2i(24, 27);
        glVertex2i(25, 27);
        glVertex2i(26, 27);
        glVertex2i(27, 27);
        glVertex2i(28, 27);
        glVertex2i(29, 27);
        glVertex2i(30, 27);

        glVertex2i(31, 27);
        glVertex2i(34, 26);
        glVertex2i(31, 28);
        glVertex2i(34, 27);
        glVertex2i(5, 28);
        glVertex2i(6, 28);
        glVertex2i(7, 28);
        glVertex2i(8, 28);
        glVertex2i(9, 28);
        glVertex2i(10, 28);
        glVertex2i(11, 28);
        glVertex2i(12, 28);
        glVertex2i(13, 28);
        glVertex2i(14, 28);
        glVertex2i(15, 28);
        glVertex2i(16, 28);
        glVertex2i(17, 28);
        glVertex2i(18, 28);
        glVertex2i(19, 28);
        glVertex2i(20, 28);
        glVertex2i(21, 28);
        glVertex2i(22, 28);
        glVertex2i(23, 28);
        glVertex2i(24, 28);
        glVertex2i(25, 28);
        glVertex2i(26, 28);
        glVertex2i(27, 28);
        glVertex2i(28, 28);
        glVertex2i(29, 28);
        glVertex2i(30, 28);
	glEnd();

	// Green Whole
	glColor3f(0.482, 0.761, 0.388);
	glBegin(GL_POLYGON);
        glVertex2i(0, 25);
        glVertex2i(5, 26);
        glVertex2i(30, 26);
        glVertex2i(35, 25);
        glVertex2i(35, 0);
        glVertex2i(0, 0);
	glEnd();

    // Table and Umbrella
	glColor3f(0.718, 0.702, 0.188);
	glBegin(GL_POLYGON);
        glVertex2i(4, 12);
        glVertex2i(3, 13);
        glVertex2i(3, 15);
        glVertex2i(4, 16);
        glVertex2i(6, 16);
        glVertex2i(7, 15);
        glVertex2i(7, 13);
        glVertex2i(6, 12);
	glEnd();
	glColor3f(0.718, 0.702, 0.188);
    glLineWidth(5);
	glBegin(GL_LINES);
        glVertex2i(5, 14);
		glVertex2i(5, 22);

		glVertex2i(4, 12);
		glVertex2i(3, 10);

		glVertex2i(6, 12);
		glVertex2i(7, 10);
	glEnd();
	glColor3f(0.933, 0.91, 0.153);
	glBegin(GL_POLYGON);
        glVertex2i(5, 22);
        glVertex2i(1, 20);
        glVertex2i(2, 19);
	glEnd();
	glColor3f(0.988, 0.992, 0.933);
	glBegin(GL_POLYGON);
        glVertex2i(5, 22);
        glVertex2i(2, 19);
        glVertex2i(3, 18);
	glEnd();
	glColor3f(0.933, 0.91, 0.153);
	glBegin(GL_POLYGON);
        glVertex2i(5, 22);
        glVertex2i(3, 18);
        glVertex2i(5, 18);
	glEnd();
	glColor3f(0.988, 0.992, 0.933);
	glBegin(GL_POLYGON);
        glVertex2i(5, 22);
        glVertex2i(5, 18);
        glVertex2i(7, 18);
	glEnd();
	glColor3f(0.933, 0.91, 0.153);
	glBegin(GL_POLYGON);
        glVertex2i(5, 22);
        glVertex2i(7, 18);
        glVertex2i(8, 19);
	glEnd();
	glColor3f(0.988, 0.992, 0.933);
	glBegin(GL_POLYGON);
        glVertex2i(5, 22);
        glVertex2i(8, 19);
        glVertex2i(9, 20);
	glEnd();


	// Second Umbrella
	glColor3f(0.933, 0.91, 0.153);
	glBegin(GL_POLYGON);
        glVertex2i(13, 20);
        glVertex2i(10, 18);
        glVertex2i(11, 17);
	glEnd();
	glColor3f(0.988, 0.992, 0.933);
	glBegin(GL_POLYGON);
        glVertex2i(13, 20);
        glVertex2i(11, 17);
        glVertex2i(12, 17);
	glEnd();
	glColor3f(0.933, 0.91, 0.153);
	glBegin(GL_POLYGON);
        glVertex2i(13, 20);
        glVertex2i(12, 17);
        glVertex2i(13, 17);
	glEnd();
	glColor3f(0.988, 0.992, 0.933);
	glBegin(GL_POLYGON);
        glVertex2i(13, 20);
        glVertex2i(13, 17);
        glVertex2i(14, 17);
	glEnd();
	glColor3f(0.933, 0.91, 0.153);
	glBegin(GL_POLYGON);
        glVertex2i(13, 20);
        glVertex2i(14, 17);
        glVertex2i(15, 17);
	glEnd();
	glColor3f(0.988, 0.992, 0.933);
	glBegin(GL_POLYGON);
        glVertex2i(13, 20);
        glVertex2i(15, 17);
        glVertex2i(16, 18);
	glEnd();
	glColor3f(0.933, 0.91, 0.153);
    glLineWidth(5);
	glBegin(GL_LINES);
        glVertex2i(13, 20);
		glVertex2i(13, 15);

		glVertex2i(13, 15);
		glVertex2i(11, 13);

		glVertex2i(13, 15);
		glVertex2i(14, 13);
	glEnd();

    // Tree 1
	glColor3f(0.58, 0.396, 0.278);
    glLineWidth(12);
	glBegin(GL_LINES);
        glVertex2i(20, 20);
		glVertex2i(20, 17);
	glEnd();
	glColor3f(0.765, 0.839, 0.192);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;

	  glVertex2f(20+2*cos(theta),22+2*sin(theta));  // here (12,10) is the center and 2 is the radius
	}
	glEnd();


	// Tree 2
	glColor3f(0.58, 0.396, 0.278);
    glLineWidth(12);
	glBegin(GL_LINES);
        glVertex2i(30, 18);
		glVertex2i(30, 15);
	glEnd();
	glColor3f(0.765, 0.839, 0.192);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;

	  glVertex2f(30+2*cos(theta),20+2*sin(theta));  // here (12,10) is the center and 2 is the radius
	}
	glEnd();


	// Tree 3
	glColor3f(0.58, 0.396, 0.278);
    glLineWidth(12);
	glBegin(GL_LINES);
        glVertex2i(8, 3);
		glVertex2i(8, 0);
	glEnd();
	glColor3f(0.765, 0.839, 0.192);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;

	  glVertex2f(8+2*cos(theta),5+2*sin(theta));  // here (12,10) is the center and 2 is the radius
	}
	glEnd();


	// Chair
    glColor3f(1, 0.396, 0.412);
	glBegin(GL_POLYGON);
        glVertex2i(18, 13);
        glVertex2i(18, 15);
        glVertex2i(20, 15);
        glVertex2i(20, 13);
	glEnd();
	glBegin(GL_POLYGON);
        glVertex2i(18, 13);
        glVertex2i(20, 13);
        glVertex2i(21, 11);
        glVertex2i(19, 11);
	glEnd();
	glColor3f(0.58, 0, 1);
    glLineWidth(5);
	glBegin(GL_LINES);
        glVertex2i(18, 14);
		glVertex2i(20, 14);

		glVertex2i(18, 13);
		glVertex2i(20, 13);

		glVertex2i(19, 12);
		glVertex2i(21, 12);
	glEnd();


    // Swimming pool
    glColor3f(0.424, 0.322, 0.235);
	glBegin(GL_POLYGON);
        glVertex2i(12, 4);
        glVertex2i(12, 10);
        glVertex2i(30, 10);
        glVertex2i(30, 4);
	glEnd();
	glColor3f(0.106, 0.58, 0.82);
	glBegin(GL_POLYGON);
        glVertex2i(13, 5);
        glVertex2i(13, 9);
        glVertex2i(29, 9);
        glVertex2i(29, 5);
	glEnd();
	glColor3f(0.867, 0.867, 0.867);
    glLineWidth(2);
	glBegin(GL_LINES);
        glVertex2i(12, 4);
        glVertex2i(13, 5);

        glVertex2i(12, 10);
        glVertex2i(13, 9);

        glVertex2i(30, 4);
        glVertex2i(29, 5);

        glVertex2i(29, 9);
        glVertex2i(30, 10);
	glEnd();



    //Set color to red
	glColor3f(1, 0.494, 0.404);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;

	  glVertex2f(14+2*cos(theta),42+2*sin(theta));  // here (12,10) is the center and 2 is the radius
	}
	glEnd();


glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(200, 150);				// Set window position
	glutInitWindowSize(630, 650);					// Set window size width height
	glutCreateWindow("171-15-8709");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(MdOmarFaruk);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
