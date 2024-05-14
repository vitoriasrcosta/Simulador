#ifndef LUTADOR
#define LUTADOR
#include "../core-simulador-hpp/Personagem.hpp"

class Lutador : public Personagem{
    public:
        Lutador(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};

#endif