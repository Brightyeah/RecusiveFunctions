#include "sum_array.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int elem[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &elem[i]);
    }
    printf("Iteration sum: %d\nRecursion sum: %d", sa_iteration(elem), sa_recursion(elem, 0, 0));
    return 0;
}