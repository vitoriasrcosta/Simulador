#include "../personagens-hpp/Mercenario.hpp"

Mercenario::Mercenario(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Mercenario::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Mercenario::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Mercenario::pegarDescricao() 
{
    return "Vc está morto!";
}