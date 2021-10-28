#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Não valeu :(\n");
        return -1;
    }
    
    if (atol(argv[1]) < 0)
    {
        printf("Não valeu :(\n");
        return -1;
    }
    else
    {
        if (atol(argv[1]) % 2 == 0.0)
        {
            printf("Eh par\n");
            return 1;
        }
        else
        {
            printf("N eh par\n");
            return 0;
        }
    }
}
