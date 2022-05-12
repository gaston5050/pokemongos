#include <iostream>
#include "Ataque.h"
#include "Pokemon.h"


Ataque::Ataque()
{
    //ctor
}

Ataque::~Ataque()
{
    //dtor
}

void Ataque::Cargar()
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
void Ataque::Mostrar()
{
    std::cout<<"ID: "<<"\t"<<idAtaque<<"\t"<<"NOMBRE: "<<"\t"<<nombre<< "\t"<<"POTENCIA: "<<potencia<< "\t"<<"PRECISION: ";
    std::cout<<precision<< std::endl;
}

bool  Ataque::leerRegistroAtaque(int pos)
{
    FILE * pAtaque;


    pAtaque=fopen("ataques.dat", "rb");
    if(pAtaque==NULL)
    {
        std::cout<<"ERROR DE ARCHIVO";

        return false;
    }
    fseek(pAtaque,sizeof (Ataque)*pos,0);
   bool leyo=fread(this, sizeof (Ataque), 1, pAtaque);



    fclose(pAtaque);

    return leyo;
}

void Ataque::menuAtaques()
{
    // Creamos variable auxiliar Ataque para generar registro para grabar
    Ataque aux;

    int opc;

    while(true)
    {
        system("cls");
        std::cout<<"------MENU ATAQUES--------"<<  std::endl;
        std::cout<<"1. AGREGAR REGISTRO"<<  std::endl;
        std::cout<<"2. MOSTRAR REGISTRO"<<  std:: endl;
        //std:: cout<<"3. CREAR REGISTRO (SOLO UNA VEZ)"<<  std::endl;

        std:: cout<<"0. FIN DEL PROGRAMA"<<  std:: endl;
        std:: cout<<"OPCION: "<<  std:: endl;
        std:: cin>>opc;
        system("cls");
        switch(opc)
        {
        case 1:
            aux.Cargar();
            if(aux.grabarRegistroAtaque()==1)
                std::cout<<"REGISTRO AGREGADO";
            else
                std::cout<<"NO SE PUDO AGREGAR EL REGISTRO";
            break;
        case 2:
{


            int pos=0;
            Ataque reg;

            reg.leerRegistroAtaque(pos++);



            }

            break;
        case 3:



            break;

        std::cout<<  std::endl;
        system("pause");
    }
    std::cout<<std::endl;
    system("pause");
    return;

}
}
bool Ataque::grabarRegistroAtaque()
{

    FILE * pAtaque;
    pAtaque=fopen("ataques.dat", "ab");
    if(pAtaque==NULL)
    {
        std::cout<<"ERROR DE ARCHIVO";
        system("pause");
        return -1;
    }
    bool grabo=fwrite(this, sizeof (Ataque), 1, pAtaque);

    fclose(pAtaque);
    return grabo;
}

    int Ataque::getIdAtaque() { return idAtaque;}
    int Ataque::getPotencia(){return potencia;}
    int Ataque::getPrecision(){return precision;}



