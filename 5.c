#include <stdio.h>

void tamanhoCollatz(int col){
    int Num_maior_cadeia;
    int Tamanho_maior_cadeia=1;
    int cont_cadeia;

    for(int i=1;i<= col;i++){
        int num = i;
        printf("%d: ",num);
        if(num == 1){
            printf("1");
        }
        
        if(col == 1){
            Num_maior_cadeia = 1;
            Tamanho_maior_cadeia = 1;
        }

        printf("%d", num);
        if(num > 1){
            printf(" -> ");
        }

        cont_cadeia=1;

        while(num != 1){
            if ( num % 2 == 0){
                num = num/2;
            }else{
                num=3*num+1;
            }
            printf("%d", num);
            if(num>1){
                printf(" -> ");
            }
            cont_cadeia++;
        }

        if(cont_cadeia > Tamanho_maior_cadeia){
            Tamanho_maior_cadeia = cont_cadeia;
            Num_maior_cadeia = i;
        }
        printf("\n");
    }
    
    printf("Num_maior_cadeia = %d\n", Num_maior_cadeia);
    printf("Tamanho_maior_cadeia = %d\n", Tamanho_maior_cadeia);
}

int main(){
    int n;
    do{
        printf("Numero: ");
        scanf("%d",&n);
        if(n>1000000){
            printf("Numero maior que 1.000.000, por favor, solicite um numero menor.\n");
        }
    } while (n>1000000);
    printf("Sequencia com o numero até %d\n",n);
    tamanhoCollatz(n);
}