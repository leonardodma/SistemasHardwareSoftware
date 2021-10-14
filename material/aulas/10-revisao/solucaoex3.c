v_global = 10;

int func1(int rdi)
{
    int eax = 10 + rdi;
    return eax;
}

int func2(int edi)
{
    int eax = edi;
    eax += v_global;

    return eax;
}

int func3(int edi, int esi)
{
    edi *= esi;
    int eax = edi;
    eax += v_global;
    return eax;
}

int func4()
{
    //sub    $0x8,%rsp -> Alocação de 8 bits 
    int edi = 5;

    int eax = func1(edi);

    if (eax > 20)
    {
        printf("O novo valor eh maior que 20");
    }
    else
    {
        printf("O novo valor nao eh maior que 20");
    }   
}