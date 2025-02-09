#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "proc.h"
#include "ENUM_COM.h"

int main (const int argc, const char* argv[]) 
{
    if (argc == 2)
    {
        proc proces = {};
        if (get_cod (&proces, argv[1])) 
        {
            printf ("error read cod\n");
        }
        else 
        {
            ERR return_meaning = ran (&proces);
            print_error (return_meaning);
            
            des_troy_proc (&proces);
        }
    }
    else 
    {
        printf ("NOT file\n");
        return EXIT_FAILURE;
    }
    return 0;
}