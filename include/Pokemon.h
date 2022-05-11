#ifndef POKEMON_H
#define POKEMON_H
#include "Ataques.h"


class Pokemon
{
public:
    Pokemon();
    ~Pokemon();
    void Cargar();
    void Mostrar();
    const char  getIdPokemon();
    const char getAtaque(int aux);
    int getDefensa();
    float getVida();



private:
    char idPokemon[4];
    Ataques ataquesPokemon[4];
    int defensa;
    float vida;
    char nombre[25];

};

#endif // POKEMON_H
