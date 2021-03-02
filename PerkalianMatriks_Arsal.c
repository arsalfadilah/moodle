#include<stdio.h>
//authors : Arsal Fadilah

int main(){
    int matriks1[100][100];
    int matriks2[100][100];
    int matriksbaru[100][100];
    int a, b, c, d;
    int i, j, k;
    int simpan=0;

    //input matriks 1
    scanf("%d %d", &a, &b);
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            scanf("%d", &matriks1[i][j]);

        }
    }
    //input matriks 2
    scanf("%d %d", &c, &d);
    for(i=0; i<c; i++){
        for(j=0; j<d; j++){
            scanf("%d", &matriks2[i][j]);
        }
    }

    //proses
    for(i=0; i<a; i++){
        for(j=0; j<d; j++){
            simpan = 0;
            for(k=0; k<b; k++){
                simpan=simpan+(matriks1[i][k]*matriks2[k][j]);
            }
            matriksbaru[i][j]=simpan;
        }
    }

    //output
    for(i=0; i<a; i++){
        for(j=0; j<d-1; j++){
            printf("%d ",matriksbaru[i][j]);
        }
        printf("%d\n", matriksbaru[i][j]);
    }



    return 0;
}
