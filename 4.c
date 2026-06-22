#include <stdio.h>
#include <string.h>

int main(){
    int n,t;
    char e[40];
    printf("Numero: ");
    scanf("%d",&n);
    printf("Quantidade de trocas: ");
    scanf("%d",&t);
    if(n == 0 && t == 0){
        printf("Não há trocas, tchau");//mudar frase
    }else{
        sprintf(e, "%d", n);
        
        for(int i = 0; e[i] != '\0' && t > 0; i++) {
            int posMaior = i;

            // procura maior direita
            for(int j = i + 1; e[j] != '\0'; j++) {
                if(e[j] > e[posMaior]) {
                    posMaior = j;
                }
            }

            // encontrou? muda
            if(posMaior != i) {
                char aux = e[i];
                e[i] = e[posMaior];
                e[posMaior] = aux;
                t--;
            }
        }
        printf("Resultado: %s\n", e);
    }
    return 0;
}