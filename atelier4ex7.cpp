#include <iostream>
#include <vector>

class Pile {
private:
    std::vector<int> elements; // Conteneur pour stocker les �l�ments de la pile

public:
    // Constructeur par d�faut (pile vide)
    Pile() {}

    // M�thode pour empiler un �l�ment
    void push(int valeur) {
        elements.push_back(valeur); // Ajoute l'�l�ment � la fin du vecteur
        std::cout << "Empile : " << valeur << std::endl;
    }

    // M�thode pour d�piler un �l�ment
    void pop() {
        if (!elements.empty()) {
            int valeur = elements.back(); // Dernier �l�ment
            elements.pop_back();          // Retire le dernier �l�ment
            std::cout << "Depile : " << valeur << std::endl;
        } else {
            std::cout << "La pile est vide, impossible de depiler." << std::endl;
        }
    }

    // M�thode pour v�rifier si la pile est vide
    bool estVide() const {
        return elements.empty();
    }
};

int main() {
    Pile p1, p2; // Cr�ation de deux piles

    // Test de la pile p1
    std::cout << "Operations sur la pile p1 :" << std::endl;
    p1.push(10);
    p1.push(20);
    p1.push(30);
    p1.pop();
    p1.pop();
    p1.pop();
    p1.pop(); // Tentative de d�piler sur une pile vide

    // Test de la pile p2
    std::cout << "\nOperations sur la pile p2 :" << std::endl;
    p2.push(5);
    p2.push(15);
    p2.push(25);
    p2.pop();
    p2.pop();

    return 0;
}
