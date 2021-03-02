
#include<stdio.h>
//authors : Arsal Fadilah V.01

int main(){
    int bil[12];
    int nyari, max =0, min =0;

    //input
    scanf("%d %d %d %d %d %d %d %d %d %d", &bil[0],
          &bil[1], &bil[2], &bil[3], &bil[4], &bil[5], &bil[6]
          , &bil[7], &bil[8], &bil[9]);

    //proses
    max = bil[0];
    min = bil[0];
    for(nyari=0; nyari<10; nyari++){
        if(bil[nyari]>max){
            max = bil[nyari];
        }else if(bil[nyari]<min){
            min = bil[nyari];
        }
    }

    //output
    printf("%d\n", max-min);


    return 0;
}
