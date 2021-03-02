#include<stdio.h>
//authors : Arsal Fadilah

int main() {
    int matriks[11][11];
    int pola[11][11];
    int baris, kolom, i, j, bil = 1;
    int ubahBar = 0;

    //input
    scanf("%d %d", &baris, &kolom);

    //proses input
    for (j = 0; j < kolom; j++) {
        for (i = 0; i < baris; i++) {
            matriks[i][j] = bil;
            bil++;
        }
    }

    //proses ubah
    for (j = 0; j < kolom; j++) {
    ubahBar = baris-1;
        if ((j + 1) % 2 != 0) {
             for (i = 0; i < baris; i++) {
                 pola[i][j] = matriks[i][j];
               }
        }
        else {
            for (i = 0; i < baris; i++) {
                pola[i][j] = matriks[ubahBar][j];
                ubahBar--;
            }
        }
    }

    //output
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom-1; j++) {
            printf("%d ", pola[i][j]);
        }
        printf("%d\n", pola[i][j]);
    }


    return 0;
}
