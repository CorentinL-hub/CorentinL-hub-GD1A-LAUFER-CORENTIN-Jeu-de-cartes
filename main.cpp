#include <iostream>
#include <string>
#include "monstre.cpp"

using namespace std;

int main(){

     // Classe monstres

    Monstre Slime;
    Monstre Troll ("Troll",3,2,true);

    Slime.Affichage();
    Troll.Affichage();

   Slime.Attaque(Slime);
   Troll.Attaque(Troll);

    Slime.Affichage();
    Troll.Affichage();

    return 0;
}