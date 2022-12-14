#include "Window.h"

unsigned int Window::windowCreator()
{
	/* Initialize GLFW */
    if (!glfwInit()) {
        std::cout << "Failed to initialize GLFW" << std::endl;
        return -1;
    }
    else { 
        std::cout << "GLFW initiliazed!" << std::endl; 
    }

	winWindow = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Blockout", NULL, NULL);

    /* instance window initialized */
	if (!winWindow) {
        std::cout << "Failed to initialize window" << std::endl;
		glfwTerminate();
		return -1;
	}

    /* Make the window's context current */
    glfwMakeContextCurrent(winWindow);
    
    /* Initialize glad */
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }


	return 0;
}