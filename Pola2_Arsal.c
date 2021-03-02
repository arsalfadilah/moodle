#include<stdio.h>
//authors : Arsal Fadilah

int main() {
    int pola[11][11];
    int matriks[11][11];
    int n, i, j, bil = 1;

    //input
    scanf("%d", &n);

    //proses
    for (i = 0; i < n; i++) {
        bil = 1;
        for (j = i; j > 0; j--) {
            matriks[i][j] = bil;
            bil += bil;
        }
        matriks[i][j] = bil;
    }

    //output
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("%d\n", matriks[i][j]);
    }

    return 0;
}
