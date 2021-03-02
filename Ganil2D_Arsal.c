#include<stdio.h>
//authors : Arsal Fadilah V.01

int main(){
    int ary2d[5][5];
    int i, j, hitung=0;

    //input
    for(i=0; i<4; i++){
        scanf("%d %d %d %d", &ary2d[i][0], &ary2d[i][1],
        &ary2d[i][2], &ary2d[i][3]);
    }

    //proses
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if((ary2d[i][j]+1)%2==0){
                hitung++;
            }
        }
    }

    //output
    printf("%d", hitung);

    return 0;
}
