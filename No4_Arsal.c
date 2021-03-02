#include<stdio.h>
//Authors : Arsal Fadilah V.01

int main() {
    int i, awal, akhir;
    int sumNo4 = 0, kali=0;

    //input
    scanf("%d %d", &awal, &akhir);

    for (i = awal + 1; i < akhir; i++) {
        if (i > 0) {
            kali = (i + 4) / 10;
            if (i % ((10 * kali) + 4) != 0) {
                sumNo4++;
            }
        }
        else {
            kali = (i - 4) / 10;
            if (i % ((10 * -kali) + 4) != 0 || i == 0) {
                sumNo4++;
            }
        }
    }

    printf("%d", sumNo4);


    return 0;
}
