#include <iostream>
#include <cstdlib>
#include "FuncionesGlobales.h"
#include "Pokemon.h"

void grabarNuevoPokemon(){
    Pokemon aux;
    aux.Cargar();
    aux.grabarPokemonEnDisco();
}
void leerArchivoPokemon(){
    Pokemon aux;
    int pos=0;

    while(aux.leerRegistroPokemon(pos++)){

        aux.Mostrar();
    }

}

void listarPokemones(){
    Pokemon aux;
int pos=0;

while(aux.leerRegistroPokemon(pos++)){

aux.Mostrar();
}
}
