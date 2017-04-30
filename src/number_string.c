#include "number_string.h"
#include <stdio.h>

int ns_recursion(char *result, int num, int n, int i)
{
    if (n == 0) {
        result[i] = '\0';
        return 0;
    }
    result[n-1] = (num % 10) + '0';
    return ns_recursion(result, num / 10, n-1, i+1);
}