#include <iostream>

class Test {
private:
    static int compteur; // Variable statique pour compter les appels

public:
    // Fonction qui incrémente le compteur à chaque appel
    void call() {
        compteur++;
        std::cout << "Fonction call appelee " << compteur << " fois." << std::endl;
    }

    // Fonction pour obtenir le nombre total d'appels
    static int getCompteur() {
        return compteur;
    }
};

// Initialisation de la variable statique
int Test::compteur = 0;

int main() {
    Test t1, t2; // Deux instances de la classe Test

    t1.call(); // Appel de call depuis t1
    t2.call(); // Appel de call depuis t2
    t1.call(); // Appel de call encore depuis t1

    std::cout << "La fonction call a ete appelee un total de " << Test::getCompteur() << " fois." << std::endl;

    return 0;
}
