#include <bits/stdc++.h>

#include "Persoana.h"

Persoana::Persoana() //constructor implicit
{
    this->varsta = 20;
    this->nume = "Alex";
    this->prenume = "Gabriel";
    this->salariu = 0;
}

Persoana::Persoana(const Persoana &p) //constructor de copiere
{
    *this = p;
}

Persoana::Persoana(int varsta, std::string nume, std::string prenume) //constructor de initializare
{
    this->varsta = varsta;
    this->nume = nume;
    this->prenume = prenume;
    this->salariu = 0;
}

Persoana::Persoana(int varsta, std::string nume, std::string prenume, int salariu) //  -||-
{
    this->varsta = varsta;
    this->nume = nume;
    this->prenume = prenume;
    this->salariu = salariu;
}

std::ostream& operator<< (ostream &os,const Persoana &p) //operator de afisare
{
    os << p.nume << " " << p.prenume << " "<< p.varsta << " " << p.salariu << std::endl;
    return os;
}

Persoana& Persoana::operator= (const Persoana &p) //operator de copiere
{
    
    if (this == &p)
        return *this;

    this->varsta = p.varsta;
    this->nume = p.nume;
    this->prenume = p.prenume;
    this->salariu = p.salariu;

    return *this;
}

void Persoana::setVarsta(int val)
{
    this->varsta = val;
}

int Persoana::getVarsta()
{
    return this->varsta;
}

void Persoana::setNume(std::string val)
{
    this->nume = val;
}

std::string Persoana::getNume()
{
    return this->nume;
}

void Persoana::setPrenume(std::string val)
{
    this->prenume = val;
}

std::string Persoana::getPrenume()
{
    return this->prenume;
}

void Persoana::setSalariu(int val)
{
    this->salariu = val;
}

int Persoana::getSalariu()
{
    return this->salariu;
}

Persoana::~Persoana() //destructor
{
    
} 