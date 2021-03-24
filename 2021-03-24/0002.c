#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 100000

typedef struct No
{
    char v;
    struct No *p;
} No;

int main(void)
{
    No *x;

    x = (No *)malloc(sizeof(No));

    x->p = (No *)malloc(sizeof(No));

    x->p->v = 'A';

    x->p->p = (No *)malloc(sizeof(No));

    x->p->p->v = 'B';

    printf("%c %c\n", x->p->v, x->p->p->v);

    return 0;
}
