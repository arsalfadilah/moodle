#include<stdio.h>
//authors : Arsal Fadilah V.01

struct {
    int x;
    int y;
} titik_A[12];

int main(){
    int banyak, kuadran;
    int i=0, muncul=0;

    //input jumlah titik
    scanf("%d", &banyak);
    //input titik titik
    for(i=0; i<banyak; i++){
        scanf(" %d %d", &titik_A[i].x, &titik_A[i].y);
    }
    //proses
    scanf("%d", &kuadran);
    for(i=0; i<banyak; i++){
      switch(kuadran){
        case 1: if(titik_A[i].x>0 && titik_A[i].y){
                    muncul++;
                } break;
        case 2: if(titik_A[i].x<0 && titik_A[i].y>0){
                    muncul++;
                } break;
        case 3: if(titik_A[i].x<0 && titik_A[i].y<0){
                    muncul++;
                } break;
        case 4:if(titik_A[i].x>0 && titik_A[i].y<0){
                    muncul++;
                }
      }
    }

    printf("%d\n", muncul);


    return 0;
}
