#include "sum_array.h"

int sa_iteration(int *qwerty)
{
    int i = 0, sum = 0;
    for (; i < (sizeof(qwerty)/sizeof(int)); i++) {
        sum += qwerty[i];
    }
    return sum;
}
int sa_recursion(int *qwerty, int i, int sum)
{
    if ( i >= (sizeof(qwerty)/sizeof(int))) {
        return sum;
    }
    sum += qwerty[i++];
    return sa_recursion(qwerty, i, sum);
}