#include<iostream>
#include "Pokemon.h"
#include "Ataque.h"
#include<cstdlib>
#include<cstring>




void Pokemon::Cargar(){
    int ataque1, ataque2,ataque3;


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
    setAtaque(this->getAtaqueArchivo(ataque1),0);
    std::cout<<"ATAQUE 2: "<<std::endl;
    std::cin>>ataque2;
   setAtaque(this->getAtaqueArchivo(ataque1),1);
    std::cout<<"ATAQUE 3: "<<std::endl;
    std::cin>>ataque3;
     setAtaque(this->getAtaqueArchivo(ataque1),3);
    //ATAQUE 4 SIEMPRE VA A SER PLACAJE
    std::cout<<"ATAQUE 4: "<<std::endl;

      setAtaque(this->getAtaqueArchivo(ataque1),4);
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

    ataquesPokemon[0].Mostrar();
    std::cout<<"ID ATAQUE 2: ";
    ataquesPokemon[1].Mostrar();
    std::cout<<"ID ATAQUE 3: ";
    ataquesPokemon[2].Mostrar();
    std::cout<<"ID ATAQUE 4: ";
   ataquesPokemon[3].Mostrar();

}
int  Pokemon::getIdPokemon(){
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

    pPokemon=fopen("pokemones.dat", "rb");

    if(pPokemon==NULL)
    {
        std::cout<<"ERROR DE ARCHIVO";

        return false;
    }
      fseek(pPokemon,sizeof (Pokemon)*pos,0);
    bool leyo=(fread(this, sizeof (Pokemon), 1, pPokemon));

    fclose(pPokemon);
    return leyo;
}

bool Pokemon::grabarPokemonEnDisco()
{
    FILE * pPokemon;
    Pokemon aux;
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

Ataque Pokemon::getAtaqueArchivo(int idAtaques){

    Ataque aux;
    int pos=0;
    while(aux.leerRegistroAtaque(pos++)){

        if(aux.getIdAtaque()==idAtaques){
            return aux;
        }
    }



}

void  Pokemon::setAtaque(Ataque aux, int pos){

        ataquesPokemon[pos]=aux;
        return;

}
