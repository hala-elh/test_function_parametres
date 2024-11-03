#include <iostream>
#include <vector>

class Pile {
private:
    std::vector<int> elements; // Conteneur pour stocker les éléments de la pile

public:
    // Constructeur par défaut (pile vide)
    Pile() {}

    // Méthode pour empiler un élément
    void push(int valeur) {
        elements.push_back(valeur); // Ajoute l'élément à la fin du vecteur
        std::cout << "Empile : " << valeur << std::endl;
    }

    // Méthode pour dépiler un élément
    void pop() {
        if (!elements.empty()) {
            int valeur = elements.back(); // Dernier élément
            elements.pop_back();          // Retire le dernier élément
            std::cout << "Depile : " << valeur << std::endl;
        } else {
            std::cout << "La pile est vide, impossible de depiler." << std::endl;
        }
    }

    // Méthode pour vérifier si la pile est vide
    bool estVide() const {
        return elements.empty();
    }
};

int main() {
    Pile p1, p2; // Création de deux piles

    // Test de la pile p1
    std::cout << "Operations sur la pile p1 :" << std::endl;
    p1.push(10);
    p1.push(20);
    p1.push(30);
    p1.pop();
    p1.pop();
    p1.pop();
    p1.pop(); // Tentative de dépiler sur une pile vide

    // Test de la pile p2
    std::cout << "\nOperations sur la pile p2 :" << std::endl;
    p2.push(5);
    p2.push(15);
    p2.push(25);
    p2.pop();
    p2.pop();

    return 0;
}
