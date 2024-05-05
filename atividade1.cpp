#include <stdio.h>
#include <stdlib.h>
#include <gl/glut.h>

GLfloat tx = 0;
GLfloat ang1 = 0, ang2 = -90;
GLfloat win = 25;

void Inicializa(){
	glMatrixMode (GL_PROJECTION);
	gluOrtho2D (0.0, 15.0, 0.0, 15.0);
	glMatrixMode (GL_MODELVIEW);
}

void Exagono1(){
	glColor3f (0.3, 1, 0.7);
	glBegin (GL_POLYGON);
		glVertex3f (1.0, 6.0, 0);
		glVertex3f (3.0, 1.0, 0);
		glVertex3f (3.0, 1.0, 0);
		glVertex3f (7.0, 1.0, 0);
		glVertex3f (7.0, 1.0, 0);
		glVertex3f (9.0, 6.0, 0);
		glVertex3f (9.0, 6.0, 0);
		glVertex3f (7.0, 11.0, 0);
		glVertex3f (7.0, 11.0, 0);
		glVertex3f (3.0, 11.0, 0);
		glVertex3f (3.0, 11.0, 0);
		glVertex3f (1.0, 6.0, 0);
	glEnd();
}

void Exagono2(){
	glColor3f (0.8, 1, 0.8);
	glBegin (GL_POLYGON);
		glVertex3f (1.0, 6.0, 0);
		glVertex3f (2.0, 3.5, 0);
		glVertex3f (2.0, 3.5, 0);
		glVertex3f (4.0, 3.5, 0);
		glVertex3f (4.0, 3.5, 0);
		glVertex3f (5.0, 6.0, 0);
		glVertex3f (5.0, 6.0, 0);
		glVertex3f (4.0, 8.5, 0);
		glVertex3f (4.0, 8.5, 0);
		glVertex3f (2.0, 8.5, 0);
		glVertex3f (1.0, 6.0, 0);
	glEnd();
}

void Exagono3(){
	glColor3f (0.5, 1, 1);
	glBegin (GL_POLYGON);
		glVertex3f (5.0, 6.0, 0);
		glVertex3f (6.0, 3.5, 0);
		glVertex3f (6.0, 3.5, 0);
		glVertex3f (8.0, 3.5, 0);
		glVertex3f (9.0, 6.0, 0);
		glVertex3f (8.0, 8.5, 0);
		glVertex3f (8.0, 8.5, 0);
		glVertex3f (6.0, 8.5, 0);
		glVertex3f (6.0, 8.5, 0);
		glVertex3f (5.0, 6.0, 0);
	glEnd();
}

void Quadrado1(){
	glColor3f (0.5, 0, 1);
	glBegin (GL_QUADS);
		glVertex3f (3.0, 1.0, 0);
		glVertex3f (5.0, 1.0, 0);
		glVertex3f (4.0, 3.5, 0);
		glVertex3f (2.0, 3.5, 0);
	glEnd();
}

void Quadrado2(){
	glColor3f (0.5, 0, 0);
	glBegin (GL_QUADS);
		glVertex3f (6.0, 3.5, 0);
		glVertex3f (5.0, 1.0, 0);
		glVertex3f (7.0, 1.0, 0);
		glVertex3f (8.0, 3.5, 0);
	glEnd();
}

void Quadrado3(){
	glColor3f (0, 0.7, 0.1);
	glBegin (GL_QUADS);
		glVertex3f (8.0, 8.5, 0);
		glVertex3f (7.0, 6.0, 0);
		glVertex3f (8.0, 3.5, 0);
		glVertex3f (9.0, 6.0, 0);
	glEnd();
}

void Quadrado4(){
	glColor3f (1, 1, 0);
	glBegin (GL_POLYGON);
		glVertex3f (6.0, 8.5, 0);
		glVertex3f (8.0, 8.5, 0);
		glVertex3f (7.0, 11.0, 0);
		glVertex3f (5.0, 11.0, 0);
	glEnd();
}

void Quadrado5(){
	glColor3f (0, 0.5, 1);
	glBegin (GL_QUADS);
		glVertex3f (5.0, 11.0, 0);
		glVertex3f (4.0, 8.5, 0);
		glVertex3f (5.0, 6.0, 0);
		glVertex3f (6.0, 8.5, 0);
	glEnd();
}

void Quadrado6(){
	glColor3f (1, 0.5, 1);
	glBegin (GL_QUADS);
		glVertex3f (2.0, 3.5, 0);
		glVertex3f (3.0, 6.0, 0);
		glVertex3f (2.0, 8.5, 0);
		glVertex3f (1.0, 6.0, 0);
	glEnd();
	
}
void Quadrado7(){
	glColor3f (1, 0.5, 0.5);
	glBegin (GL_QUADS);
		glVertex3f (4.0, 3.5, 0);
		glVertex3f (5.0, 1.0, 0);
		glVertex3f (6.0, 3.5, 0);
		glVertex3f (5.0, 6.0, 0);
	glEnd();
	
}

void Linhas(){
	glLineWidth(5);
	glColor3f (0, 0, 0);
	glBegin (GL_LINES);
		glVertex3f (3.0, 6.0, 0);
		glVertex3f (7.0, 6.0, 0);
		glVertex3f (4.0, 8.5, 0);
		glVertex3f (6.0, 3.5, 0);
		glVertex3f (6.0, 8.5, 0);
		glVertex3f (4.0, 3.5, 0);
	glEnd();
}

void ExagonoA(){
	glColor3f (0, 0, 0);
	glBegin (GL_LINES);
		glVertex3f (1.0, 6.0, 0);
		glVertex3f (3.0, 1.0, 0);
		glVertex3f (3.0, 1.0, 0);
		glVertex3f (7.0, 1.0, 0);
		glVertex3f (7.0, 1.0, 0);
		glVertex3f (9.0, 6.0, 0);
		glVertex3f (9.0, 6.0, 0);
		glVertex3f (7.0, 11.0, 0);
		glVertex3f (7.0, 11.0, 0);
		glVertex3f (3.0, 11.0, 0);
		glVertex3f (3.0, 11.0, 0);
		glVertex3f (1.0, 6.0, 0);
	glEnd();
}

void ExagonoB(){
	glColor3f (0, 0, 0);
	glBegin (GL_LINES);
	glBegin (GL_LINE_LOOP);
		glVertex3f (1.0, 6.0, 0);
		glVertex3f (2.0, 3.5, 0);
		glVertex3f (2.0, 3.5, 0);
		glVertex3f (4.0, 3.5, 0);
		glVertex3f (4.0, 3.5, 0);
		glVertex3f (5.0, 6.0, 0);
		glVertex3f (5.0, 6.0, 0);
		glVertex3f (4.0, 8.5, 0);
		glVertex3f (4.0, 8.5, 0);
		glVertex3f (2.0, 8.5, 0);
		glVertex3f (1.0, 6.0, 0);
	glEnd();
}

void ExagonoC(){

	glBegin (GL_LINES);

		glVertex3f (5.0, 6.0, 0);
		glVertex3f (6.0, 3.5, 0);
		glVertex3f (6.0, 3.5, 0);
		glVertex3f (8.0, 3.5, 0);
		glVertex3f (9.0, 6.0, 0);
		glVertex3f (8.0, 8.5, 0);
		glVertex3f (8.0, 8.5, 0);
		glVertex3f (6.0, 8.5, 0);
		glVertex3f (6.0, 8.5, 0);
		glVertex3f (5.0, 6.0, 0);
	glEnd();
}

void QuadradoA(){

	glBegin (GL_LINES);

		glVertex3f (3.0, 1.0, 0);
		glVertex3f (5.0, 1.0, 0);
		glVertex3f (5.0, 1.0, 0);
		glVertex3f (4.0, 3.5, 0);
		glVertex3f (4.0, 3.5, 0);
		glVertex3f (2.0, 3.5, 0);
	glEnd();
}

void QuadradoB(){
	glColor3f (0, 0, 0);
	glBegin (GL_LINES);
		glVertex3f (6.0, 3.5, 0);
		glVertex3f (5.0, 1.0, 0);
		glVertex3f (7.0, 1.0, 0);
		glVertex3f (8.0, 3.5, 0);
	glEnd();
}

void QuadradoC(){
	glColor3f (0, 0, 0);
	glBegin (GL_LINES);
		glVertex3f (8.0, 8.5, 0);
		glVertex3f (7.0, 6.0, 0);
		glVertex3f (7.0, 6.0, 0);
		glVertex3f (8.0, 3.5, 0);
		glVertex3f (8.0, 3.5, 0);
		glVertex3f (9.0, 6.0, 0);
	glEnd();
}

void QuadradoD(){
	glColor3f (0, 0, 0);
	glBegin (GL_LINES);
		glVertex3f (5.0, 11.0, 0);
		glVertex3f (4.0, 8.5, 0);
		glVertex3f (5.0, 6.0, 0);
		glVertex3f (6.0, 8.5, 0);
		glVertex3f (6.0, 8.5, 0);
		glVertex3f (5.0, 11.0, 0);
	glEnd();
}

void QuadradoE(){
	glColor3f (0, 0, 0);
	glBegin (GL_LINES);
	
		glVertex3f (2.0, 3.5, 0);
		glVertex3f (3.0, 6.0, 0);
		glVertex3f (3.0, 6.0, 0);
		glVertex3f (2.0, 8.5, 0);
		glVertex3f (2.0, 8.5, 0);
		glVertex3f (1.0, 6.0, 0);
	glEnd();
	
}

void QuadradoF(){
	glColor3f (0, 0, 0);
	glBegin (GL_LINES);
		glVertex3f (2.0, 3.5, 0);
		glVertex3f (3.0, 6.0, 0);
		glVertex3f (2.0, 8.5, 0);
		glVertex3f (1.0, 6.0, 0);
	glEnd();
	
}
void QuadradoG(){
	glColor3f (0, 0, 0);
	glBegin (GL_LINES);
		glVertex3f (4.0, 3.5, 0);
		glVertex3f (5.0, 1.0, 0);
		glVertex3f (6.0, 3.5, 0);
		glVertex3f (5.0, 6.0, 0);
	glEnd();
	
}

void DesenhaExagono(){
	glLineWidth(5);
	glClearColor(0.8, 0.8, 0.8, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	Exagono1();
	Exagono2();
	Exagono3();
	Quadrado1();
	Quadrado2();
	Quadrado3();
	Quadrado4();
	Quadrado5();
	Quadrado6();
	Quadrado7();
	Linhas();
	ExagonoA();
	ExagonoB();
	ExagonoC();
	QuadradoA();
	QuadradoB();
	QuadradoC();
	QuadradoD();
	QuadradoE();
	QuadradoF();
	QuadradoG();
		
	glFlush();
}

void Teclado (unsigned char key, int x, int y){
	if (key == 27){
		exit(0);	
	}	
}

int main(void){
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(5,5);
	glutInitWindowSize(800,600);
	glutCreateWindow("Exagono");
	glutDisplayFunc(DesenhaExagono);
	glutKeyboardFunc (Teclado);
	Inicializa();
	glutMainLoop();

return 0;
}
