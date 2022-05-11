#ifndef ATAQUE_H
#define ATAQUE_H

class Ataque
{
private:
    int idAtaque;
    int potencia, precision;
    char nombre[25];

public:
    Ataque();
    ~Ataque();
    void Cargar();
    void Mostrar();


    int getIdAtaque();
    int getPotencia();
    int getPrecision();

    //metodos
    bool  leerRegistroAtaque(int);
    void creacionRegistroAtaque(Ataque aux);
    bool grabarRegistroAtaque(Ataque aux);
    void menuAtaques();
    Ataque getAtaqueDeArchivo(int);


};
#endif // ATAQUES_H
