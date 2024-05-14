#ifndef SPRAYPIMENTA
#define SPRAYPIMENTA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class SprayPimenta : public ArmaDefesa
{
    public:
        SprayPimenta(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif