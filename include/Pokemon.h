#ifndef POKEMON_H
#define POKEMON_H
#include "Ataque.h"


class Pokemon
{
public:
    Pokemon();
    ~Pokemon();
    void Cargar();
    void Mostrar();
    //gets
    const char*  getIdPokemon();

    int getDefensa();
    int getVida();


    //sets
    void setId(int);
    void setNombre(const char*);
    void setAtaque(int);
    void setVida(int);

    //metodos
     bool  leerRegistroPokemon(int);
    bool grabarPokemonEnDisco(Pokemon);




private:
    char idPokemon[4];
    char nombre[25];
    Ataque ataquesPokemon[4];
    int defensa;
    int vida;

};

#endif // POKEMON_H
