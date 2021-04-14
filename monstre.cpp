#include "monstre.h"
using namespace std;

Monstre::Monstre() : name("Slime"), att(2), hp(3), currentState(true){

}
Monstre::Monstre(std::string nom, int pv, int degats, bool etat) : name(nom), hp(pv), att(degats), currentState(etat){

}
void Monstre::Affichage(){
    cout << name << " : Attaque = " << att << " HP = " << hp << endl;
    if (hp == 0){
        cout << name << " Mort " << endl ;
    }
}
void Monstre::Attaque(Monstre &cible){
    if (currentState){
        cible.recevoirDamage(getDamage());
    }

}
void Monstre::recevoirDamage(int nbDegats){
    hp -= nbDegats;

    if (hp < 0)
    {
        hp = 0;
    }
}
int Monstre::getDamage() const{
    return att;
}