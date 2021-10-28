#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    char prog[] = "eh_par";
    // a lista de argumentos sempre começa com o nome do
    // programa e termina com NULL
    int n;
    scanf("Ensira um número: %d", n);

    char arg[10];
    sprintf(arg, "%d", n);

    char *args[] = {"eh_par", arg, NULL}; 

    execvp(prog, args);
    printf("Fim do exec!\n");

    return 0;
}


