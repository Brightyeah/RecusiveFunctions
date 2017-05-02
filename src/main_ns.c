#include "recursion.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
    int num, size, j = 0;
    scanf("%d %d", &num, &size);
    char *ch;
    ch = malloc(sizeof(char)*size);
    if (ns_recursion(ch, num, size) == 0) {
        printf("\nRecursion: %s\n", ch);
    }
    free(ch);
    return 0;
}