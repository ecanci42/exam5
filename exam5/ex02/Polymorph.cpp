#include "Polymorph.hpp"

Polymorph::Polymorp() : ASpell("Polymorph", "turned into a critter")
{

}

Polymorph::~Polymorph() {}

ASpell* clone() const
{
    return new Polymorph();
}