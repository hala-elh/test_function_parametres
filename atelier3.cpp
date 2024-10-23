#include <iostream>
#include <string>

using namespace std;

class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // Constructeur par défaut
    Voiture()
        : marque("Inconnu"), modele("Inconnu"), annee(0), kilometrage(0.0), vitesse(0.0) {}

    // Constructeur avec paramètres
    Voiture(const string& m, const string& mod, int an, float km, float vit)
        : marque(m), modele(mod), annee(an), kilometrage(km), vitesse(vit) {}

    // accélérer
    void accelerer(float valeur) {
        vitesse += valeur;
    }

    // Méthode pour freiner
    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) {
            vitesse = 0;
        }
    }

    // Méthode pour afficher les informations sur la voiture
    void afficherInfo() const {
        cout << "Marque: " << marque << "\n"
             << "Modele: " << modele << "\n"
             << "Annee: " << annee << "\n"
             << "Kilometrage: " << kilometrage << " km\n"
             << "Vitesse: " << vitesse << " km/h\n";
    }

    // avancer
    void avancer(float distance) {
        kilometrage += distance;
    }

    // Destructeur
    ~Voiture() {
        cout << "La voiture " << marque << " " << modele << " est detruite.\n";
    }
};

int main() {
    // Exemple d'utilisation de la classe Voiture
    Voiture maVoiture("Ford", "Focus", 2022, 5000, 0);
    maVoiture.afficherInfo();

    maVoiture.accelerer(60);
    cout << "Apres acceleration:\n";
    maVoiture.afficherInfo();

    maVoiture.avancer(150);
    cout << "Apres avoir avance:\n";
    maVoiture.afficherInfo();

    maVoiture.freiner(30);
    cout << "Apres freinage:\n";
    maVoiture.afficherInfo();

    return 0;
}
