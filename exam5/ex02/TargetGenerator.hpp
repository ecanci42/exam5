#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator
{
private:
    std::map<std::string, ATarget* > targetGen; 
public:
    TargetGenerator();
    ~TargetGenerator();
    void learnTargetType(ATarget* target);
	void forgetTargetType(string const &targetName);
	ATarget* createTarget(string const &targetName);
};

#endif