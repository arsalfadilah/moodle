#include <stdio.h>
//authors : Arsal Fadilah V.01

int main(){
    int bilangan, cek;

    //input
    cek=0;
    scanf("%d", &bilangan);

    //proses
    if(bilangan%3==0 && bilangan%4==0){
        cek=1;
    }
    printf("%d\n", cek);

    return 0;
}
