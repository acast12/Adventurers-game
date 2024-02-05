#ifndef ELF_H
#define ELF_H

#include "Character.h"
 
#include <iostream>
using namespace std;

class Elf : public Character {
    private:
    string family;

    public:
    Elf(const string &name, double health, double attackStrength, string family);

    void attack(Character &);
};

#endif