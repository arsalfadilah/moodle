#include<stdio.h>

//authors : Arsal Fadilah V.02

int main() {
    int wadahPrima[38500];
    int x=0, i=0, j=0, y=0, idxPrim = 0;
    int idxA =0;

    scanf("%d %d", &x, &y);

    for (x; x <= y; x++) {
        i = 0;
        for (j = 1; j <= x; j++) {
            if (x % j == 0) {
                i++;
            }
            if (i > 2) {
                j = x;
            }
        }

        if (i == 2) {
            wadahPrima[idxPrim] = x;
            idxPrim++;
            idxA=idxPrim-1;
        }
    }


    printf("%d\n", wadahPrima[idxA]-wadahPrima[0]);

    return 0;
}
