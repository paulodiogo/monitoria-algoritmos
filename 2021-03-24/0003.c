#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void concatena(char A[], int n, char B[], int m)
{
    char RESULTADO[10] = {'\0'};

    int aux = 0;

    for (int i = 0; i < n; i++)
    {
        RESULTADO[aux++] = A[i];
    }

    for (int i = 0; i < m; i++)
    {
        RESULTADO[aux++] = B[i];
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%c ", RESULTADO[i]);
    }
}

void concatena2(char A[], int n, char B[], int m)
{
    char RESULTADO[9] = {'\0'};

    int aux = 0;
    int j = 0, k = 0;

    while (j < n || k < m)
    {
        if (j < n)
            RESULTADO[aux++] = A[j];

        if (k < m)
            RESULTADO[aux++] = B[k];
        j++;
        k++;
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%c ", RESULTADO[i]);
    }
}

int main(int argc, char *argv[])
{
    char A[4] = {'R', 'S', 'L', 'X'};
    char B[8] = {'E', 'U', 'T', 'A', 'D', 'O', 'Y', 'Z'};

    concatena2(A, 3, B, 6);
    printf("\n");
    concatena(A, 3, B, 6);

    return 0;
}
