#include <stdio.h>

//authors : Arsal Fadilah V.01

int main(){

    int i,j;
    char kalimat[100];
    char indikator[]={'A','a','I','i','Z','z','E','e','G','g','J','j'
    ,'B','b', 'O', 'o', 'S', 's'};
    char peubah[]={'4','4','1','1','2','2','3','3','6','6','7','7','8','8', '0', '0',
    '5', '5'};
    char choose[]="yt";

    //input
    printf("masukan kalimat : ");
    gets(kalimat);

    //proses
    for(i=0;i<strlen(kalimat);i++){
        for(j=0;j<18;j++){
            if(kalimat[i]==indikator[j]){
                kalimat[i]=peubah[j];
            }
        }
    }

    //ouput
    printf("nih kalimat alay mu\n%s", kalimat);

    return 0;
}
