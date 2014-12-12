#ifdef SFML_STATIC
#pragma comment(lib, "glew.lib")
#pragma comment(lib, "freetype.lib")
#pragma comment(lib, "jpeg.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "gdi32.lib")  
#endif // SFML_STATIC


#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdexcept>

#include "Game.hpp"

int main() {
    try {
        Game game;
        game.run();
    }
    catch (std::exception& e) {
        std::cout << "\nException: " << e.what() << std::endl;
    }
}

