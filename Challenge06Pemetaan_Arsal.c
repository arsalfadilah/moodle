#include<stdio.h>
//Authors : Arsal Fadilah V.01

int pemetaan(int A, int B, int grupA[], int grupB[]);

int main(){
    int sumA, sumB, i;
    int grupA[20000];
    int grupB[20000];

    scanf("%d %d", &sumA, &sumB);
    for(i=0; i<sumA; i++){
        scanf("%d", &grupA[i]);
    }

    for(i=0; i<sumB; i++){
        scanf("%d", &grupB[i]);
    }

    printf("%d", pemetaan(sumA, sumB, grupA, grupB));

    return 0;

}

int pemetaan(int A, int B, int grupA[], int grupB[]){
    int i, j, count=0;

    for(i=0; i<A; i++){
        for(j=0; j<B; j++){
            if(grupA[i]>grupB[j]){
                count++;
            }
        }
    }

    return count;
}
