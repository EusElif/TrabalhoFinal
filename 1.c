#include <stdio.h>

void ordenaPonteiros(int **vPtr, int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (**(vPtr + i) > **(vPtr + j))
            {
                int *temp = *(vPtr + i);
                *(vPtr + i) = *(vPtr + j);
                *(vPtr + j) = temp;
            }
        }
    }
}

void imprimePonteiros(int **vPtr, int n)
{
    printf("Organizacao dos ponteiros:\n");

    for (int i = 0; i < n; i++)
    {
        printf("vPtr[%d] -> %d\n", i, **(vPtr + i));
    }
}

int main()
{
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int V[n];
    int *vPtr[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        printf("V[%d] = ", i);
        scanf("%d", &V[i]);

        vPtr[i] = &V[i];
    }

    ordenaPonteiros(vPtr, n);
    imprimePonteiros(vPtr, n);

    return 0;
}
