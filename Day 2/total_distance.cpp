#include <iostream>

// Key feature that solves your SAT-related issue.
double calcularConstanteC(double total_distance) {
    double half = total_distance / 2.0;
    double c = half * half;
    return c;
}

int main() {
    // We test it using the distance from your example (y = -x^2 + 9 has a distance of 6).
    double distance = 6.0;
    double result = calcularConstanteC(distance);
    
    // We display the result in the console.
    std::cout << "For a distance of " << distance << ", the constant c is: " << result << "\n";
    
    return 0; // Indicates that the program finished without errors.
}