#include <iostream>
#include "Ataques.h"


Ataques::Ataques()
{
    //ctor
}

Ataques::~Ataques()
{
    //dtor
}

void Ataques::Cargar()
{
    std::cout<<"ID: "<< std::endl;
    std::cin>>idAtaque;
    std::cout<<"NOMBRE: "<< std::endl;
    std::cin>>nombre;
    std::cout<<"POTENCIA: "<< std::endl;
    std::cin>>potencia;
    std::cout<<"PRECISION: "<< std::endl;
    std::cin>>precision;
}
void Ataques::Mostrar()
{
    std::cout<<"ID: ";
    std::cout<<idAtaque<< std::endl;
    std::cout<<"NOMBRE: ";
    std::cout<<nombre<< std::endl;
    std::cout<<"POTENCIA: ";
    std::cout<<potencia<< std::endl;
    std::cout<<"PRECISION: ";
    std::cout<<precision<< std::endl;
}
int  Ataques::getIdAtaque()
{

   return idAtaque;
}


