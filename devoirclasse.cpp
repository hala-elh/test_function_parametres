#include <iostream>
using namespace std
template <typename T >
class NombreComplexe {
private:
    T reel;
    T imaginaire;

public:

NombreComplexe() : reel(0), imaginaire(0) {}
NombreComplexe(Tr,Ti) :reel(r),imaginaire(i){}
    NombreComplexe(const NombreComplexe<T>& autre)
        : reel(autre.reel), imaginaire(autre.imaginaire) {}

}
void afficher () const {
    cout <<reel <<((imaginaire >=0)?"+":"-")

   <<((imaginaire>=0)? imaginaire :-imaginaire )<<"i"<<endl;
    }

  nombre complexe<T> operator +(const NombreComplexe<T>&autre )const {
   return NombreComplexe<T>(reel + autre.reel, imaginaire + autre.imaginaire);
    }  NombreComplexe(const NombreComplexe<T>& autre)




    NombreComplexe<T> operator-(const NombreComplexe<T>& autre) const {
        return NombreComplexe<T>(reel - autre.reel, imaginaire - autre.imaginaire);
    }


    NombreComplexe<T> operator*(const NombreComplexe<T>& autre) const {
        T newReel = reel * autre.reel - imaginaire * autre.imaginaire;
        T newImaginaire = reel * autre.imaginaire + imaginaire * autre.reel;
        return NombreComplexe<T>(newReel, newImaginaire);
    }


    NombreComplexe<T> operator/(const NombreComplexe<T>& autre) const {
        T denominateur = autre.reel * autre.reel + autre.imaginaire * autre.imaginaire;
        if (denominateur == 0) {
            throw runtime_error("Division par zéro!");
        }
        T newReel = (reel * autre.reel + imaginaire * autre.imaginaire) / denominateur;
        T newImaginaire = (imaginaire * autre.reel - reel * autre.imaginaire) / denominateur;
        return NombreComplexe<T>(newReel, newImaginaire);
    }

    bool operator==(const NombreComplexe<T>& autre) const {
        return (reel == autre.reel && imaginaire == autre.imaginaire);
    }

    bool operator!=(const NombreComplexe<T>& autre) const {
        return !(*this == autre);
    }

    bool operator<(const NombreComplexe<T>& autre) const {
        return (reel * reel + imaginaire * imaginaire) < (autre.reel * autre.reel + autre.imaginaire * autre.imaginaire);
    }

    bool operator>(const NombreComplexe<T>& autre) const {
        return (reel * reel + imaginaire * imaginaire) > (autre.reel * autre.reel + autre.imaginaire * autre.imaginaire);
    }

    }





