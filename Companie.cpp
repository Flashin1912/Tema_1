#include <bits/stdc++.h>
#include "Companie.h"

Companie::Companie()
{
    this->nrDepartamente = 0;
}

Companie::Companie(int nrDepartamente, vector <Departament> c)
{
    this->nrDepartamente = nrDepartamente;
    this->deps = c;
}

Companie::Companie (const Companie &c)
{
    *this = c;
}

ostream& operator<<(ostream& os, Companie &c)
{
    os << "Nr departamente = " << c.nrDepartamente << endl;
    for(int i=0; i<c.nrDepartamente; i++)
        os << c.deps[i];
    return os;
}

Companie& Companie::operator=(const Companie &c)
{
    if (this == &c)
        return *this;
    this->nrDepartamente = c.nrDepartamente;
    this->deps = c.deps;
    return *this;
}

void Companie::setNrDeps(int nrDepartamente)
{
    this->nrDepartamente = nrDepartamente;
}

int Companie::getNrDeps()
{
    return this->nrDepartamente;
}

void Companie::addDep(Departament &h)
{
    deps.insert(deps.end(), h);
    nrDepartamente++;
}

Companie::~Companie()
{

}