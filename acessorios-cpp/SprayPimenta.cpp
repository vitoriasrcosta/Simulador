#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/SprayPimenta.hpp"

SprayPimenta::SprayPimenta(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string SprayPimenta::getDescricaoArma() 
{
    return this->descricaoArma;
}

int SprayPimenta::getResistencia() 
{
    return this->resistencia;
}