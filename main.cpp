#include <bits/stdc++.h>

using namespace std;

class Persoana{
    private:
        int varsta;
        string nume;
        string prenume;
        int salariu;
    public:
        Persoana() //constructor implicit
        {
            this->varsta = 20;
            this->nume = "Alex";
            this->prenume = "Gabriel";
            this->salariu = 0;
        }
        
        Persoana(const Persoana &p) //constructor de copiere
        {
            *this = p;
        }

        Persoana(int varsta, string nume, string prenume) //constructor de initializare
        {
            this->varsta = varsta;
            this->nume = nume;
            this->prenume = prenume;
            this->salariu = 0;
        }

        Persoana(int varsta, string nume, string prenume, int salariu) //  -||-
        {
            this->varsta = varsta;
            this->nume = nume;
            this->prenume = prenume;
            this->salariu = salariu;
        }

        friend ostream& operator<< (ostream &os, const Persoana &p) //operator de afisare
        {
            os << p.nume << " " << p.prenume << " "<< p.varsta << " " << p.salariu << endl;
            return os;
        }

        Persoana& operator= (const Persoana &p) //operator de copiere
        {
            
            if (this == &p)
                return *this;

            this->varsta = p.varsta;
            this->nume = p.nume;
            this->prenume = p.prenume;
            this->salariu = p.salariu;
 
            return *this;
        }

        void setVarsta(int val)
        {
            this->varsta = val;
        }

        int getVarsta()
        {
            return this->varsta;
        }

        void setNume(string val)
        {
            this->nume = val;
        }

        string getNume()
        {
            return this->nume;
        }

        void setPrenume(string val)
        {
            this->prenume = val;
        }

        string getPrenume()
        {
            return this->prenume;
        }

        void setSalariu(int val)
        {
            this->salariu = val;
        }

        int getSalariu()
        {
            return this->salariu;
        }

        ~Persoana() //destructor
        {
            
        } 
};

class Departament
{
    private:
        int nrangajati;
        vector <Persoana> angajati;
    public:
        Departament()
        {
            this->nrangajati = 0;
        }

        Departament(int nrangajati, vector <Persoana> a)
        {
            this->nrangajati = nrangajati;
            this->angajati = a;
        }

        Departament (const Departament &d)
        {
            *this = d;
        }

        friend ostream &operator<<(ostream &os, const Departament &d)
        {
            os << "Nr angajati = " << d.nrangajati << endl;
            for (int i = 0; i<d.nrangajati; i++)
                os << d.angajati[i];
            return os;
        }

        Departament& operator=(const Departament &d)
        {
            if (this == &d)
                return *this;
            this->angajati = d.angajati;
            this->nrangajati = d.nrangajati;
        }

        void setNrAngajati(int nrangajati)
        {
            this->nrangajati = nrangajati;
        }

        int getNrAngajati()
        {
            return this->nrangajati;
        }

        void addAngajat(Persoana &k)
        {
            angajati.insert(angajati.end(), k);
            nrangajati++;
        }

        ~Departament()
        {

        }
};

class Companie //gen Apple
{
    private:
        int nrDepartamente;
        vector <Departament> deps;
    public:
        Companie()
        {
            this->nrDepartamente = 0;
        }

        Companie(int nrDepartamente, vector <Departament> c)
        {
            this->nrDepartamente = nrDepartamente;
            this->deps = c;
        }

        Companie (const Companie &c)
        {
            *this = c;
        }

        friend ostream& operator<<(ostream& os, Companie &c)
        {
            os << "Nr departamente = " << c.nrDepartamente << endl;
            for(int i=0; i<c.nrDepartamente; i++)
                os << c.deps[i];
            return os;
        }

        Companie& operator=(const Companie &c)
        {
            if (this == &c)
                return *this;
            this->nrDepartamente = c.nrDepartamente;
            this->deps = c.deps;
            return *this;
        }

        void setNrDeps(int nrDepartamente)
        {
            this->nrDepartamente = nrDepartamente;
        }

        int getNrDeps()
        {
            return this->nrDepartamente;
        }

        void addDep(Departament &h)
        {
            deps.insert(deps.end(), h);
            nrDepartamente++;
        }

        ~Companie()
        {

        }
};

int main()
{
    int varsta = 20;
    string nume = "Alexutu";
    string prenume = "Discord";
    int salariu = 100;
    Persoana O(varsta, nume, prenume, salariu);
    Persoana K(30, "Dan", "Dann", 4000);
    Persoana T(25, "Tiu", "jigan", 500);
    Departament B;
    B.addAngajat(O);
    Departament A;
    A.addAngajat(K);
    A.addAngajat(T);
    Companie Sansunc;
    Sansunc.addDep(A);
    Sansunc.addDep(B);
    cout<<Sansunc;
    return 0;
}