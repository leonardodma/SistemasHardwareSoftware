#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int count_ctrl_c = 0;

void sig_handler(int num)
{
    count_ctrl_c++;

    if (count_ctrl_c >= 3)
    {
        struct sigaction s;
        s.sa_handler = SIG_DFL; // aqui vai a função a ser executada
        sigemptyset(&s.sa_mask);
        s.sa_flags = 0;
        sigaction(SIGINT, &s, NULL);
    }

    printf("Chamou Ctrl+C\n");
}

int main()
{
    /* O exemplo abaixo cria um struct sigaction e o seta para 
    executar um handler quando o processo receber SIGINT (Ctrl+C).
    */
    struct sigaction s;
    s.sa_handler = sig_handler; // aqui vai a função a ser executada
    sigemptyset(&s.sa_mask);
    s.sa_flags = 0;
    sigaction(SIGINT, &s, NULL);

    printf("Meu pid: %d\n", getpid());

    while (1)
    {
        sleep(1);
    }
    return 0;
}