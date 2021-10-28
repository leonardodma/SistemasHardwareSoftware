#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Error: there wasn't at least 2 arguments\n");
        return -1;
    }
    else
    {
        int soma = 0;
        for (int i = 0; i < argc; i++)
        {
            soma += atof(argv[i]);
        }

        printf("Soma: %d\n", soma);
    }

    return 0;
}
