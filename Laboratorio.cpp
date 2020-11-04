#include "Laboratorio.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
Laboratorio::Laboratorio() {}

void Laboratorio::agregarpc(const Computador &compu)
{
    computadoras.push_back(compu);
}

void Laboratorio::getcompu()
{
    //encabezado
    cout << left;
    cout << setw(20) << "Nombre"
         << "||";
    cout << setw(20) << "Procesador"
         << "||";
    cout << setw(5) << "ram"
         << "||";
    cout << setw(20) << "Sistema"
         << "||" << endl;
    //barra separadora

    for (size_t i = 0; i < computadoras.size(); i++)
    {
        Computador &compu = computadoras[i];
        cout << compu << endl;
    }
}

//pos la tabla
void Laboratorio::respaldartabla()
{
    ofstream archivo("ComputadorasTabla.txt");
    if (archivo.is_open())
    {
        archivo << left;
        archivo << setw(20) << "Nombre"
                << "||";
        archivo << setw(20) << "Procesador"
                << "||";
        archivo << setw(5) << "ram"
                << "||";
        archivo << setw(20) << "Sistema"
                << "||" << endl;
        for (int i = 0; i < computadoras.size(); i++)
        {
            Computador &compu = computadoras[i];
            archivo << compu << endl;
        }
    }

    archivo.close();
}
//repaldar normalito
void Laboratorio::respaldar()
{
    ofstream archivo("Computadoras.txt");
    if (archivo.is_open())
    {

        for (int i = 0; i < computadoras.size(); i++)
        {
            Computador &compu = computadoras[i];
            archivo << compu.getNombre() << endl;
            archivo << compu.getProcesador() << endl;
            archivo << compu.getRam() << endl;
            archivo << compu.getSistema() << endl;
        }
    }

    archivo.close();
}

void Laboratorio::recupera()
{
    ifstream archivo("Computadoras.txt");
    if (archivo.is_open())
    {
        string temporal;
        int x;

        Computador c;

        while (true)
        {
            getline(archivo, temporal);

            if (archivo.eof())
            {
                break;
            }
            c.setNombre(temporal);

            getline(archivo, temporal);
            c.setProcesador(temporal);

            getline(archivo, temporal);
            x = stoi(temporal); //string a entero
            c.setRam(x);

            getline(archivo, temporal);
            c.setSistema(temporal);

            agregarpc(c);
        }
    }

    archivo.close();
}

size_t Laboratorio::size()
{
    return computadoras.size();
}

void Laboratorio::insertar(const Computador &c, size_t pos)
{
    computadoras.insert(computadoras.begin() + pos, c);
}

void Laboratorio::inicializar(const Computador &c, size_t n)
{
    computadoras = vector<Computador>(n, c);
}

void Laboratorio::eliminar(size_t p){
    computadoras.erase(computadoras.begin()+p);
}

void Laboratorio::ordenar(){
    sort(computadoras.begin(),computadoras.end());
}

Computador* Laboratorio::buscar(const Computador& c){
auto it =find(computadoras.begin(),computadoras.end(),c);
if(it==computadoras.end()){
    return nullptr;
}else{
    //accede a la direccion de memoria y me regresa desreferenciandola
    return &(*it);
}
}