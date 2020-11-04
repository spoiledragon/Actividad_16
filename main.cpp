#include <iostream>
#include "Computadora.h"
#include "Laboratorio.h"
using namespace std;
Laboratorio Lab1;
int main()
{

  string opc;
  do
  {
    cout << "1) Agregar computadora" << endl;
    cout << "2) Mostrar computadoras" << endl;
    cout << "3) Respaldar" << endl;
    cout << "4) Recuperar" << endl;
    cout << "5) Insertar en pos" << endl;
    cout << "6) inicializar" << endl;
    cout << "7) borrar" << endl;
    cout << "8) ordenar" << endl;
    cout << "0) Salir" << endl;
    getline(cin, opc);
  cin.ignore();
    if (opc == "1")
    {
      Computador c1;
      cin >> c1;
      Lab1.agregarpc(c1);
      cin.ignore();
    }

    else if (opc == "2")
    {
      Lab1.getcompu();
    }

    else if (opc == "3")
    {
      Lab1.respaldar();
    }

    else if (opc == "4")
    {
      Lab1.recupera();
    }

    else if (opc == "5")
    {
      Computador c1;
      cin >> c1;
      size_t pos;
      cout << "En que posicion quieres insertar" << endl;
      cin >> pos;
      cin.ignore();
      if (pos >= Lab1.size())
      {
        cout << "posicion invalida" << endl;
        system("PAUSE");
      }
      else
      {
        Lab1.insertar(c1, pos);
      }
    }

    else if (opc == "6")
    {
      Computador c1;
      cin >> c1;
      size_t n;
      cout << "cuantas veces lo vas a querer" << endl;
      cin >> n;
      cin.ignore();
      Lab1.inicializar(c1, n);
    }

    else if (opc == "7")
    {

      size_t n;
      cout << "que posicion quiere borrar" << endl;
      cin >> n;
      cin.ignore();
      if (n >= Lab1.size())
      {
        cout << "La posicion es invalida" << endl;
      }
      else
      {
        Lab1.eliminar(n);
      }
    }

    else if(opc=="8")
    {
      Lab1.ordenar();
    }
    

    else if (opc == "0")
    {
      break;
    }

  } while (true);

  return 0;
}
