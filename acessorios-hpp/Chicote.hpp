#ifndef CHICOTE
#define CHICOTE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Chicote : public ArmaAtaque
{
    public:
        Chicote(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif