#include <iostream>
#include <string>
using namespace std;

// Classe m�re Animal
class Animal {
protected:
    string nom;
    int age;

public:
    // Fonction pour d�finir les valeurs de nom et d'�ge
    void set_value(string n, int a) {
        nom = n;
        age = a;
    }

    // M�thode virtuelle pour afficher les informations
    virtual void display_info() const = 0; // M�thode virtuelle pure
};

// Sous-classe Zebra
class Zebra : public Animal {
public:
    // Affiche les informations sp�cifiques au z�bre
    void display_info() const override {
        cout << "Nom: " << nom << ", Age: " << age << " ans." << endl;
        cout << "Le z�bre vient des plaines d'Afrique." << endl;
    }
};

// Sous-classe Dolphin
class Dolphin : public Animal {
public:
    // Affiche les informations sp�cifiques au dauphin
    void display_info() const override {
        cout << "Nom: " << nom << ", Age: " << age << " ans." << endl;
        cout << "Le dauphin est originaire des oc�ans et des mers." << endl;
    }
};

int main() {
    // Cr�ation d'une instance de type Zebra
    Zebra z;
    z.set_value("Ziggy", 5); // D�finir nom et �ge pour Zebra
    cout << "Informations pour le z�bre:" << endl;
    z.display_info();

    cout << endl;

    // Cr�ation d'une instance de type Dolphin
    Dolphin d;
    d.set_value("Dolly", 8); // D�finir nom et �ge pour Dolphin
    cout << "Informations pour le dauphin:" << endl;
    d.display_info();

    return 0;
}
