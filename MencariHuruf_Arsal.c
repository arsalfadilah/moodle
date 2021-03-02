#include<stdio.h>
#include<string.h>
//authors : Arsal Fadilah V.01

int main(){
    char vokal [10]="JTKPolban";
    char input;
    int i;

    //input
    scanf("%c", &input);
    if(input>=65&&input<=90){
        input=input+32; //konversi huruf besar ke kecil, jika -32 sebaliknya
    }

    //proses
    for(i=0;i<10;i++){
        if(vokal[i]>=65&&vokal[i]<=90){
            vokal[i]=vokal[i]+32;
        }
    }

    //proses mencari dan output
    for(i=0;i<10;i++){
        if(input==vokal[i]){
            printf("ada");
            i=10;
        }
    }
    if(i==10){
        printf("tidak ada");
    }

    return 0;
}
