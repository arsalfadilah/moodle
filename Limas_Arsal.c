#include<stdio.h>
//authors : Arsal fadilah V.01

int main(){
    float volume;
    float panjang, lebar, tinggi;

    //input
    scanf("%f", &panjang);
    scanf("%f", &lebar);
    scanf("%f", &tinggi);

    //proses
    volume = (panjang * lebar * tinggi)/3;

    //ouput
    printf("%f\n", volume);

    return 0;
}
