#include <iostream>
#include "FuncionesGlobales.h"

void menuAtaques()
{
    Ataques ata;
    int opc;
    while(true)
    {
        system("cls");
        std::cout<<"------MENU ATAQUES--------"<<  std::endl;
        std::cout<<"1. AGREGAR REGISTRO"<<  std::endl;
        std::cout<<"2. MOSTRAR REGISTRO"<<  std:: endl;
          std:: cout<<"3. CREAR REGISTRO (SOLO UNA VEZ)"<<  std::endl;
          std:: cout<<"0. FIN DEL PROGRAMA"<<  std:: endl;
          std:: cout<<"OPCION: "<<  std:: endl;
          std:: cin>>opc;
        system("cls");
        switch(opc)
        {
        case 1:
            ata.Cargar();
            if(grabarRegistro(ata)==1)
                  std::cout<<"REGISTRO AGREGADO";
            else
                  std::cout<<"NO SE PUDO AGREGAR EL REGISTRO";
            break;
        case 2:
            leerRegistroAta();
            break;
        case 3:
            ata.Cargar();
            creacionRegistro(ata);
            break;
        case 0:
            return ;
            break;
        }
          std::cout<<  std::endl;
        system("pause");
    }
      std::cout<<std::endl;
    system("pause");
    return;

}
void creacionRegistro(Ataques aux)
{
    FILE * pAta;
    pAta=fopen("ataques.dat", "wb");
    if(pAta==NULL)
    {
        std::cout<<"ERROR DE ARCHIVO";
        system("pause");
        return;
    }
    fwrite(&aux, sizeof aux, 1, pAta);

    fclose(pAta);
}
int grabarRegistro(Ataques aux)
{
    FILE * pAta;
    pAta=fopen("ataques.dat", "ab");
    if(pAta==NULL)
    {
        std::cout<<"ERROR DE ARCHIVO";
        system("pause");
        return -1;
    }
    int grabo=fwrite(&aux, sizeof aux, 1, pAta);

    fclose(pAta);
    return grabo;
}
void leerRegistroAta()
{
    FILE * pAta;
    Ataques aux;
    pAta=fopen("ataques.dat", "rb");
    if(pAta==NULL)
    {
        std::cout<<"ERROR DE ARCHIVO";
        system("pause");
        return;
    }
    while(fread(&aux, sizeof aux, 1, pAta)==1)
    {
        aux.Mostrar();
        std::cout<<std::endl;
    }

    fclose(pAta);
}
