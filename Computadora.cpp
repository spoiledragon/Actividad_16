#include "Computadora.h"
#include <string>
    using namespace std;

    Computador::Computador(){}
    Computador::Computador(const string &p, const string &s, const string &n,const int &r){
        procesador=p;
        sistema=s;
        nombre=n;
        ram=r;
    }

    void Computador::setProcesador(const string&p){procesador=p;}
    void Computador::setSistema(const string&s){sistema=s;}
    void Computador::setRam(const int&r){ram=r;}
    void Computador::setNombre(const string& n){nombre=n;}

    string Computador::getNombre()       const {return nombre;}
    string Computador::getProcesador()   const {return procesador;}
    string Computador::getSistema()      const {return sistema;}
    int Computador::getRam()             const {return ram;}
