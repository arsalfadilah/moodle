#include<stdio.h>
#include<ctype.h>
#include<string.h>
//authors : Arsal Fadilah V.02

int main(){
    char kalimat[150];
    char fUtama[3];
    int cari, j, spasi=0, hasil=0;

    //input
    gets(kalimat);

    for(cari=0; cari<3; cari++){
        scanf(" %c", &fUtama[cari]);
    }
/*
    for(cari=0; cari<strlen(kalimat); cari++){
        if(kalimat[cari]==32){
            for(j=cari; j<strlen(kalimat)-1; j++){
                kalimat[j]=kalimat[j+1];
            }
            spasi++;
        }
    }
*/
    //proses
    for(cari=0; cari<strlen(kalimat)-spasi; cari++){
        if(tolower(fUtama[0])==tolower(kalimat[cari])){
            if(tolower(fUtama[1])==tolower(kalimat[cari+1])){
                if(tolower(fUtama[2])==tolower(kalimat[cari+2])){
                    hasil++;
                }
            }
        }
    }

    //output
    printf("%d", hasil);


    return 0;
}

