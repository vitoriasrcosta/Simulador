#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Bastao.hpp"
#include "../acessorios-hpp/Canivete.hpp"
#include "../acessorios-hpp/Capacete.hpp"
#include "../acessorios-hpp/Chicote.hpp"
#include "../acessorios-hpp/Faca.hpp"
#include "../acessorios-hpp/Granada.hpp"
#include "../acessorios-hpp/Lanca.hpp"
#include "../acessorios-hpp/Pistola.hpp"
#include "../acessorios-hpp/SprayPimenta.hpp"
#include "../acessorios-hpp/Taser.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Lutador.hpp"
#include "../personagens-hpp/Mercenario.hpp"
#include "../personagens-hpp/Mutante.hpp"
#include "../personagens-hpp/Piloto.hpp"
#include "../personagens-hpp/Soldado.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Granada("Super Granada",100,400);
    ArmaAtaque* arma2  = new Lanca("Lanca gigante",0,80);
    ArmaAtaque* arma3  = new Pistola("Pistola automatica",50,200);
    ArmaAtaque* arma4  = new Faca("Faca pequena",0,50);
    ArmaAtaque* arma5  = new Chicote("Chicote letal",50,180);
    ArmaDefesa* defesa = new Bastao("Bastao de madeira", 20);
    ArmaDefesa* defesa2 = new Canivete("Metal", 1);
    ArmaDefesa* defesa3 = new Capacete("Capacete de metal", 70);
    ArmaDefesa* defesa4 = new SprayPimenta("Spray de pimenta", 70);
    ArmaDefesa* defesa5 = new Taser("Arma de choque", 100);


    Personagem* p1 = new Lutador(1, "Lutador", 150, arma4, defesa2);
    Personagem* p3 = new Mercenario(1, "Mercenario", 250, arma3, defesa5);
    Personagem* p2 = new Mutante(2, "Mutante", 300, arma5, defesa);
    Personagem* p4 = new Piloto(2, "Piloto", 100, arma, defesa3);
    Personagem* p5 = new Soldado(2, "Soldado", 70, arma2, defesa4);
    Personagem* p6 = new Chaves(1, "Chaves", 50, arma4, defesa3);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p6, 1);
    simulador->adicionarPersonagem(p5, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}