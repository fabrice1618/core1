#include "Core.h"

int main( int argc, char **argv)
{
    Core core;
    string fichier;

    if (argc==1)
        core.run("calc01.op");
    else {
        fichier = string(argv[1]);
        core.run(fichier);
    }
    core.dump();

    return EXIT_SUCCESS;
}

