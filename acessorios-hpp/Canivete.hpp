#ifndef CANIVETE
#define CANIVETE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Canivete : public ArmaDefesa
{
    public:
        Canivete(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif