#ifndef _CORE_H
#define _CORE_H

#include "Alu.h"

#include <string>

using namespace std;

// Core
class Core : public Alu
{
public:
    Core(bool t=true) { trace = t; };
    void run(string file);
};

#endif