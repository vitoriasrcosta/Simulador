#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Canivete.hpp"

Canivete::Canivete(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Canivete::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Canivete::getResistencia() 
{
    return this->resistencia;
}