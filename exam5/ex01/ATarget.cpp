#include "ATarget.hpp"

ATarget::Atarget(std::string const &type) : _type(type)
{

}

ATarget::~ATarget()
{

}

std::string const &getType() const
{
    return (_type);
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}