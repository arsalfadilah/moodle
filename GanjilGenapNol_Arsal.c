#include<stdio.h>
//authors : Arsal fadilah V.01

int main(){
    int angka;

    //input
    scanf("%d", &angka);

    //proses dan ouput
    if(angka%2!=0){
        printf("ganjil\n");
    } else if(angka==0){
        printf("nol\n");
    } else {
        printf("genap\n");
    }

    return 0;
}
