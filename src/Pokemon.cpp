#include<iostream>
#include "Pokemon.h"
#include "Ataque.h"
#include<cstdlib>
#include<cstring>




void Pokemon::Cargar(){
    int ataque1, ataque2,ataque3;
    Ataque aux;

    //CREAMOS EL POKEMON
    std::cout<<"ID: "<<std::endl;
    std::cin>>idPokemon;
    std::cout<<"NOMBRE: "<<std::endl;
    std::cin>>nombre;
    std::cout<<"VIDA: "<<std::endl;
    std::cin>>vida;
    std::cout<<"DEFENSA: "<<std::endl;
    std::cin>>defensa;
    //ELEGIMOS LOS ATAQUES DESDE EL ARCHIVO DE ATAQUES
    std::cout<<"ATAQUE 1: "<<std::endl;
    std::cin>>ataque1;
    //SETEAMOS UNO POR UNO LAS POSICIONES DEL VECTOR DE ATAQUES DE POKEMON
    this->ataquesPokemon[0]=aux.getAtaqueDeArchivo(ataque1-1);
    std::cout<<"ATAQUE 2: "<<std::endl;
    std::cin>>ataque2;
    this->ataquesPokemon[1]=aux.getAtaqueDeArchivo(ataque2-1);
    std::cout<<"ATAQUE 3: "<<std::endl;
    std::cin>>ataque3;
   this->ataquesPokemon[2]=aux.getAtaqueDeArchivo(ataque3-1);
    //ATAQUE 4 SIEMPRE VA A SER PLACAJE
    std::cout<<"ATAQUE 4: "<<std::endl;

    this->ataquesPokemon[3]=aux.getAtaqueDeArchivo(0);
    //SETEO LOS ATAQUES DESDE EL ARCHIVO




}

void Pokemon::Mostrar(){

    std::cout<<"ID: ";
    std::cout<<idPokemon<<std::endl;
    std::cout<<"NOMBRE: ";
    std::cout<<nombre<<std::endl;
    std::cout<<"VIDA: ";
    std::cout<<vida<<std::endl;
    std::cout<<"DEFENSA: ";
    std::cout<<defensa<<std::endl;
    std::cout<<"ID ATAQUE 1: ";

    std::cout<<"ID ATAQUE 2: ";
    std::cout<<"ID ATAQUE 3: ";
    std::cout<<"ID ATAQUE 4: ";

}
const char* Pokemon::getIdPokemon(){
    return idPokemon;
}

int Pokemon::getDefensa(){
    return defensa;
    }
Pokemon::Pokemon()
{
    //ctor
}

Pokemon::~Pokemon()
{
    //dtor
}


bool  Pokemon::leerRegistroPokemon(int pos)
{
    FILE * pPokemon;
    Pokemon aux;
    pPokemon=fopen("ataques.dat", "rb");
    if(pPokemon==NULL)
    {
        std::cout<<"ERROR DE ARCHIVO";
        system("pause");
        return false;
    }
    while(fread(&aux, sizeof aux, 1, pPokemon)==1)
    {
        aux.Mostrar();
        std::cout<<std::endl;
    }

    fclose(pPokemon);
}

bool Pokemon::grabarPokemonEnDisco(Pokemon aux)
{
    FILE * pPokemon;
    pPokemon=fopen("pokemones.dat", "ab");
    if(pPokemon==NULL)
    {
        std::cout<<"ERROR DE ARCHIVO";
        system("pause");
        return -1;
    }
    int grabo=fwrite(&aux, sizeof aux, 1,pPokemon);

    fclose(pPokemon);
    return grabo;
}
