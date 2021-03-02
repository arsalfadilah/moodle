#include<stdio.h>
//auhtors : Arsal Fadilah V.01

int main(){
    int bil[5];
    int i, j, temp=0;

    scanf("%d %d %d", &bil[0], &bil[1], &bil[2]);

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            if(bil[j]<bil[j+1]){
                temp=bil[j+1];
                bil[j+1]=bil[j];
                bil[j]=temp;
            }
        }
    }

    //output
    printf("%d %d %d", bil[0], bil[1], bil[2]);

    return 0;
}
