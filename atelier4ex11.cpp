#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

class Traitement {
private:
    vector<int> vecteur;

public:
    void Initialise() {
        int nombre;
        while (vecteur.size() < 15) {
            cout << "Veuillez saisir un entier pair non nul : ";
            cin >> nombre;

            // Vérification de la validité de l'entrée
            if (cin.fail() || nombre == 0 || nombre % 2 != 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorer l'entrée invalide
                cout << "Entrée invalide. Veuillez réessayer.\n";
            } else {
                vecteur.push_back(nombre);
            }
        }
    }

    void show() const {
        showRecursif(0);
    }

    double moyenne() const {
        if (vecteur.empty()) return 0.0;
        double somme = 0.0;
        for (int num : vecteur) {
            somme += num;
        }
        return somme / vecteur.size();
    }

    double median() const {
        if (vecteur.empty()) return 0.0;
        vector<int> temp = vecteur;
        sort(temp.begin(), temp.end());

        size_t taille = temp.size();
        if (taille % 2 == 0) {
            return (temp[taille / 2 - 1] + temp[taille / 2]) / 2.0;
        } else {
            return temp[taille / 2];
        }
    }

private:
    void showRecursif(size_t index) const {
        if (index < vecteur.size()) {
            cout << vecteur[index] << endl;
            showRecursif(index + 1);
        }
    }
};

int main() {
    Traitement traitement;
    traitement.Initialise();
    cout << "Les éléments du vecteur sont :\n";
    traitement.show();
    cout << "Moyenne : " << traitement.moyenne() << endl;
    cout << "Médiane : " << traitement.median() << endl;

    return 0;
}
