#include <stdio.h>

int soma_2n(unsigned int n) {
    int count_bin_digits = 1;
    while (n > 1) {
        n = n / 2;
        count_bin_digits++;
    }
    return count_bin_digits;
}

// int soma_2n(unsigned int edi)
// {
//     int eax = 1;

//     while (edi > 1)
//     {
//         edi /= 2;
//         eax ++;
//     }
    
//     return eax;
// }

int main() {
    printf("soma_2n(10): %d\n", soma_2n(10));
    return 0;
}
