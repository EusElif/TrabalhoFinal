#include <stdio.h>

int numeroParaVetor(int num, int vet[])
{
    int temp = num;
    int tam = 0;

    while (temp > 0)
    {
        tam++;
        temp /= 10;
    }

    for (int i = tam - 1; i >= 0; i--)
    {
        vet[i] = num % 10;
        num /= 10;
    }

    return tam;
}

void casamento_dos_numeros(int vetA[], int tamA, int vetB[], int tamB)
{
    int resA[100], resB[100];
    int kA = 0, kB = 0;

    int max = (tamA > tamB) ? tamA : tamB;

    for (int i = 0; i < max; i++)
    {
        int a = (i < tamA) ? vetA[tamA - 1 - i] : 0;
        int b = (i < tamB) ? vetB[tamB - 1 - i] : 0;

        if (a > b)
        {
            resA[kA++] = a;
        }
        else if (b > a)
        {
            resB[kB++] = b;
        }
        else
        {
            resA[kA++] = a;
            resB[kB++] = b;
        }
    }
    
    int numA = 0;
    int numB = 0;

    if (kA == 0)
    {
        numA = -1;
    }
    else
    {
        for (int i = kA - 1; i >= 0; i--)
        {
            numA = numA * 10 + resA[i];
        }
    }

    if (kB == 0)
    {
        numB = -1;
    }
    else
    {
        for (int i = kB - 1; i >= 0; i--)
        {
            numB = numB * 10 + resB[i];
        }
    }

    if (numA <= numB)
    {
        printf("%d %d\n", numA, numB);
    }
    else
    {
        printf("%d %d\n", numB, numA);
    }
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int vetA[100], vetB[100];

    int tamA = numeroParaVetor(A, vetA);
    int tamB = numeroParaVetor(B, vetB);

    casamento_dos_numeros(vetA, tamA, vetB, tamB);

    return 0;
}
