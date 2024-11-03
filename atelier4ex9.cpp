#include <iostream>

struct Element {
    int valeur;
    Element* suivant;
    // Constructeur pour initialiser un élément
    Element(int val) : valeur(val), suivant(nullptr) {}
};

class Liste {
private:
    Element* premier; // Pointeur vers le premier élément de la liste

public:
    // Constructeur pour initialiser une liste vide
    Liste() : premier(nullptr) {}

    // Méthode pour ajouter un élément au début de la liste
    void ajouterDebut(int val) {
        Element* nouvelElement = new Element(val);
        nouvelElement->suivant = premier; // L'élément actuel devient le suivant du nouveau
        premier = nouvelElement;          // Le nouveau devient le premier de la liste
        std::cout << "Ajoute au debut : " << val << std::endl;
    }

    // Méthode pour supprimer un élément au début de la liste
    void supprimerDebut() {
        if (premier != nullptr) {
            Element* aSupprimer = premier; // Sauvegarde du premier élément
            premier = premier->suivant;    // Le suivant devient le nouveau premier
            std::cout << "Supprime au debut : " << aSupprimer->valeur << std::endl;
            delete aSupprimer;             // Libération de la mémoire de l'élément supprimé
        } else {
            std::cout << "La liste est vide, rien a supprimer." << std::endl;
        }
    }

    // Méthode pour afficher tous les éléments de la liste
    void afficher() const {
        Element* courant = premier;
        std::cout << "Contenu de la liste : ";
        while (courant != nullptr) {
            std::cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        std::cout << std::endl;
    }

    // Destructeur pour libérer toute la mémoire allouée
    ~Liste() {
        while (premier != nullptr) {
            supprimerDebut(); // Suppression de chaque élément pour libérer la mémoire
        }
        std::cout << "La liste a ete detruite." << std::endl;
    }
};
