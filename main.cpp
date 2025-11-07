#include <iostream>
#include <string>
using namespace std;

// Struktura pro jedno místo
struct Lokace {
    string jmeno;
    string popis;

// Ukazatele na jiné lokace
Lokace* nahoru;
Lokace* dolu;
Lokace* doleva;
Lokace* doprava;

    bool maPredmet;
    string predmet;
};

// Inventář hráče
struct Hrac {
    bool bomba = false;
    bool stipacky = false;
    bool munice = false;
    bool bren = false;
};


