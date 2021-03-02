#include<stdio.h>
//authors : Arsal Fadilah V.01

int main(){
    int bil[12];
    int nyari, max =0;
    char huruf='a';

    //input
    for(int i=0; i<10; i++){
        printf("%c = ", huruf+i);
        scanf("%d", &bil[i]);
    }

    //proses
    max = bil[0];
    for(nyari=0; nyari<10; nyari++){
        if(bil[nyari]>max){
            max=bil[nyari];
        }
    }

    //output
    printf("\n bilangan terbesar = %d\n", max);


    return 0;
}
