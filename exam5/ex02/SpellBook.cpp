#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
        spellBook[spell->getName()] = spell;
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = spellBook.find(spellName);
    if (it != spellBook.end())
        spellBook.erase(it);
}

ASpell* SpellBook::createSpell(string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = spellBook.find(spellName);
    if (it != spellBook.end())
        return it->second;
    return nullptr;
}