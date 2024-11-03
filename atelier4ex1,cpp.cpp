#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    //  saisir et afficher les nombres complexes
    void input() {
        cout << "Partie r�elle: ";
        cin >> real;
        cout << "Partie imaginaire: ";
        cin >> imag;
    }

    void display() const {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;
    }

    // Op�rations arithm�tiques
    Complex operator + (const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator - (const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator * (const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    Complex operator / (const Complex& other) const {
        double denom = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denom,
                       (imag * other.real - real * other.imag) / denom);
    }

    // Comparaison d'�galit�
    bool operator == (const Complex& other) const {
        return real == other.real && imag == other.imag;
    }
};

int main() {
    Complex c1, c2, result;
    int choice;

    cout << "Entrez le premier nombre complexe:" << endl;
    c1.input();
    cout << "Entrez le deuxi�me nombre complexe:" << endl;
    c2.input();

    do {
        cout << "\nChoisissez une op�ration:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Soustraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. V�rifier l'�galit�" << endl;
        cout << "6. Quitter" << endl;
        cout << "Votre choix: ";
        cin >> choice;

        switch (choice) {
            case 1:
                result = c1 + c2;
                cout << "R�sultat de l'addition: ";
                result.display();
                break;
            case 2:
                result = c1 - c2;
                cout << "R�sultat de la soustraction: ";
                result.display();
                break;
            case 3:
                result = c1 * c2;
                cout << "R�sultat de la multiplication: ";
                result.display();
                break;
            case 4:
                if (c2 == Complex(0, 0)) {
                    cout << "Erreur: Division par z�ro!" << endl;
                } else {
                    result = c1 / c2;
                    cout << "R�sultat de la division: ";
                    result.display();
                }
                break;
            case 5:
                if (c1 == c2) {
                    cout << "Les nombres complexes sont �gaux." << endl;
                } else {
                    cout << "Les nombres complexes ne sont pas �gaux." << endl;
                }
                break;
            case 6:
                cout << "Fin du programme." << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez r�essayer." << endl;
        }
    } while (choice != 6);

    return 0;
}
