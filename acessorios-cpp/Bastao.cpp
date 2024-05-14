#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Bastao.hpp"

Bastao::Bastao(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Bastao::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Bastao::getResistencia() 
{
    return this->resistencia;
}