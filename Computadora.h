#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
class Computador
{

private:
    std::string procesador;
    std::string sistema;
    std::string nombre;
    int ram;

public:
    //getters
    Computador();
    Computador(const std::string &procesador, const std::string &So, const std::string &Nombre, const int &ram);
    //setters
    void setProcesador(const std::string &);
    void setSistema(const std::string &);
    void setRam(const int &);
    void setNombre(const std::string &);

    std::string getProcesador() const;
    std::string getNombre() const;
    std::string getSistema() const;
    int getRam() const;

    friend std::ostream &operator<<(std::ostream &out, const Computador &co)
    {
        out << left;
        out << setw(20) << co.nombre << "||";
        out << setw(20) << co.procesador << "||";
        out << setw(5) << co.ram << "||";
        out << setw(20) << co.sistema << "||";
        return out;
    }

    friend std::istream &operator>>(std::istream &in, Computador &co)
    {
        string temp;
        cout << "Nombre: " << endl;
        getline(cin, co.nombre);

        cout << "Procesador: " << endl;
        getline(cin, co.procesador);

        cout << "Cantidad de Ram:" << endl;
        cin >> co.ram;

        cout << "Sistema Operativo: " << endl;
        fflush(stdin);
        getline(cin, co.sistema);
    }

    bool operator<(const Computador &c1)
    {
        return nombre < c1.nombre;
    }
    bool operator<(const Computador &c1)const
    {
        return nombre < c1.nombre;
    }
    bool operator>(const Computador &c1)
    {
        return nombre > c1.nombre;
    }
    bool operator>(const Computador &c1) const
    {
        return nombre > c1.nombre;
    }
};

#endif
