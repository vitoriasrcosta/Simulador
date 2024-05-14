#include "../personagens-hpp/Mutante.hpp"

Mutante::Mutante(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Mutante::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Mutante::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Mutante::pegarDescricao() 
{
    return "Vc nao pode me deter!";
}