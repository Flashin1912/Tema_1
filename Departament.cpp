#include <bits/stdc++.h>
#include "Persoana.h"
#include "Departament.h"

Departament::Departament()
{
    this->nrangajati = 0;
}

Departament::Departament(int nrangajati, vector <Persoana> a)
{
    this->nrangajati = nrangajati;
    this->angajati = a;
}

Departament::Departament (const Departament &d)
{
    *this = d;
}

std::ostream& operator<<(std::ostream &os, const Departament &d)
{
    os << "Nr angajati = " << d.nrangajati << endl;
    for (int i = 0; i<d.nrangajati; i++)
        os << d.angajati[i];
    return os;
}

Departament& Departament::operator=(const Departament &d)
{
    if (this == &d)
        return *this;
    this->angajati = d.angajati;
    this->nrangajati = d.nrangajati;
}

void Departament::setNrAngajati(int nrangajati)
{
    this->nrangajati = nrangajati;
}

int Departament::getNrAngajati()
{
    return this->nrangajati;
}

void Departament::addAngajat(Persoana &k)
{
    angajati.insert(angajati.end(), k);
    nrangajati++;
}

Departament::~Departament()
{

}