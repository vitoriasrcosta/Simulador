#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Taser.hpp"

Taser::Taser(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Taser::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Taser::getResistencia() 
{
    return this->resistencia;
}