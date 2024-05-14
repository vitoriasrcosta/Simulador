#include "../personagens-hpp/Lutador.hpp"

Lutador::Lutador(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Lutador::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Lutador::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Lutador::pegarDescricao() 
{
    return "Vou acabar com vc!";
}