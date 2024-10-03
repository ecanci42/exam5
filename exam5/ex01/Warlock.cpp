#include "Warlock.hpp"

Warlock::Warlock() { }

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->_name = name;
    this->_title = title;
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName() const
{
    return (this->_name);
}

std::string const & Warlock::getTitle() const
{
    return (this->_title);
}

void Warlock::setTitle(std::string const & str)
{
    this->_title = str;
}

void Warlock::introduce() const
{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
    if (spell)
        spellBook[spell->getName()] = spell;
}

void Warlock::forgetSpell(std::string const spellName)
{
    std::map<std::string, ASpell*>::iterator it = spellBook.find(spellName);
    if (it != spellBook.end())
        spellBook.erase(it);
}

void Warlock::launchSpell(std::string const spellName, ATarget const & target)
{
    std::map<std::string, ASpell*>::iterator it = spellBook.find(spellName);
    if (it != spellBook.end())
        it->second->launch(target);
}