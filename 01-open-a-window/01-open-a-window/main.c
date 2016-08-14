//
//  main.c
//  01-open-a-window
//
//  Created by peironggao on 16/8/14.
//  Copyright © 2016年 gaopeirong. All rights reserved.
//

#include <stdio.h>
#include <GLUT/GLUT.h>

static void RenderSceneCB()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
    
    printf("RenderSceneCB \n");
}

static void InitializeGlutCallbacks()
{
    glutDisplayFunc(RenderSceneCB);
}

int main(int argc, const char * argv[])
{
    /**
        This call initializes GLUT. The parameters can be provided directly from the command line and include useful options such as '-sync' and '-gldebug' which disable the asynchronous nature of X and automatically checks for GL errors and displays them (respectively).

     */
    glutInit(&argc, argv);
    
    /**
        Here we configure some GLUT options. GLUT_DOUBLE enables double buffering (drawing to a background buffer while another buffer is displayed) and the color buffer where most rendering ends up (i.e. the screen). We will usually want these two as well as other options which we will see later.

     */
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
    
    glutInitWindowSize(1024, 768);
    
    glutInitWindowPosition(100, 100);
    
    glutCreateWindow("open a window");
    
    InitializeGlutCallbacks();
    
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    
    glutMainLoop();
    
    return 0;
}
