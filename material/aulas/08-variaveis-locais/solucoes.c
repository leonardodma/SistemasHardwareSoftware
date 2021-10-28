void solucao_ex2(long a)
{
    int x1 = 10; // $0xa,0xc(%rsp)
    int x2 = 11;  // $0xb,0x8(%rsp)
    a = x1;      //0xc(%rsp),%rdi
    func2(a);   // callq  0x5fa <func2>
    x2 += 1;     // $0x1,0x8(%rsp)
    a = x2;
    func2(a);
}