#include <iostream>
#include <string>

class Personne {
private:
    std::string nom;
    std::string prenom;
    std::string dateNaissance;

public:
    // Constructor
    Personne(const std::string& nom, const std::string& prenom, const std::string& dateNaissance)
        : nom(nom), prenom(prenom), dateNaissance(dateNaissance) {}

    virtual void Afficher() const {
        std::cout << "Nom: " << nom << ", Prenom: " << prenom << ", Date de naissance: " << dateNaissance << std::endl;
    }
};

class Employe : public Personne {
private:
    double salaire;

public:
    // Constructor
    Employe(const std::string& nom, const std::string& prenom, const std::string& dateNaissance, double salaire)
        : Personne(nom, prenom, dateNaissance), salaire(salaire) {}

    // Overridden method
    void Afficher() const override {
        Personne::Afficher(); // Call base class method
        std::cout << "Salaire: " << salaire << std::endl;
    }
};

class Chef : public Employe {
private:
    std::string service;

public:
    // Constructor
    Chef(const std::string& nom, const std::string& prenom, const std::string& dateNaissance, double salaire, const std::string& service)
        : Employe(nom, prenom, dateNaissance, salaire), service(service) {}

    // Overridden method
    void Afficher() const override {
        Employe::Afficher(); // Call base class method
        std::cout << "Service: " << service << std::endl;
    }
};

class Directeur : public Chef {
private:
    std::string societe;

public:
    // Constructor
    Directeur(const std::string& nom, const std::string& prenom, const std::string& dateNaissance, double salaire, const std::string& service, const std::string& societe)
        : Chef(nom, prenom, dateNaissance, salaire, service), societe(societe) {}

    // Overridden method
    void Afficher() const override {
        Chef::Afficher(); // Call base class method
        std::cout << "Societe: " << societe << std::endl;
    }
};
