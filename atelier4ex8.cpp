#include <iostream>
#include <cstring>

class Fichier {
private:
    char* P;      // Pointeur vers la mémoire du fichier
    size_t longueur; // Taille de la zone mémoire

public:
    // Constructeur
    Fichier() : P(nullptr), longueur(0) {}

    // Méthode de création : alloue un espace mémoire de taille spécifiée
    void Creation(size_t taille) {
        longueur = taille;
        P = new char[longueur]; // Allocation de mémoire
        std::cout << "Espace de " << longueur << " octets alloue." << std::endl;
    }

    // Méthode de remplissage : remplit la zone mémoire avec des valeurs arbitraires
    void Remplit() {
        if (P) {
            for (size_t i = 0; i < longueur; i++) {
                P[i] = 'A' + (i % 26); // Remplit avec des lettres de l'alphabet
            }
            std::cout << "Espace memoire rempli avec des valeurs arbitraires." << std::endl;
        } else {
            std::cout << "Memoire non allouee. Appelez d'abord Creation()." << std::endl;
        }
    }

    // Méthode d'affichage : affiche le contenu de la zone mémoire
    void Affiche() const {
        if (P) {
            std::cout << "Contenu de la zone memoire : ";
            for (size_t i = 0; i < longueur; i++) {
                std::cout << P[i];
            }
            std::cout << std::endl;
        } else {
            std::cout << "Memoire non allouee." << std::endl;
        }
    }

    // Destructeur : libère l'espace mémoire alloué
    ~Fichier() {
        delete[] P;
        std::cout << "Espace memoire libere." << std::endl;
    }
};

int main() {
    // Création dynamique de l'objet Fichier
    Fichier* fichier = new Fichier;

    // Appel des méthodes
    fichier->Creation(20); // Alloue un espace de 20 octets
    fichier->Remplit();     // Remplit la zone mémoire avec des valeurs arbitraires
    fichier->Affiche();     // Affiche le contenu de la zone mémoire

    // Libération de la mémoire et suppression de l'objet
    delete fichier; // Appelle automatiquement le destructeur

    return 0;
}
