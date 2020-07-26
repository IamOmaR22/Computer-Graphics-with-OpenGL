#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0.78, 0.804, 0.898, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 35.0, 0.0, 45.0);
}

void MdOmarFaruk(void)
{
	float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	// Draw a filled quadrilateral

    // First House

    //Roof
    glColor3f(0.412, 0.467, 0.608);
	glBegin(GL_POLYGON);
        glVertex2i(2, 32);
		glVertex2i(5, 35);
		glVertex2i(13, 35);
		glVertex2i(10, 32);
	glEnd();

	//Front
    glColor3f(0.957, 0.953, 0.953);
	glBegin(GL_POLYGON);
        glVertex2i(2, 25);
		glVertex2i(2, 32);
		glVertex2i(10, 32);
		glVertex2i(10, 25);
	glEnd();

	//Right
    glColor3f(0.875, 0.875, 0.875);
	glBegin(GL_POLYGON);
        glVertex2i(10, 25);
		glVertex2i(10, 32);
		glVertex2i(13, 35);
		glVertex2i(15, 32);
		glVertex2i(15, 25);
	glEnd();

	//Door
    glColor3f(0.733, 0.733, 0.733);
	glBegin(GL_POLYGON);
        glVertex2i(5, 25);
		glVertex2i(5, 30);
		glVertex2i(7, 30);
		glVertex2i(7, 25);
	glEnd();

	//Windows
    glColor3f(0.412, 0.467, 0.608);
	glBegin(GL_POLYGON);
        glVertex2i(3, 27);
        glVertex2i(3, 29);
        glVertex2i(4, 29);
        glVertex2i(4, 27);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(8, 27);
        glVertex2i(8, 29);
        glVertex2i(9, 29);
        glVertex2i(9, 27);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(11, 27);
        glVertex2i(11, 28);
        glVertex2i(12, 28);
        glVertex2i(12, 27);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(13, 27);
        glVertex2i(13, 28);
        glVertex2i(14, 28);
        glVertex2i(14, 27);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(11, 29);
        glVertex2i(11, 30);
        glVertex2i(12, 30);
        glVertex2i(12, 29);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(13, 29);
        glVertex2i(13, 30);
        glVertex2i(14, 30);
        glVertex2i(14, 29);
	glEnd();


	// Second House

    //Roof
    glColor3f(0.412, 0.467, 0.608);
	glBegin(GL_POLYGON);
        glVertex2i(20, 32);
		glVertex2i(23, 35);
		glVertex2i(31, 35);
		glVertex2i(28, 32);
	glEnd();

	//Front
    glColor3f(0.957, 0.953, 0.953);
	glBegin(GL_POLYGON);
        glVertex2i(20, 25);
		glVertex2i(20, 32);
		glVertex2i(28, 32);
		glVertex2i(28, 25);
	glEnd();

	//Right
    glColor3f(0.875, 0.875, 0.875);
	glBegin(GL_POLYGON);
        glVertex2i(28, 25);
		glVertex2i(28, 32);
		glVertex2i(31, 35);
		glVertex2i(34, 32);
		glVertex2i(34, 25);
	glEnd();

	//Door
    glColor3f(0.733, 0.733, 0.733);
	glBegin(GL_POLYGON);
        glVertex2i(23, 25);
		glVertex2i(23, 30);
		glVertex2i(25, 30);
		glVertex2i(25, 25);
	glEnd();

	//Windows
    glColor3f(0.412, 0.467, 0.608);
	glBegin(GL_POLYGON);
        glVertex2i(21, 27);
        glVertex2i(21, 29);
        glVertex2i(22, 29);
        glVertex2i(22, 27);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(8, 27);
        glVertex2i(8, 29);
        glVertex2i(9, 29);
        glVertex2i(9, 27);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(26, 27);
        glVertex2i(26, 28);
        glVertex2i(27, 28);
        glVertex2i(27, 27);
	glEnd();

	glBegin(GL_POLYGON);
        glVertex2i(30, 27);
        glVertex2i(30, 30);
        glVertex2i(32, 30);
        glVertex2i(32, 27);
	glEnd();


	// Tree
	glColor3f(0.204, 0.455, 0.455);
	glBegin(GL_POLYGON);
        glVertex2i(15, 24);
        glVertex2i(16, 25);
        glVertex2i(17, 27);
        glVertex2i(18, 27);
        glVertex2i(19, 25);
        glVertex2i(20, 24);
	glEnd();

	glColor3f(0.204, 0.455, 0.455);
	glBegin(GL_POLYGON);
        glVertex2i(17, 27);
        glVertex2i(17, 35);
        glVertex2i(18, 35);
        glVertex2i(18, 27);
	glEnd();

    glColor3f(0.204, 0.455, 0.455);
    glLineWidth(4);
	glBegin(GL_LINES);
		glVertex2i(17, 35);
		glVertex2i(16, 36);
		glVertex2i(16, 36);
		glVertex2i(14, 36);
		glVertex2i(14, 36);
		glVertex2i(13, 37);
		glVertex2i(13, 37);
		glVertex2i(13, 39);
		glVertex2i(13, 39);
		glVertex2i(15, 41);
		glVertex2i(15, 41);
		glVertex2i(17, 41);
		glVertex2i(17, 41);
		glVertex2i(19, 42);
		glVertex2i(19, 42);
		glVertex2i(21, 42);
		glVertex2i(21, 42);
		glVertex2i(22, 41);
		glVertex2i(22, 41);
		glVertex2i(22, 39);
		glVertex2i(22, 39);
		glVertex2i(23, 38);
		glVertex2i(23, 38);
		glVertex2i(23, 37);
		glVertex2i(23, 37);
		glVertex2i(21, 36);
		glVertex2i(21, 36);
		glVertex2i(20, 37);
		glVertex2i(20, 37);
		glVertex2i(19, 37);
		glVertex2i(19, 37);
		glVertex2i(18, 35);
    glEnd();

    // Tree Line
    glColor3f(0.247, 0.239, 0.337);
    glLineWidth(3);
	glBegin(GL_LINES);
		glVertex2i(15, 39);
		glVertex2i(15, 40);
		glVertex2i(17, 36);
		glVertex2i(17, 40);
		glVertex2i(20, 38);
		glVertex2i(20, 41);
		glVertex2i(21, 37);
		glVertex2i(22, 38);
		glVertex2i(15, 37);
		glVertex2i(14, 38);
		glVertex2i(17, 37);
		glVertex2i(16, 38);
		glVertex2i(17, 38);
		glVertex2i(18, 39);
		glVertex2i(17, 39);
		glVertex2i(16, 40);
		glVertex2i(18, 40);
		glVertex2i(19, 39);
		glVertex2i(20, 39);
		glVertex2i(21, 40);
		glVertex2i(20, 40);
		glVertex2i(19, 41);
    glEnd();

    // Left Side Box
    glColor3f(0.208, 0.384, 0.902);
	glBegin(GL_POLYGON);
        glVertex2i(0, 18);
        glVertex2i(4, 18);
        glVertex2i(7, 15);
        glVertex2i(7, 8);
        glVertex2i(4, 5);
        glVertex2i(0, 5);
	glEnd();
	glBegin(GL_POLYGON);
        glVertex2i(0, 17);
        glVertex2i(4, 17);
        glVertex2i(6, 15);
        glVertex2i(6, 8);
        glVertex2i(4, 6);
        glVertex2i(0, 6);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
        glVertex2i(0, 17);
        glVertex2i(4, 17);
        glVertex2i(6, 15);
        glVertex2i(6, 8);
        glVertex2i(4, 6);
        glVertex2i(0, 6);
	glEnd();

	glColor3f(0, 0.455, 0.122);
    glLineWidth(3);
	glBegin(GL_LINES);
        glVertex2i(1, 7);
        glVertex2i(4, 7);
        glVertex2i(1, 8);
        glVertex2i(4, 8);
        glVertex2i(2, 9);
        glVertex2i(5, 9);
        glVertex2i(1, 10);
        glVertex2i(5, 10);
        glVertex2i(1, 11);
        glVertex2i(3, 11);
        glVertex2i(2, 12);
        glVertex2i(5, 12);
        glVertex2i(1, 13);
        glVertex2i(4, 13);
        glVertex2i(2, 14);
        glVertex2i(5, 14);
        glVertex2i(1, 15);
        glVertex2i(3, 15);
		glVertex2i(2, 16);
		glVertex2i(4, 16);
    glEnd();

    // Road
    glColor3f(0.694, 0.659, 0.592);
	glBegin(GL_POLYGON);
        glVertex2i(8, 21);
        glVertex2i(2, 19);
        glVertex2i(7, 18);
        glVertex2i(13, 12);
        glVertex2i(17, 4);
        glVertex2i(21, 2);
        glVertex2i(23, 0);
        glVertex2i(28, 0);
        glVertex2i(23, 5);
        glVertex2i(20, 6);
        glVertex2i(17, 13);
        glVertex2i(10, 20);
        glVertex2i(8, 21);
	glEnd();


	// Boat
    glColor3f(0.231, 0.227, 0.208);
	glBegin(GL_POLYGON);
        glVertex2i(24, 14);
        glVertex2i(30, 14);
        glVertex2i(30, 12);
        glVertex2i(24, 12);
	glEnd();
	glBegin(GL_POLYGON);
        glVertex2i(24, 14);
        glVertex2i(22, 15);
        glVertex2i(21, 16);
        glVertex2i(22, 13);
        glVertex2i(24, 12);
	glEnd();
	glBegin(GL_POLYGON);
        glVertex2i(30, 14);
        glVertex2i(32, 15);
        glVertex2i(33, 16);
        glVertex2i(32, 13);
        glVertex2i(30, 12);
	glEnd();

	glColor3f(0.863, 0.235, 0.231);
	glBegin(GL_POLYGON);
        glVertex2i(24, 14);
        glVertex2i(24, 17);
        glVertex2i(30, 17);
        glVertex2i(30, 14);
	glEnd();

	glColor3f(0.788, 0.706, 0.008);
    glLineWidth(3);
	glBegin(GL_LINES);
        glVertex2i(24, 15);
        glVertex2i(25, 14);
        glVertex2i(24, 14);
        glVertex2i(26, 17);
        glVertex2i(26, 14);
        glVertex2i(28, 17);
        glVertex2i(28, 14);
        glVertex2i(30, 17);
        glVertex2i(24, 17);
        glVertex2i(27, 14);
        glVertex2i(26, 17);
        glVertex2i(29, 14);
        glVertex2i(28, 17);
        glVertex2i(30, 15);
    glEnd();

    // Wave and water
    glColor3f(1, 1, 1);
    glLineWidth(3);
	glBegin(GL_LINES);
        glVertex2i(20, 12);
        glVertex2i(21, 11);
        glVertex2i(21, 11);
        glVertex2i(22, 12);
        glVertex2i(22, 12);
        glVertex2i(23, 11);
        glVertex2i(23, 11);
        glVertex2i(24, 12);
        glVertex2i(24, 12);
        glVertex2i(25, 11);
        glVertex2i(25, 11);
        glVertex2i(26, 12);
        glVertex2i(26, 12);
        glVertex2i(27, 11);
        glVertex2i(27, 11);
        glVertex2i(28, 12);
        glVertex2i(28, 12);
        glVertex2i(29, 11);
        glVertex2i(29, 11);
        glVertex2i(30, 12);
        glVertex2i(30, 12);
        glVertex2i(31, 11);
        glVertex2i(31, 11);
        glVertex2i(32, 12);
        glVertex2i(32, 12);
        glVertex2i(33, 11);
        glVertex2i(33, 11);
        glVertex2i(34, 12);

        glVertex2i(22, 10);
        glVertex2i(23, 10);
        glVertex2i(24, 10);
        glVertex2i(25, 10);
        glVertex2i(27, 10);
        glVertex2i(28, 10);
        glVertex2i(29, 10);
        glVertex2i(30, 10);
        glVertex2i(31, 10);
        glVertex2i(33, 10);
        glVertex2i(34, 10);
        glVertex2i(35, 10);

        glVertex2i(21, 9);
        glVertex2i(22, 9);
        glVertex2i(23, 9);
        glVertex2i(24, 9);
        glVertex2i(26, 9);
        glVertex2i(28, 9);
        glVertex2i(29, 9);
        glVertex2i(30, 9);
        glVertex2i(32, 9);
        glVertex2i(33, 9);

        glVertex2i(22, 8);
        glVertex2i(23, 8);
        glVertex2i(24, 8);
        glVertex2i(25, 8);
        glVertex2i(26, 8);
        glVertex2i(28, 8);
        glVertex2i(29, 8);
        glVertex2i(31, 8);
        glVertex2i(33, 8);
        glVertex2i(34, 8);

        glVertex2i(23, 7);
        glVertex2i(25, 7);
        glVertex2i(26, 7);
        glVertex2i(27, 7);
        glVertex2i(29, 7);
        glVertex2i(31, 7);
        glVertex2i(33, 7);
        glVertex2i(34, 7);

        glVertex2i(24, 6);
        glVertex2i(26, 6);
        glVertex2i(28, 6);
        glVertex2i(30, 6);
        glVertex2i(32, 6);
        glVertex2i(34, 6);

        glVertex2i(24, 5);
        glVertex2i(26, 5);
        glVertex2i(27, 5);
        glVertex2i(29, 5);
        glVertex2i(30, 5);
        glVertex2i(32, 5);
        glVertex2i(33, 5);
        glVertex2i(34, 5);

        glVertex2i(26, 4);
        glVertex2i(28, 4);
        glVertex2i(28, 4);
        glVertex2i(29, 4);
        glVertex2i(31, 4);
        glVertex2i(32, 4);
        glVertex2i(33, 4);
        glVertex2i(34, 4);

        glVertex2i(27, 3);
        glVertex2i(28, 3);
        glVertex2i(28, 3);
        glVertex2i(29, 3);
        glVertex2i(30, 3);
        glVertex2i(32, 3);
        glVertex2i(33, 3);
        glVertex2i(35, 3);
    glEnd();


    // Moon
    glColor3f(1.0,1.0,1.0); // white moon
    // glColor3f(0,0,0); // black moon
    // glColor3f(0.255, 0.412, 0.714); // blue moon
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(5+2.5*cos(theta),42+2.5*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();

	glColor3f(0.78, 0.804, 0.898);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(6+2.2*cos(theta),43+2.2*sin(theta));

	}

	glEnd();




    // Sun
    //Set color to red
	glColor3f(1, 0.494, 0.404);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(30+2*cos(theta),41+2*sin(theta));  // here (12,10) is the center and 2 is the radius
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
