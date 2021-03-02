#include <stdio.h>
//authors : Arsal Fadilah V.01

int main(){
    int angka1, angka2, angka3;
    int max=0;

    //input
    scanf("%d", &angka1);
    scanf("%d", &angka2);
    scanf("%d", &angka3);

    //proses
    if(angka1>angka2 && angka1>angka3){
        max=angka1;
    } else if (angka2>angka1 && angka2>angka3){
        max = angka2;
    } else if (angka3>angka1 && angka3>angka1){
        max = angka3;
    } else {
        max=angka1;
    }

    //ouput
    printf("%d", max);

    return 0;
}
