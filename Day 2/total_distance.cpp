#include <iostream>

// Función principal que resuelve tu problema del SAT
double calcularConstanteC(double distancia_total) {
    double mitad = distancia_total / 2.0;
    double c = mitad * mitad;
    return c;
}

int main() {
    // Probamos con la distancia de tu ejemplo (y = -x^2 + 9 tiene una distancia de 6)
    double distancia = 6.0;
    double resultado = calcularConstanteC(distancia);
    
    // Mostramos el resultado en la consola
    std::cout << "Para una distancia de " << distancia << ", la constante c es: " << resultado << "\n";
    
    return 0; // Indica que el programa terminó sin errores
}