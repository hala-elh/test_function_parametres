#include <iostream>

struct Element {
    int valeur;
    Element* suivant;
    // Constructeur pour initialiser un �l�ment
    Element(int val) : valeur(val), suivant(nullptr) {}
};

class Liste {
private:
    Element* premier; // Pointeur vers le premier �l�ment de la liste

public:
    // Constructeur pour initialiser une liste vide
    Liste() : premier(nullptr) {}

    // M�thode pour ajouter un �l�ment au d�but de la liste
    void ajouterDebut(int val) {
        Element* nouvelElement = new Element(val);
        nouvelElement->suivant = premier; // L'�l�ment actuel devient le suivant du nouveau
        premier = nouvelElement;          // Le nouveau devient le premier de la liste
        std::cout << "Ajoute au debut : " << val << std::endl;
    }

    // M�thode pour supprimer un �l�ment au d�but de la liste
    void supprimerDebut() {
        if (premier != nullptr) {
            Element* aSupprimer = premier; // Sauvegarde du premier �l�ment
            premier = premier->suivant;    // Le suivant devient le nouveau premier
            std::cout << "Supprime au debut : " << aSupprimer->valeur << std::endl;
            delete aSupprimer;             // Lib�ration de la m�moire de l'�l�ment supprim�
        } else {
            std::cout << "La liste est vide, rien a supprimer." << std::endl;
        }
    }

    // M�thode pour afficher tous les �l�ments de la liste
    void afficher() const {
        Element* courant = premier;
        std::cout << "Contenu de la liste : ";
        while (courant != nullptr) {
            std::cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        std::cout << std::endl;
    }

    // Destructeur pour lib�rer toute la m�moire allou�e
    ~Liste() {
        while (premier != nullptr) {
            supprimerDebut(); // Suppression de chaque �l�ment pour lib�rer la m�moire
        }
        std::cout << "La liste a ete detruite." << std::endl;
    }
};
