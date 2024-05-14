#include "../personagens-hpp/Piloto.hpp"

Piloto::Piloto(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Piloto::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Piloto::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Piloto::pegarDescricao() 
{
    return "Eu sou a velocidade!";
}