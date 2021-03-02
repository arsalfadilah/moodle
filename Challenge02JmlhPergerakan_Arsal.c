#include<stdio.h>
#include<stdbool.h>
//authors : Arsal Fadilah V.01

int main() {
    int hitung = 0;
    int x1, x2, y1, y2;
    bool masih = true;

    //input
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    //proses
     if (x1 == x2 && y1 == y2) {
            masih = false;
     }

    while (masih) {
        if (x1 <= x2) {
            x1++;
            hitung++;
        }
        else if (x1 > x2) {
            x1--;
            hitung++;
        }

        if (x1 == x2 && y1 == y2) {
            masih = false;
        }else if (y1 <= y2) {
            y1++;
            hitung++;
        }
        else if (y1 > y2) {
            y1--;
            hitung++;
        }

        if (x1 == x2 && y1 == y2) {
            masih = false;
        }
    }

    //oupput
    printf("%d", hitung);

    return 0;
}
