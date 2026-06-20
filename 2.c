#include <stdio.h>

//procurar outro nome ou não
void autobots(int *v,int tamK,int tamvet){ 
    //inverter vetor
    for(int i=0;i<tamvet/2;i++){
        int aux = *(v+i);
        *(v+i) = *(v+(tamvet-1)-i);
        *(v+(tamvet-1)-i) = aux;
    }
    //excluir a verificação de inversão
    tamK %= tamvet; 
    for(int j=0;j<tamK;j++){
        int ultimo = *(v+tamvet-1);
        for (int i = tamvet -1; i>0; i--){
            *(v+i) = *(v+i-1);
        }
        *v = ultimo;
    } 
}

int main(){
    int n;
    printf("Tamanho do Vetor: ");
    scanf("%d",&n);
    
    int v[n];
    printf("Preencha o Vetor.\n");
    for(int i=0;i<n;i++){
        printf("V[%d]: ",i+1);
        scanf("%d",&v[i]);
    }
    
    int k;
    printf("Quantidades de vezes que irá rodar: ");
    scanf("%d",&k);

    autobots(v,k,n);
    printf("Vetor Invertido e rodado %d vezes: ",k);
    for(int i=0;i<n;i++){
        printf(" %d ",v[i]);
    }
}