#ifndef LABORATORIO_H_INCLUDED
#define LABORATORIO_H_INCLUDED
#include "Computadora.h"
#include <iostream>
#include <vector>

class Laboratorio{
private:
    vector<Computador>computadoras;
public:
    Laboratorio();
    void getcompu();
    void agregarpc(const Computador& compu);
    void respaldartabla();
    void respaldar();
    void recupera();
    //actividad 16
    void insertar(const Computador &c,size_t pos);
    size_t size();
    void inicializar(const Computador &c,size_t n);
    void eliminar(size_t p);
    void ordenar();
    Computador* buscar(const Computador &c);

    friend Laboratorio& operator<<(Laboratorio &lab, const Computador &c)
    {
        lab.agregarpc(c);

        return lab;
    }
};

#endif // LABORATORIO_H_INCLUDED
