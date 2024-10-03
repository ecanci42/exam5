#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
        targetGen[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(string const &targetName)
{
    std::map<std::string, ATarget*>::iterator it = targetGen.find(targetName);
    if (it != targetGen.end())
        targetGen.erase(it);
}

ATarget* TargetGenerator::createTarget(string const &targetName)
{
    std::map<std::string, ATarget*>::iterator it = targetGen.find(targetName);
    if (it != targetGen.end())
        return it->second;
    return nullptr;
}