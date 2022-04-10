#ifndef _ALU_H
#define _ALU_H

#include "Stack.h"

// Arithmetic logic unit
class Alu
{
private:
    Stack pile;
    stackvalue r1;
    stackvalue r2;
protected:
    bool trace;    
public:
    Alu(void) : r1(0), r2(0), trace(false) {};
    void push(void);
    void add(void);
    void sub(void);
    void mul(void);
    void div(void);
    void print(void);
    void setR1(stackvalue p) { r1 = p; };
    void setR2(stackvalue p) { r2 = p; };
    void exec(char op);
    void dump(void);
};

#endif