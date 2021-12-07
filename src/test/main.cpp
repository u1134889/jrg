#include <cstdio>
#include <GL/glew.h>
#include <GL/freeglut.h>

int main(int argc, char* argv[]) {
    // Init glut
    glutInit(&argc, argv);

    // Init window
	glutInitWindowSize(400, 200);
	glutInitWindowPosition(40, 0);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutCreateWindow("Super Basic GL");

    // Init glew
    GLenum err = glewInit();
    if (GLEW_OK != err) {
    /* Problem: glewInit failed, something is seriously wrong. */
        fprintf(stderr, "Error: %s\n", glewGetErrorString(err));
    }
    fprintf(stdout, "Status: Using GLEW %s\n", glewGetString(GLEW_VERSION));

    // Init color
    glClearColor(1.0f, 0.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();

    glutMainLoop();
    return 0;
}