#include <stdio.h>

void func(int *x, int *y) 
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() 
{
    while (true)
    {
        int a = 5, b = 10;
        func(&a, &b);
        printf("%d %d", a, b);
    }
    
    return 0;
}