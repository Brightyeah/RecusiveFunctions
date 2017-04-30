#include "fibonachchi.h"

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