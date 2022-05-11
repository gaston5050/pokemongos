#include<iostream>
#include "Pokemon.h"
#include<cstdlib>
#include<cstring>




void Pokemon::Cargar(){
    bool ata1, ata2, ata3;
    std::cout<<"ID: "<<std::endl;
    std::cin>>idPokemon;
    std::cout<<"NOMBRE: "<<std::endl;
    std::cin>>nombre;
    std::cout<<"VIDA: "<<std::endl;
    std::cin>>vida;
    std::cout<<"DEFENSA: "<<std::endl;
    std::cin>>defensa;
    std::cout<<"ATAQUE 1: "<<std::endl;

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

}
const char Pokemon::getIdPokemon(){
    return *idPokemon;
}
/*const  char Pokemon::getAtaque(int aux){
    switch(aux){
        case '1': return *ataque1;
                break;
        case '2': return *ataque2;
                break;
        case '3': return *ataque3;
                break;
        }
}*/
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
