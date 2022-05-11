#ifndef JUGADOR_H
#define JUGADOR_H


class Jugador
{
public:
    Jugador();
    ~Jugador();

    void Cargar();
    int PokemonElegido();
    void Mostrar();
    int getPokemon();



private:
    char nombre[25];
    int puntaje, pokemon;
};

#endif // JUGADOR_H
