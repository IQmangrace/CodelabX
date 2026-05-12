#include <stdio.h>

int main() {

    int a = 5;
    int b = 3;

    printf("a & b =: %d\n", a & b);
    printf("a | b =: %d\n", a | b);
    printf("a ^ b =: %d\n", a ^ b);
    printf("a << b =: %d\n", a << b);
    printf("a >> b =: %d\n", a >> b);
    printf("a & (b-1)=: %d\n", a & (b-1));

    return 0;
}