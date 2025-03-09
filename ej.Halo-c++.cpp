#include <iostream>
using namespace std;

int main() {
    std::cout << "Seleccione el numero del tipo de mapa en el cual desea jugar:" << std::endl;
    std::cout << "1. Tierra" << std::endl;
    std::cout << "2. Luna" << std::endl;
    std::cout << "3. Halo" << std::endl;
    float m;
    std::cin >> m;

    std::cout << "Ingresa los segundos de caida:" << std::endl;
    float t;
    std::cin >> t;

    std::cout << "Escoge si quieres jugar con evento especial (1) o sin evento especial (0)" << std::endl;
    std::cout << "0. Sin evento especial" << std::endl;
    std::cout << "1. Con evento especial" << std::endl;
    float e;
    std::cin >> e;

    // formula de distancia es d = 0.5 * gravedad * tiempo²
    float d;
    if (m == 1 && e == 0) {
        d = 0.5 * 9.8 * t * t;
        std::cout << "La distancia maxima recorrida es: " << d << " metros." << std::endl;
    } 
    else if (m == 1 && e == 1) {
        d = 0.5 * 5 * t * t;
        std::cout << "La distancia maxima recorrida es: " << d << " metros." << std::endl;
    } 
    else if (m == 2 && e == 0) {
        d = 0.5 * 1.6 * t * t;
        std::cout << "La distancia maxima recorrida es: " << d << " metros." << std::endl;
    } 
    else if (m == 2 && e == 1) {
        d = 0.5 * 3 * t * t;
        std::cout << "La distancia maxima recorrida es: " << d << " metros." << std::endl;
    } 
    else if (m == 3 && e == 0) {
        d = 0.5 * 7 * t * t;
        std::cout << "La distancia maxima recorrida es: " << d << " metros." << std::endl;
    } 
    else if (m == 3 && e == 1 && t > 10) {
        d = 300;
        std::cout << "La distancia maxima recorrida es: " << d << " metros." << std::endl;
    } 
    else if (m == 3 && e == 1 && t <= 10) {
        d = 0.5 * 7 * t * t;
        std::cout << "La distancia maxima recorrida es: " << d << " metros." << std::endl;
    }

    return 0;}
    