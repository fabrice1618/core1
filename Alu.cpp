#include "Alu.h"

#include <iostream>

using namespace std;

void Alu::push(void)
{
    pile.push(r1);
}

void Alu::add(void)
{
    r1 = pile.pop();
    r2 = pile.pop();
    r1 = r1 + r2;
    pile.push(r1);
}

void Alu::sub(void)
{
    r2 = pile.pop();
    r1 = pile.pop();
    r1 = r1 - r2;
    pile.push(r1);
}

void Alu::mul(void)
{
    r1 = pile.pop();
    r2 = pile.pop();
    r1 = r1 * r2;
    pile.push(r1);
}

void Alu::div(void)
{
    r2 = pile.pop();
    r1 = pile.pop();
    r1 = r1 / r2;
    pile.push(r1);
}

void Alu::print(void)
{
    r1 = pile.pop();
    cout << "> " << (int)r1 << endl;
}

void Alu::exec(char op)
{
    switch (op)
    {
    case '<':
        push();
        break;
    case '>':
        print();
        break;
    case '+':
        add();
        break;
    case '-':
        sub();
        break;
    case '*':
        mul();
        break;
    case '/':
        div();
        break;
    case ' ':
        break;
    default:
        cerr << "Erreur: Opération inconnue " << op << endl;
        exit(EXIT_FAILURE);
        break;
    }

    if ( trace && (op != ' ') && (op != '>')) {
        cout << op;
        if (op == '<') {
            cout << ' ' << (int)r1;
        }
        cout << endl;
    }
}

void Alu::dump(void)
{
    cout << "R1=" << (int)r1 << endl;
    cout << "R2=" << (int)r2 << endl;
    pile.dump();
}
