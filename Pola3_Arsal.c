#include<stdio.h>
//authors : Arsal Fadilah

int main() {
    int matriks[11][11];
    int n, i, j, bil = 1;

    //input
    scanf("%d", &n);

    //proses
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-i; j++) {
            matriks[i][j] = bil;
            bil++;
        }
    }

    //output
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-i-1; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("%d\n", matriks[i][j]);
    }

    return 0;
}
