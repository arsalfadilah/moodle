#include<stdio.h>
#include<string.h>
//authors : Arsal Fadilah V.02

int main(){
    int n, i, ukuran;
    char kalimat[35];
    //input
    printf("Masukkan kalimat : ");
    gets(kalimat);
    printf("jmlh huruf yang mau diambil dari kanan : ");
    scanf("%d", &n);

    //proses dan output
    ukuran=strlen(kalimat); //strlen : untuk menangkap jumlah char yg diinputkan
    for(i=(ukuran-n);i<ukuran;i++){
        printf("%c", kalimat[i]);
    }

    return 0;
}
