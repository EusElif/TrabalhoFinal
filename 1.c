#include <stdio.h>

void ordenaPonteiros(int **vPtr, int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for ( j = i + 1; j < n; j++)
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
    printf("Organizacao dos ponteiros: \n");
    for (int i = 0; i < n; i++)
    {
        printf("vPtr[%d] -> %d ", i, **(vPtr + i));
    }
}

int main()
{
    int V[5] = {50, 10, 30, 20, 40};
    int *vPtr[5];

    for (int i = 0; i < 5; i++)
    {
        vPtr[i] = &V[i];
    }
    
    ordenaPonteiros(vPtr, 5);
    imprimePonteiros(vPtr, 5);

    return 0;
}
