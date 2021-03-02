#include<stdio.h>
#include<string.h>
//Authors : Arsal Fadilah V.01

int main(){
    char kalimat[1001];
    int i, ukuran, kata=1;

    //input
    gets(kalimat);
    ukuran = strlen(kalimat);

    //proses
    for(i=0; i<ukuran; i++){
        if(kalimat[i]==32){
            kata++;
        }
    }

    //output
    printf("%d", kata);

    return 0;
}

