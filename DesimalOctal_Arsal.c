#include<stdio.h>
#include<string.h>
//Authors : Arsal Fadilah V.01

int main(){
    int desimal, panjang=0, i;
    char arrOct[50];

    //input
    scanf("%d", &desimal);

    //proses
    sprintf(arrOct, "%o", desimal);
    panjang=strlen(arrOct);

    //output
    printf("%s", arrOct);

    return 0;
}

