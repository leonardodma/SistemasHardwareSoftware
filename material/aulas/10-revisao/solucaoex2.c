void func1(short *rdi)
{
    rdi[0] = 0;
    rdi[1] = 10;
    rdi[2] = 20;
}

void func2(int *rdi, int esi)
{
    int eax = 0;

    while (eax < esi)
    {
        long rcx = eax;
        int edx = 5 * eax;
        edx += edx;
        rdi[rcx] = edx;
        eax += 1;
    }
}