#include "Wizard.h"

#include <iostream>
using namespace std;

Wizard::Wizard(const string &name, double health, double attackStrength, int rank) : Character(WIZARD, name, health, attackStrength), rank(rank) {}

void Wizard::attack(Character &opponent) {

    if (opponent.getType() == WIZARD) {

        Wizard &opp = dynamic_cast<Wizard &>(opponent);
        
        double damage = (attackStrength) * ((rank * 1.0) / opp.rank);
        opp.damage(damage);
        cout << "Wizard " << name << " attacks " << opp.name << " --- POOF!!" << endl;
        cout << opp.name << " takes " << damage << " damage." << endl;
        
    }
    else {
        
        double damage = attackStrength;
        opponent.damage(damage);
        cout << "Wizard " << name << " attacks " << opponent.getName() << " --- POOF!!" << endl;
        cout << opponent.getName() << " takes " << damage << " damage." << endl;
          
    }
    
}