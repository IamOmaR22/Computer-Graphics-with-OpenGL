#include <GL/gl.h>
#include <GL/glut.h>
int i,j,k;
void display(void)
{
 glClear (GL_COLOR_BUFFER_BIT);
 for(i = 0;i < 8;i++ ){
 for(j = 0;j < 8;j++ ){

 glBegin(GL_POLYGON);
 if((i%2) == 0){


 if((j%2) == 0){

 glColor3f (0, 0, 0);
 }else{

 glColor3f (1, 1, 1);
 }


 }
 else {

 if((j%2) == 0){



 glColor3f (1, 1, 1);
 }else{

 glColor3f (0, 0, 0);
 }
 }

 glVertex2f (i,j);
 glVertex2f (i+1,j);
 glVertex2f (i+1,j+1);
 glVertex2f (i,j+1);
 glEnd();
 }
 }
 glFlush ();
}
void init (void)
{glClearColor (0.0, 0.0, 0.0, 0.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(0, 8, 0, 8, -1.0, 1.0);
}
int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize (900, 600);
 glutInitWindowPosition (100, 100);
 glutCreateWindow ("Chess Board");
 init ();
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}
