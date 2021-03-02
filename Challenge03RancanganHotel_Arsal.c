#include<stdio.h>
//authors : Arsal Fadilah V.01


int main() {
    int jumlah, i, j, loop, nummber = 0;
    int ary2d[22][22];

    //input
    scanf("%d", &jumlah);

    //proses
    for (loop = 0; loop < jumlah; loop++) {
        i = 0;
        for (j = jumlah - loop - 1; j < jumlah; j++) {
            nummber++;
            ary2d[i][j] = nummber;
            i++;
        }
    }

    for (loop = 0; loop < jumlah - 1; loop++) {
        i = loop+1;
        for (j = 0; j < jumlah-loop-1; j++) {
            nummber++;
            ary2d[i][j] = nummber;
            i++;
            if (nummber == jumlah * jumlah) {
                j = loop + 1;
                loop = jumlah;
            }
        }

    }

    //output
    for (i = 0; i < jumlah; i++) {
        for (j = 0; j < jumlah-1; j++) {
            printf("%d ", ary2d[i][j]);
        }
        printf("%d\n", ary2d[i][j]);
    }

    return 0;
}
