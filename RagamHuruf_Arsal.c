#include<stdio.h>
#include<string.h>
#include<ctype.h>
//authors : Arsal Fadilah V.01

int main(){
    char kalimat[100];
    char ragamJenis[]="abcdefghijklmnopqrstuvwxyz";
    int i, j, ukuran, hitung=0;

    //input
    gets(kalimat);
    ukuran=strlen(kalimat);
    /*proses konversi kalimat (kecil only)*/
    /*for(i=0;i<ukuran;i++){
        if(kalimat[i]>=65&&kalimat[i]<=90){
            kalimat[i]=kalimat[i]+32;
        }
    }*/

    //proses
    for(i=0;i<ukuran;i++){
            for(j=0;j<26;j++){
                if(tolower(kalimat[i])==ragamJenis[j]){
                    ragamJenis[j]='0';
                    hitung++;
                }
            }
    }

    //output
    printf("%d\n", hitung);

    return 0;
}
