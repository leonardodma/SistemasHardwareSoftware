// Registradores
// %edi (int a)
// %esi (int b)

int ex1(int a, int b)
{
    int res;
    res = a;
    res -= b;
    return res;
}

// Registradores
// %edi (int a)
// %rsi (int *p)

// * Não tem retono (não existe eax ou rax)

void ex2(int a, int *p)
{
    a = a + 10;
    *p = a;
}

// Registradores
// %edi (int a)
// %rsi (int *p)

// A fução possui retorno

// É importante notar as ordens dsos registradores 
void ex3(int *p2, int *p1)
{
    int res;
    res = *p1;
    res = res * res;
    *p2 = res;
    return res;
}