#ifndef MUTANTE
#define MUTANTE
#include "../core-simulador-hpp/Personagem.hpp"

class Mutante : public Personagem{
    public:
        Mutante(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};

#endif