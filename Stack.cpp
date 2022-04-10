#include "Stack.h"
#include <iostream>
#include <stdio.h>

using namespace std;

Stack::Stack() : pointer(0)
{
    for (int i = 0; i < STACK_SIZE; i++)
        data[i] = STACK_INITVAL;
}

void Stack::dump(void) const
{
    cout << "stack:" << endl;
    for (int i = 0; i < STACK_SIZE; i++)
        printf("%c %d: %d\n", (i == pointer) ? '>' : ' ', i, data[i]);
}

void Stack::push(stackvalue val)
{
    if (pointer < STACK_SIZE)
    {
        data[pointer++] = val;
    }
    else
    {
        cerr << "Erreur Stack::push(): dépassement taille de la pile" << endl;
        exit(EXIT_FAILURE);
    }
}

stackvalue Stack::pop(void)
{
    stackvalue val;

    if (pointer >= 1)
    {
        val = data[--pointer];
    }
    else
    {
        cerr << "Erreur Stack::pop(): pile vide" << endl;
        exit(EXIT_FAILURE);
    }

    return (val);
}