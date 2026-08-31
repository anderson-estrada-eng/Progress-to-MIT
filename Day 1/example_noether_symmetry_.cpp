// If e = 0.0: Rotational symmetry is preserved -> Lz remains constant.
// If e > 0.0: Symmetry breaks -> Lz changes over time.
#include <iostream>
#include <cmath>

void loop_simulation();

int main() { loop_simulation(); }

void loop_simulation() {
    double x = 1.0, y = 0.0, vx = 0.0, vy = 1.0, dt = 0.01, g = 9.81;
    // Parámetro de asimetría: e = 0.0 (simétrico/conservado), e > 0.0 (asimétrico)
    double e = 0.3; 

    for (int t = 0; t < 1000; ++t) {
        // Fuerza derivada de la pendiente dz/dx y dz/dy para z = 0.5*(x^2 + (1+e)*y^2)
        double ax = -g * x;
        double ay = -g * (1.0 + e) * y;
        
        vx += ax * dt; vy += ay * dt;
        x += vx * dt;  y += vy * dt;

        double Lz = x * vy - y * vx; // Cantidad asociada a la simetría
        std::cout << "t: " << t * dt << " | Lz: " << Lz << "\n";
    }
}