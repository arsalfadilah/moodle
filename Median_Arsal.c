#include<stdio.h>
//authors : Arsal Fadilah V.01

int main() {
        static int bil[22];
        int nyari, jumlah;
        float median = 0;

        //input
        scanf("%d", &jumlah);
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &bil[0],
            &bil[1], &bil[2], &bil[3], &bil[4], &bil[5], &bil[6], &bil[7], &bil[8], &bil[9],
            &bil[10], &bil[11], &bil[12], &bil[13], &bil[14], &bil[15], &bil[16], &bil[17], &bil[18],
            &bil[19]);

        //proses
        if (jumlah % 2 == 0) {
            nyari = jumlah / 2;
            nyari = nyari - 1;
            median = (bil[nyari] + bil[nyari + 1]);
            median = median / 2;
        }
        else {
            nyari = jumlah + 1;
            median = (bil[(nyari-1) / 2]);
        }

        printf("%.1f", median);

        return 0;

    }
