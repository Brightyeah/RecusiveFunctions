#include "sum_array.h"

int sa_iteration(int *qwerty)
{
    for (int i = 0, sum = 0; qwerty[i] != '\0'; sum += qwerty[i], i++); 
    return sum;
}
int sa_recursion(int *qwerty, int i, int sum)
{
    if (qwerty[i] == '\0') {
        return sum;
    } else {
        sum = qwerty[i++];
        return sa_recursion(qwerty, i, sum);
    }
}