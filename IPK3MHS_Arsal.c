#include<stdio.h>
#include<string.h>
//Authors : Arsal Fadilah

int main() {
    char Nama[4][100];
    char KodeHuruf[4][10];
    static int KodeAngka[10];
    static float Nilai[3];
    int sks[8] = { 4, 4, 3, 3, 3, 3, 2, 2 };
    int i, h;

    //input Proses
    for (h = 0; h < 3; h++) {
        //fgets(Nama[h], sizeof(Nama[h]), stdin);
        gets(Nama[h]);
            //Nama[h][strlen(Nama[h]) - 1] = '\0';
        //fgets(KodeHuruf[h], sizeof(KodeHuruf[h]), stdin);
        gets(KodeHuruf[h]);
            //KodeHuruf[h][strlen(KodeHuruf[h]) - 1] = '\0';
        for (i = 0; i < 7; i++) {
            //cara input char yg ada spasinya
            switch (KodeHuruf[h][i]) {
            case 'A': KodeAngka[i] = 4 * sks[i]; break;
            case 'B': KodeAngka[i] = 3 * sks[i]; break;
            case 'C': KodeAngka[i] = 2 * sks[i]; break;
            case 'D': KodeAngka[i] = 1 * sks[i]; break;
            case 'E': KodeAngka[i] = 0 * sks[i]; break;
            }
            Nilai[h] = Nilai[h] + KodeAngka[i];
        }

    }
    for (i = 0; i < 3; i++) {
        Nilai[i]=Nilai[i]/12;
    }

    //Output
    for (i = 0; i < 2; i++) {
        printf("%s %.2f\n", Nama[i], Nilai[i]);
    } printf("%s %.2f", Nama[i], Nilai[i]);

    return 0;
}
