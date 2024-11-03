#include <iostream>
#include <cstring>

class Fichier {
private:
    char* P;      // Pointeur vers la m�moire du fichier
    size_t longueur; // Taille de la zone m�moire

public:
    // Constructeur
    Fichier() : P(nullptr), longueur(0) {}

    // M�thode de cr�ation : alloue un espace m�moire de taille sp�cifi�e
    void Creation(size_t taille) {
        longueur = taille;
        P = new char[longueur]; // Allocation de m�moire
        std::cout << "Espace de " << longueur << " octets alloue." << std::endl;
    }

    // M�thode de remplissage : remplit la zone m�moire avec des valeurs arbitraires
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

    // M�thode d'affichage : affiche le contenu de la zone m�moire
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

    // Destructeur : lib�re l'espace m�moire allou�
    ~Fichier() {
        delete[] P;
        std::cout << "Espace memoire libere." << std::endl;
    }
};

int main() {
    // Cr�ation dynamique de l'objet Fichier
    Fichier* fichier = new Fichier;

    // Appel des m�thodes
    fichier->Creation(20); // Alloue un espace de 20 octets
    fichier->Remplit();     // Remplit la zone m�moire avec des valeurs arbitraires
    fichier->Affiche();     // Affiche le contenu de la zone m�moire

    // Lib�ration de la m�moire et suppression de l'objet
    delete fichier; // Appelle automatiquement le destructeur

    return 0;
}
