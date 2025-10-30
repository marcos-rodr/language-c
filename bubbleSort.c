#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6


void bubblesort(int *vet[], int n){
    int i, j, temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(vet[j] > vet[j+1]){
                //aqui comeca a troca
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
}
int main(){
    int i;
    srand(time(NULL));
    int vetor[N];
    int *ptr = &vetor;

    for(i=0; i<N; i++){
        ptr[i] = rand()%10;
    }
    printf("\nVetor normal\n");
    for(i=0; i<N; i++){
        printf("\n%d", *(ptr + i));
    }
    bubblesort(vetor[N], N);
    printf("\nVetor ordenado\n");
    for(i=0; i<N; i++){
        printf("\n%d", *(ptr + i));
    }

    //a funcao ordena os elementos em ordem crescente

    return 0;
}


