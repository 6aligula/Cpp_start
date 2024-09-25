#include <iostream> // Añadir esta línea

int main() {
    #ifdef PLATFORM_WINDOWS
        std::cout << "Ejecutando en Windows" << std::endl;
    #elif defined(PLATFORM_MACOS)
        std::cout << "Ejecutando en macOS" << std::endl;
    #endif

    int a = 5;
    int b = 10;
    int suma = a + b;
    std::cout << "La suma es: " << suma << std::endl;
    return 0;
}
