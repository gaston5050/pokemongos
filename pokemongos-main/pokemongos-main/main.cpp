#include <iostream>
//#include "menu.h"
#include "Gameplay.h"
#include "Pokemon.h"
#include "Jugador.h"
#include "Ataque.h"
#include "FuncionesGlobales.h"


int main()
{
Ataque reg, reg2;
Pokemon aux;

 //CREAMOS ATAQUES Y LISTAMOS LOS GRABADOS EN EL LISTADO
//reg.menuAtaques();
//CREAMOS LOS POKEMONES Y LE ASIGNAMOS LOS ATAQUES DESDE EL ARCHIVO ATAQUES.DAT
/*grabarNuevoPokemon();
leerArchivoPokemon();
*/
/*
reg.Cargar();
reg.Mostrar();
reg.grabarRegistroAtaque();
reg.Cargar();
reg.Mostrar();
reg.grabarRegistroAtaque();


int pos=0;
while(reg.leerRegistroAtaque(pos++)){
    reg.Mostrar();

}

aux.Cargar();
aux.grabarPokemonEnDisco();
aux.Cargar();
aux.grabarPokemonEnDisco();



int pos=0;
while(aux.leerRegistroPokemon(pos)){

aux.Mostrar();
}
*/
aux.Cargar();
aux.grabarPokemonEnDisco();

listarPokemones();




    return 0;

    }

/// proyectar imagen con el nombre del juego
/// presione start
/// menu con las opciones jugar, estadistica, salir.
/// dentro de la opcion jugar solo con la maquina (despues finalizar el proyecto, agregar la opcion 2 jugadores y seleccion de personaje)
/// empieza la partida (por ahora solo 1 solo personaje juega con ese mismo)
///     En la parte jugar, darle la forma de atacar al personaje (en principio con una habilidad)
///     golpear con una sola tecla fija asociada a cada ataque
///     póner golpe aleatorio y definir el valor de ese golpe entre el rango: 18 a 20 inclusive (golpe critico), de 7 1 17 (golpe normal) y  de 0 a 6 (erro golpe).
///     realizar un update de la vida del contrincante (setear continuamente la vida del contrincante)
///     verificar continuaamente la vida, si esta llega igual o menor a 0, el pokemon muere

/// proyectar el ganador (anotar los puntajes guardar quien gano)
/// opcion de menu principal
