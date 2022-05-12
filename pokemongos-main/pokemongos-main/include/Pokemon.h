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
   int  getIdPokemon();

    int getDefensa();
    int getVida();
    Ataque getAtaqueArchivo(int);


    //sets
    void setId(int);
    void setNombre(const char*);
    void setAtaque(Ataque, int);
    void setVida(int);

    //metodos
     bool  leerRegistroPokemon(int);
    bool grabarPokemonEnDisco();





private:
    int idPokemon;
    char nombre[25];
    Ataque ataquesPokemon[4];
    int defensa;
    int vida;

};

#endif // POKEMON_H
