#include "fibonachchi.h"
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("Iteration fibonachchi: %d\nRecursion fibonachchi: %d", number_fi(n), fi_recursion(n));
    return 0;
}