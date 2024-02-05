#include "Warrior.h"

#include <iostream>
using namespace std;

Warrior::Warrior(const string &name, double health, double attackStrength, string allegiance) : Character(WARRIOR, name, health, attackStrength) ,allegiance(allegiance) {}

void Warrior::attack(Character &opponent) {

    if (opponent.getType() == WARRIOR) {

        Warrior &opp = dynamic_cast<Warrior &>(opponent);

        if(opp.allegiance == allegiance) {

            cout << "Warrior " << name << " does not attack Warrior " << opp.name << "." << endl;
            cout << "They share an allegiance with " << allegiance << "." << endl;
        }

        else {

            double damage = (health / MAX_HEALTH) * (attackStrength);
            opponent.damage(damage);
            cout << "Warrior " << this->name << " attacks " << opponent.getName() << " --- SLASH!!" << endl;
            cout << opponent.getName() << " takes " << damage << " damage." << endl;

        }
    }

    else {
        
        double damage = (this-> health / MAX_HEALTH) * (this-> attackStrength);
        opponent.damage(damage);
        cout << "Warrior " << this->name << " attacks " << opponent.getName() << " --- SLASH!!" << endl;
        cout << opponent.getName() << " takes " << damage << " damage." << endl;

    }
    
}