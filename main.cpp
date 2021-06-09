#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList lista;
    /*
    int opc {0};
    std::cout << "***Estructura de Datos: Lista Simplemente Enlazada***" << std::endl << std::endl;

    while(opc != 5)
    {
        std::cout << "Que es lo que deseas hacer ahora?:" << std::endl;
        std::cout << "1) Insertar un nodo al final de la lista" << std::endl;
        std::cout << "2) Insertar un nodo dado una posicion de la lista" << std::endl;
        std::cout << "3) Eliminar un elemento de la lista dada su posicion" << std::endl;
        std::cout << "4) Reiniciar la lista" << std::endl;
        std::cout << "5) Salir" << std::endl;
        std::cout << "Opcion: ";
        std::cin >> opc;

        switch(opc)
        {
        case 1:
        {
            Node n;
            int elem;
            std::cout << "Ingrese valor del nodo: ";
            std::cin >> elem;
            n.set_elem(elem);
            lista.push_back(n);
            std::cout << lista << std::endl;
            break;
        }
        case 2:
        {
            Node n;
            int elem,pos;
            std::cout << "Ingrese valor del nodo: ";
            std::cin >> elem;
            std::cout << "Ingrese posicion: ";
            std::cin >> pos;
            n.set_elem(elem);
            lista.insert(n,pos);
            std::cout << lista << std::endl;
            break;
        }
        case 3:
        {
            int pos;
            std::cout << "Ingrese posicion: ";
            std::cin >> pos;
            lista.remove(pos);
            std::cout << lista << std::endl;
            break;
        }
        case 4:
        {
            lista.clear();
            std::cout << "Se ha reiniciado la lista enlazada!" << std::endl;
            break;
        }
        }
    }
    */
   
   Node a(13),b(5),c(1),d(65),e(23),f(44);
   lista.insert(a);
   std::cout << lista << std::endl;
   lista.insert(b);
   lista.insert(e);
   lista.insert(f);
   lista.insert(c);
   std::cout << lista << std::endl;

   lista.remove(0);
   

   std::cout << lista << std::endl;
   
    return 0;
}