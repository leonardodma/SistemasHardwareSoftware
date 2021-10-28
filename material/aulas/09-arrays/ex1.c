int soma(int *vec, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += vec[i];
    }
    return s;
}

int soma(int *rdi, int esi)
{
    int edx = 0;
    int eax = 0;

    while (edx < esi)
    {
        long rcx = edx;
        eax = rdi[rcx];
        edx += 1;
    }

    return eax;
}