#include <iostream>
#include <string>

using namespace std;

void afficherDateEtHeure(const string& dateHeure) {
    if (dateHeure.size() != 12) {
        cout << "La chaine de caracteres doit avoir exactement 12 caracteres (JJMMAAAAHHNN)." << endl;
        return;
    }

    // Extraction des champs
    string jour = dateHeure.substr(0, 2);      // JJ
    string mois = dateHeure.substr(2, 2);      // MM
    string annee = dateHeure.substr(4, 4);     // AAAA
    string heure = dateHeure.substr(8, 2);     // HH
    string minute = dateHeure.substr(10, 2);   // NN

    // Affichage des champs
    cout << "Date : " << jour << "/" << mois << "/" << annee << endl;
    cout << "Heure : " << heure << "h" << minute << endl;
}

int main() {
    string dateHeure;

    cout << "Entrez une date et une heure sous la forme JJMMAAAAHHNN : ";
    cin >> dateHeure;

    afficherDateEtHeure(dateHeure);

    return 0;
}
