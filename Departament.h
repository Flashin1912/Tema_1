#ifndef DEPARTAMENT_H

#define DEPARTAMENT_H
#include <bits/stdc++.h>
#include"Persoana.h"
using namespace std;

class Departament
{
    private:
        int nrangajati;
        vector <Persoana> angajati;
    public:
        Departament();

        Departament(int nrangajati, vector <Persoana> a);

        Departament (const Departament &d);

        friend ostream &operator<<(ostream &os, const Departament &d);

        Departament& operator=(const Departament &d);

        void setNrAngajati(int nrangajati);

        int getNrAngajati();

        void addAngajat(Persoana &k);

        ~Departament();
};

#endif