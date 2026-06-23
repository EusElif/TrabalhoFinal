#include <stdio.h>

void tamanhoCollatz(int col){
    int Num_maior_cadeia;
    int Tamanho_maior_cadeia=1;
    int cont_cadeia;

    FILE *arquivo = fopen("todascadeias.txt","w");
    fprintf(arquivo, "Sequencia com o numero até %d\n",col);
    for(int i=1;i<= col;i++){
        int num = i;
        fprintf(arquivo, "%d: %d",i ,num);
        
        if(num > 1){
            fprintf(arquivo," -> ");
        }

        cont_cadeia=1;

        while(num != 1){
            if ( num % 2 == 0){
                num = num/2;
            }else{
                num=3*num+1;
            }
            fprintf(arquivo, "%d", num);
            if(num>1){
                fprintf(arquivo, " -> ");
            }
            cont_cadeia++;
        }

        if(cont_cadeia > Tamanho_maior_cadeia){
            Tamanho_maior_cadeia = cont_cadeia;
            Num_maior_cadeia = i;
        }
        fprintf(arquivo,"\n");
    }
    
    fclose(arquivo);

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
    tamanhoCollatz(n);
}