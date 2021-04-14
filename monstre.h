#ifndef DEF_MONSTRE
#define DEF_MONSTRE
#include <iostream>
#include <string>
 

class Monstre
{

    Monstre();
    Monstre(std::string nom, int pv, int degats, bool etat);

    void Affichage();
    void Attaque(Monstre &cible);
    void recevoirDamage(int nbDegats);
    int getDamage() const;
 
 
    std::string name;
    int att;
    int hp;
    bool currentState;
};
 
#endif