// C program to demonstrate
// an invalid memory access error
#include <stdio.h>
int a[5];
int main()
{
    int s = a[-11];
    printf("%d", s);
    return 0;
}