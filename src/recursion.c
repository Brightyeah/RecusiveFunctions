#include "recursion.h"

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

int fi_iteration(int number, int sum, int n)
{
    if (n == 0) {
        return number;
    }
    return fi_iteration(sum, number+sum, n-1);
}

int number_fi(int n)
{
    return fi_iteration(0, 1, n);
}

int fi_recursion(int n)
{
    if (n == 1) {
        return 1;
    } else if (n == 0) {
        return 0;
    }
    return fi_recursion(n-1) + fi_recursion(n-2);
}

int ns_recursion(char *result, int num, int n, int i)
{
    if (n == 0) {
        result[i] = '\0';
        return 0;
    }
    result[n-1] = (num % 10) + '0';
    return ns_recursion(result, num / 10, n-1, i+1);
}