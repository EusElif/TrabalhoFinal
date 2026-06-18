#include <stdio.h>

void inverterVetor(int *v,int tam){
    int aux;
    for(int i=0;i<tam/2;i++){
        aux=*(v+i);
        *(v+i)=*(v+(tam-1)-i);
        *(v+(tam-1)-i) = aux;
    }
}
//procurar outro nome ou não
void autobots(int *v,int tamK,int tamvet){  
    
}

int main(){
    int n;
    printf("Tamanho do Vetor: ");
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    int k;
    printf("Quantidades de vezes que irá rodar: ");
    scanf("%d",&k);
    inverterVetor(v,n);
    //retirar depois, apenas verificação
    printf("Vetor Invertido: ");
    for(int i=0;i<n;i++){
        printf(" %d ",v[i]);
    }
    printf("\n");
    //fim da verificação
    //mexer pra la
    autobots(v,k,n);
    printf("Vetor Invertido e rodado %d vezes: ",k);
    for(int i=0;i<n;i++){
        printf(" %d ",v[i]);
    }
}