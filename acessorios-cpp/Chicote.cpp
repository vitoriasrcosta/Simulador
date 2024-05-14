#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Chicote.hpp"

Chicote::Chicote(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Chicote::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Chicote::gerarRuidoAtaque()
{
    return "Chicotada";
}
