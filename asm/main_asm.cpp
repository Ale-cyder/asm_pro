#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "asm.h"

int main (int argc, char* argv[])
{
    if (argc == 2)
    {                            
        enm return_mean = assembl (argv[1]);
        print_error (return_mean);
    }
    else
        printf ("err file name\n");
}