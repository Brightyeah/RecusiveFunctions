#include "recursion.h"
#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    int elem[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &elem[i]);
    }
    printf("Iteration sum: %d\nRecursion sum: %d", sum_array(elem, n), sa_recursion(elem, 0, n));
    return 0;
}