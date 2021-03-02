#include<stdio.h>
//authors : Arsal fadilah V.01

int main(){
    float suhu;

    //input
    scanf("%f", &suhu);

    if(suhu>=0 && suhu<=100){
        printf("berwujud cair\n");
    } else {
        printf("berwujud non cair\n");
    }

    return 0;
}
