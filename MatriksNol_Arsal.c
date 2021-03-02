#include<stdio.h>
#include<stdbool.h>
//authors : Arsal Fadilah V.01

int main(){
    int matriks[4][4];
    int i, j;
    bool ada = true;

    //input
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &matriks[i][j]);
        }
    }

    //proses
    i=0;
    while(ada && i<3){
    j=0;
        while(ada && j< 3){
            if(matriks[i][j]!=0){
                ada=false;
            }
            j++;
        }
        i++;
    }

    //output
    if(ada){
        printf("matriks nol");
    }else{
        printf("bukan matriks nol");
    }

    return 0;
}

