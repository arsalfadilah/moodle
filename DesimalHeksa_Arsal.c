#include<stdio.h>
#include<string.h>
//Authors : Arsal Fadilah V.01

int main(){
    int desimal, panjang=0, i;
    char arrHex[50];

    //input
    scanf("%d", &desimal);
    sprintf(arrHex, "%x", desimal);
    panjang=strlen(arrHex);

    //proses
    for(i=0; i<panjang; i++){
        arrHex[i]=toupper(arrHex[i]);
    }

    //output
    printf("%s", arrHex);

    return 0;
}

