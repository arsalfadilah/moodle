#include<stdio.h>
//authors : Arsal Fadilah V.01

int main(){
    int ary2d[5][5], ary1d[5][5];
    int i, j, hitung=0;

    //input
    for(i=0; i<3; i++){
        scanf("%d %d %d", &ary2d[i][0], &ary2d[i][1],
        &ary2d[i][2]);
    }for(i=0; i<3; i++){
        scanf("%d %d %d", &ary1d[i][0], &ary1d[i][1],
        &ary1d[i][2]);
    }


    //proses
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
           ary2d[i][j]=ary1d[i][j]+ary2d[i][j];
        }
    }

    //output
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d ", ary2d[i][j]);
        }
        printf("%d\n", ary2d[i][j]);
    }

    return 0;
}
