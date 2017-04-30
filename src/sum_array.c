#include "sum_array.h"

int sa_iteration(int result, int *qwerty, int count, int max_count)
{
    if (count == max_count) {
        return result;
    }
    return sa_iteration(result + qwerty[count], qwerty, count+1, max_count);
}

int sum_array(int *qwerty, int n)
{
    return sa_iteration(0, qwerty, 0, n);
}

int sa_recursion(int *qwerty, int i, int max_count)
{
    if (i == max_count) {
        return 0;
    }
    return qwerty[i] + sa_recursion(qwerty, i+1, max_count);
}