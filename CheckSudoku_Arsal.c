#include<stdio.h>
#include<stdbool.h>
//authors : Arsal fadilah V.01

int main(){
    int matriks[4][4];
    int i, j, checkBar=0, checkCol=0;
    bool ada = true;

    //input
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &matriks[i][j]);
        }
    }

    //proses
    while(ada && checkBar<3){
        checkCol=0;
        while(ada && checkCol<3){
            i=0;
            while(ada && i<3){
                j=0;
                while(ada && j<3){
                    if(checkBar!=i || checkCol!=j){
                        if(matriks[checkBar][checkCol]==matriks[i][j]){
                            ada = false;
                        }
                    }
                j++;
                }
            i++;
            }
        checkCol++;
        }
    checkBar++;
    }


        //output
    if(ada){
        printf("valid");
    }else{
        printf("tidak valid");
    }

    return 0;
}
