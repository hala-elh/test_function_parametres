#include <iostream>

class Point {
private:
    float x, y;

public:
    Point(float x, float y) : x(x), y(y) {}

    // Fonction membre pour deplacer le point
    void deplace(float dx, float dy) {
        x += dx;
        y += dy;
    }

    // Fonction membre pour afficher les coordonnees du point
    void affiche() const {
        std::cout << "Coordonnees du point: (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    // Declaration d'un point
    Point p(2.0f, 6.0f);

    // Affichage du point
    std::cout << "Position initiale: ";
    p.affiche();

    // Deplacement du point
    p.deplace(1.0f, 3.0f);

    // Affichage du point apres deplacement
    std::cout << "Position apres deplacement: ";
    p.affiche();

    return 0;
}
