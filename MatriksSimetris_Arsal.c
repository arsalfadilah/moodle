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
    j=0;
    while(ada && j< 3){
        if(matriks[i][j]!=matriks[j][i]){
            ada=false;
        }
        j++;
    }
    j=2;
    while(ada && j>=0){
        if(matriks[i][j]!=matriks[j][i]){
            ada=false;
        }
        j--;
    }
     if(matriks[0][0]!=matriks[2][2]){
        ada=false;
     }

    //output
    if(ada){
        printf("matriks simetris");
    }else{
        printf("bukan matriks simetris");
    }

    return 0;
}

