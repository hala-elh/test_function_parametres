#include <iostream>
#include <string>
using namespace std;

// Classe mère Animal
class Animal {
protected:
    string nom;
    int age;

public:
    // Fonction pour définir les valeurs de nom et d'âge
    void set_value(string n, int a) {
        nom = n;
        age = a;
    }

    // Méthode virtuelle pour afficher les informations
    virtual void display_info() const = 0; // Méthode virtuelle pure
};

// Sous-classe Zebra
class Zebra : public Animal {
public:
    // Affiche les informations spécifiques au zèbre
    void display_info() const override {
        cout << "Nom: " << nom << ", Age: " << age << " ans." << endl;
        cout << "Le zèbre vient des plaines d'Afrique." << endl;
    }
};

// Sous-classe Dolphin
class Dolphin : public Animal {
public:
    // Affiche les informations spécifiques au dauphin
    void display_info() const override {
        cout << "Nom: " << nom << ", Age: " << age << " ans." << endl;
        cout << "Le dauphin est originaire des océans et des mers." << endl;
    }
};

int main() {
    // Création d'une instance de type Zebra
    Zebra z;
    z.set_value("Ziggy", 5); // Définir nom et âge pour Zebra
    cout << "Informations pour le zèbre:" << endl;
    z.display_info();

    cout << endl;

    // Création d'une instance de type Dolphin
    Dolphin d;
    d.set_value("Dolly", 8); // Définir nom et âge pour Dolphin
    cout << "Informations pour le dauphin:" << endl;
    d.display_info();

    return 0;
}
