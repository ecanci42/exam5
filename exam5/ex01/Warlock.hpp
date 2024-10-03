#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;

class Warlock
{
private:
    std::string _name;
    std::string _title;
    std::map < std::string, ASpell * > spellBook; 
public:
    Warlock();
    Warlock(std::string const &name, std::string const  &title);
    ~Warlock();
    std::string const & getName() const;
    std::string const & getTitle() const;
    void setTitle(std::string const & str);
    void introduce() const;
    void learnSpell(ASpell* spell);
    void forgetSpell(std::string const spellName);
    void launchSpell(std::string const spellName, ATarget const & target);
};