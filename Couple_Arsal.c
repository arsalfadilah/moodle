#include<stdio.h>
#include<ctype.h>
//authors : Arsal Fadilah V.01

int main(){
    char kyWo [10]= "jtkpolban";
    char huruf1, huruf2;
    int posisi1=0, posisi2=0, nyari=0;

    //input
    scanf("%c %c", &huruf1, &huruf2);

    for(nyari=0; nyari<10; nyari++){
        if(tolower(huruf1)==kyWo[nyari]){
            posisi1=nyari;
        }
        if(tolower(huruf2)==kyWo[nyari]){
            posisi2=nyari;
        }
    }

    if(posisi1-1==posisi2){
        printf("ada");
    } else{
        printf("tidak ada");
    }


    return 0;
}
