#ifndef PERSOANA_H

#define PERSOANA_H
#include <bits/stdc++.h>
using namespace std;

class Persoana{
    private:
        int varsta;
        string nume;
        string prenume;
        int salariu;
    public:
        Persoana();
        
        Persoana(const Persoana &p) ;

        Persoana(int varsta, string nume, string prenume);

        Persoana(int varsta, string nume, string prenume, int salariu);

        friend ostream& operator<< (ostream &os, const Persoana &p) ;

        Persoana& operator= (const Persoana &p);

        void setVarsta(int val);

        int getVarsta();

        void setNume(string val);

        string getNume();

        void setPrenume(string val);

        string getPrenume();

        void setSalariu(int val);

        int getSalariu();

        ~Persoana() ;
};



#endif