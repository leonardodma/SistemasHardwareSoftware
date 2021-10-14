// Questao 04
// Implemente aqui uma funcao chamada ex4_solucao

int ex4_solucao(int *rdi, int *rsi, int edx)
{
    int eax;
    int ecx = 0;
    
    while (ecx < edx)
    {
        eax = edx - ecx - 1;

        long r8 = (long)ecx;
        long r9 = (long)eax;

        if (rdi[r8] == rsi[r9])
        {
            ecx++;
        }
        else
        {
            return eax;
        }
    }

    return -1;
}