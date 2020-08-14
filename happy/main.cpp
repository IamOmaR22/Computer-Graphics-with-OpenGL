#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(0,0,0,0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 80.0, 0.0, 80.0);
}

void momo(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window



	// Draw a squre1

	//Set colour to green
	glColor3f(255, 165, 0	);

	glBegin(GL_LINES);
		glVertex2i(4, 56);
		glVertex2i(12, 4);

	glEnd();

	//Set colour to green
	glColor3f(255, 165, 0	);

	glBegin(GL_LINES);
		glVertex2i(66, 2);
		glVertex2i(12, 4);

	glEnd();
	//Set colour to green
	glColor3f(255, 165, 0	);

	glBegin(GL_LINES);
		glVertex2i(66, 2);
		glVertex2i(66, 52);

	glEnd();
	//Set colour to green
	glColor3f(255, 165, 0	);

	glBegin(GL_LINES);
		glVertex2i(66, 52);
		glVertex2i(4, 56);

	glEnd();



	//draw sqr2

	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(16, 2);
		glVertex2i(68, 10);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(67, 58);
		glVertex2i(68, 10);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(16,52);
		glVertex2i(67, 58);

	glEnd();
	//Set colour to green
	glColor3f(25, 25, 112);

	glBegin(GL_LINES);
		glVertex2i(16, 2);
		glVertex2i(16, 52);

	glEnd();


	//happy


    //h
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(38, 40);
		glVertex2i(38, 32);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(40, 32);
		glVertex2i(40, 40);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(38,34);
		glVertex2i(40, 34);

	glEnd();

    //a
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(41, 32);
		glVertex2i(42, 40);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(42, 40);
		glVertex2i(43, 32);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(43,33);
		glVertex2i(41, 33);

	glEnd();

	    //p
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(44, 40);
		glVertex2i(44, 32);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(44, 40);
		glVertex2i(45, 40);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(45,40);
		glVertex2i(46, 39);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(46,39);
		glVertex2i(45, 36);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(45,36);
		glVertex2i(44, 36);

	glEnd();


	    //p
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(47, 32);
		glVertex2i(47, 40);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(47, 40);
		glVertex2i(48, 40);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(48, 36);
		glVertex2i(48, 40);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(48, 36);
		glVertex2i(47, 36);

	glEnd();

	//y
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(49, 40);
		glVertex2i(50, 39);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(50, 39);
		glVertex2i(51, 40);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(50, 39);
		glVertex2i(50, 32);

	glEnd();


	//b
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(37, 30);
		glVertex2i(37, 24);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(37, 30);
		glVertex2i(38, 30);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(38, 30);
		glVertex2i(38, 28);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(37, 28);
		glVertex2i(38, 28);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(38, 28);
		glVertex2i(38, 26);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(38, 26);
		glVertex2i(37, 26);

	glEnd();

	//i
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(40, 30);
		glVertex2i(42, 30);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(40, 24);
		glVertex2i(42, 24);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(41, 30);
		glVertex2i(41, 24);

	glEnd();

	//r
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(43, 30);
		glVertex2i(43, 24);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(44, 30);
		glVertex2i(43, 30);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(44, 30);
		glVertex2i(44, 28);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(44, 28);
		glVertex2i(43, 28);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(45, 24);
		glVertex2i(43, 28);

	glEnd();

	 //t
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(46, 30);
		glVertex2i(48, 30);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(47, 30);
		glVertex2i(47, 24);

	glEnd();

	 //h
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(49, 28);
		glVertex2i(51, 28);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(49, 30);
		glVertex2i(49, 24);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(51,30);
		glVertex2i(51, 24);

	glEnd();


	 //d
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(39, 20);
		glVertex2i(39, 14);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(39, 20);
		glVertex2i(40, 20);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(40,20);
		glVertex2i(41, 19);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(41,16);
		glVertex2i(41, 19);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(40,14);
		glVertex2i(41, 16);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(40,14);
		glVertex2i(39, 14);

	glEnd();

	 //a
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(44, 14);
		glVertex2i(46, 20);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(46, 20);
		glVertex2i(48, 14);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(44,15);
		glVertex2i(48, 15);

	glEnd();

		 //y
	//Set colour to green
	glColor3f(124, 252, 0	);

	glBegin(GL_LINES);
		glVertex2i(49, 20);
		glVertex2i(51, 19);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139	);

	glBegin(GL_LINES);
		glVertex2i(51, 19);
		glVertex2i(53, 20);

	glEnd();
	//Set colour to green
	glColor3f(39, 64, 139);

	glBegin(GL_LINES);
		glVertex2i(51,19);
		glVertex2i(51, 14);

	glEnd();


	// cake low
    glColor3f(255, 0, 255);
	glBegin(GL_POLYGON);
		glVertex2i(18, 20);
		glVertex2i(18, 14);

		glVertex2i(30, 14);
		glVertex2i(30, 20);
	glEnd();

	// cake above
    glColor3f(0, 229, 238	);
	glBegin(GL_POLYGON);
		glVertex2i(20, 20);
		glVertex2i(28, 20);

		glVertex2i(28, 24);
		glVertex2i(20, 24);
	glEnd();

	// candle
    glColor3f(238, 0, 0);
	glBegin(GL_POLYGON);
		glVertex2i(22, 24);
		glVertex2i(26, 24);

		glVertex2i(26, 28);
		glVertex2i(22, 28);
	glEnd();

	 glColor3f(255, 165, 0);
	glBegin(GL_POLYGON);
		glVertex2i(24, 28);
		glVertex2i(26, 29);

		glVertex2i(24, 32);
		glVertex2i(22, 29);
	glEnd();

	//fickles
	//Set colour to green
	glColor3f(255, 0, 0	);

	glBegin(GL_LINES);
		glVertex2i(20, 50);
		glVertex2i(24, 48);

	glEnd();

	//Set colour to green
	glColor3f(0, 255, 0);

	glBegin(GL_LINES);
		glVertex2i(22, 42);
		glVertex2i(28, 46);

	glEnd();

//Set colour to green
	glColor3f(255, 0, 0	);

	glBegin(GL_LINES);
		glVertex2i(20, 50);
		glVertex2i(24, 48);

	glEnd();

	//Set colour to green
	glColor3f(0, 255, 0);

	glBegin(GL_LINES);
		glVertex2i(22, 42);
		glVertex2i(28, 46);

	glEnd();





glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(200, 200);				// Set window position
	glutInitWindowSize(450, 450);					// Set window size
	glutCreateWindow("171-15-8849");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(momo);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
