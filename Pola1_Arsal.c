#include<stdio.h>
//authors : Arsal Fadilah

int main(){
    int pola[11][11];
    int n, i, j;

    //input
    scanf("%d", &n);

    //proses & output
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            printf("* ");
        }
        printf("*\n");
    }


    return 0;
}
