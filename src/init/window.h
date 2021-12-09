#ifndef JRG_WINDOW_H
#define JRG_WINDOW_H

#include "../data/screen.h"
#include <GL/freeglut.h>

int initialize_window(coord size, coord position, const char *name, command_args args, unsigned int display_mode=(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH));

#endif