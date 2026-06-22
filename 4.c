#include <stdio.h>
#include <string.h>

int main(){
    int t;
    char n[41];
    printf("Numero: ");
    scanf("%40s", n);
    printf("Quantidade de trocas: ");
    scanf("%d",&t);
    if(strcmp(n, "0") == 0 && t == 0){
        printf("Não há trocas, tchau");//mudar frase
    }else{
        
        for(int i = 0; n[i] != '\0' && t > 0; i++) {
            int posMaior = i;

            // procura maior direita
            for(int j = i + 1; n[j] != '\0'; j++) {
                if(n[j] > n[posMaior]) {
                    posMaior = j;
                }
            }

            // encontrou? muda
            if(posMaior != i) {
                char aux = n[i];
                n[i] = n[posMaior];
                n[posMaior] = aux;
                t--;
            }
        }
        printf("Resultado: %s\n", n);
    }
    return 0;
}