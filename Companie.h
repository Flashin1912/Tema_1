#ifndef COMPANIE_H

#define COMPANIE_H
#include <bits/stdc++.h>
#include "Departament.h"

using namespace std;


class Companie
{
    private:
        int nrDepartamente;
        vector <Departament> deps;
    public:
        Companie();

        Companie(int nrDepartamente, vector <Departament> c);

        Companie (const Companie &c);

        friend ostream& operator<<(ostream& os, Companie &c);

        Companie& operator=(const Companie &c);

        void setNrDeps(int nrDepartamente);

        int getNrDeps();

        void addDep(Departament &h);

        ~Companie();
};
#endif