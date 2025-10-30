#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void bubble__sort(int vet[], int n){
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
 
//busca binaria
int binarysearch(int vet[], int n, int target){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid =(low + high)/2;
        if(vet[mid] == target ){
            return mid;
        }else if(vet[mid]<target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}
int main(void){
    int i;
    int vet[N] = {10,42,5,6,38,6,5,32,99,1};
    int *ptr;
    ptr = vet;
    //ordenando o vetor
    bubble__sort(vet, N);
    for(i=0; i<N; i++){
        printf("\n%d", *(ptr + i));

    }

    return 0;
}