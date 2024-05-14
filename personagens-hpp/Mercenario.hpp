#ifndef MERCENARIO
#define MERCENARIO
#include "../core-simulador-hpp/Personagem.hpp"

class Mercenario : public Personagem{
    public:
        Mercenario(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};

#endif