#include<stdio.h>
//authors : Arsal Fadilah V.01

int main(){
    char vokal [10]={'A','a','I','i','U','u','E','e','O','o'};
    char input;
    int i;

    //input
    scanf("%c", &input);

    //proses dan output
    for(i=0;i<10;i++){
        if(input==vokal[i]){
            printf("true");
            i=10;
        }
    }
    //klo salah semua
    if(i==10){
        printf("false");
    }

    return 0;
}
