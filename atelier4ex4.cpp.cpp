#include <iostream>
#include <cmath>

class Vecteur3D {
private:
    float x, y, z;

public:
    Vecteur3D(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    // Fonction d'affichage
    void Afficher() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }

    // Somme de deux vecteurs
    Vecteur3D Somme(const Vecteur3D& autre) const {
        return Vecteur3D(x + autre.x, y + autre.y, z + autre.z);
    }

    // Produit scalaire de deux vecteurs
    float ProduitScalaire(const Vecteur3D& autre) const {
        return (x * autre.x + y * autre.y + z * autre.z);
    }

    // Vérifie si deux vecteurs ont les mêmes composantes
    bool Coincide(const Vecteur3D& autre) const {
        return (x == autre.x && y == autre.y && z == autre.z);
    }

    // Renvoie la norme du vecteur
    float Norme() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    // Renvoie le vecteur ayant la plus grande norme (valeur)
    Vecteur3D Normax(const Vecteur3D& autre) const {
        return (this->Norme() > autre.Norme()) ? *this : autre;
    }

    // Renvoie le vecteur ayant la plus grande norme (adresse)
    const Vecteur3D* NormaxAdresse(const Vecteur3D* autre) const {
        return (this->Norme() > autre->Norme()) ? this : autre;
    }

    // Renvoie le vecteur ayant la plus grande norme (référence)
    const Vecteur3D& NormaxReference(const Vecteur3D& autre) const {
        return (this->Norme() > autre.Norme()) ? *this : autre;
    }
};
