// Questao 03
// Implemente aqui uma funcao chamada ex3_solucao
void ex3_solucao(unsigned short *rdi, unsigned short *rsi, long rdx)
{
    long rcx = rdx;

    unsigned int edx = (int)*rdi; //movzwl (%rdi),%edx
    unsigned int eax = (int)*rsi; //movzwl (%rsi),%eax

    unsigned short ax = (short)eax;
    unsigned short dx = (short)edx;

    *rdi = ax; //mov    %ax,(%rdi)
    *rsi = dx; //mov    %dx,(%rsi)

    eax = (int)*rdi;

    eax = 5 * eax;
    edx = 3 * edx;
    eax += edx;

    *&rcx = ax;

    //return eax;
}