#ifndef _STACK_H
#define _STACK_H

#define STACK_SIZE 10
#define STACK_INITVAL 0x55

typedef char stackvalue;

class Stack {
private:
    stackvalue data[STACK_SIZE];
    int pointer;

public:
    Stack( void );
    void dump(void) const;
    void push(stackvalue val);
    stackvalue pop(void);
};
#endif