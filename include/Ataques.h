#ifndef ATAQUES_H
#define ATAQUES_H

class Ataques
{
private:
   int idAtaque;
    int potencia, precision;
    char nombre[25];

public:
    Ataques();
    ~Ataques();
    void Cargar();
    void Mostrar();

    int getIdAtaque();
    int getPotencia();
    int getPrecision();

};
#endif // ATAQUES_H
