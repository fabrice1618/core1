#include "Core.h"

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void Core::run(string file)
{
    char op;
    int val;
    ifstream file_op(file, ios::in);

    if (!file_op.is_open())
    {
        cerr << "Could not open the file: " << file << endl;
        exit(EXIT_FAILURE);
    }

    while (!file_op.eof())
    {
        file_op >> op;
        if (op == '<')
        {
            file_op >> val;
            setR1(val);
        }
        exec(op);
        op = ' ';
    }

    file_op.close();
}