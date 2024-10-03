#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include "ASpell.hpp"
#include <map>

class ASpell;

class SpellBook
{
private:
    std::map < std::string, ASpell * > spellBook;
public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell* spell);
    void forgetSpell(string const &spellName);
    ASpell* createSpell(string const &spellName);
};

#endif