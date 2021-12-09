#include <iostream>
#include "../data/screen.h"
#include "../init/window.h"
#include <GL/freeglut.h>

int main (int argc, char* argv[]) {
    command_args these;
    these.argc = argc; these.argv = argv;
    if (!initialize_window({400, 400}, {10, 10}, "Project 1 window", these)) {
        std::cout << "Window not initialized. Exiting..." << std::endl;
    }

    // Init color
    glClearColor(1.0f, 0.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();

    glutMainLoop();
    return 0;
}