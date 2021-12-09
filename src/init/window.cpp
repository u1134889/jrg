#include <cstdio>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "window.h"

int initialize_window(coord size, coord position, const char *name, command_args args, unsigned int display_mode) {
    // Init glut
    glutInit(&args.argc, args.argv);

    // Init window
	glutInitWindowSize(size.x, size.y);
	glutInitWindowPosition(position.x, position.y);
	glutInitDisplayMode(display_mode);
	glutCreateWindow(name);

    // Init glew
    GLenum err = glewInit();
    if (GLEW_OK != err) {
    /* Problem: glewInit failed, something is seriously wrong. */
        fprintf(stderr, "Error: %s\n", glewGetErrorString(err));
        return 0;
    }
    fprintf(stdout, "Status: Using GLEW %s\n", glewGetString(GLEW_VERSION));
    return 1;
}