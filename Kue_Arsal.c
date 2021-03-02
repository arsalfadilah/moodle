#include<stdio.h>
#include<string.h>
//author : Arsal Fadilah V.01

int main() {
    char kue1[20], kue2[20];
    float kesamaan, hSama = 0;
    int i, j, szKue1 = 0, szKue2 = 0, szMax = 0;

    //input
    scanf("%f\n", &kesamaan);
    gets(kue1);
    gets(kue2);

    //proses
    szKue1 = strlen(kue1);
    szKue2 = strlen(kue2);

    //pengecheckan
    for (i = 0; i <= szKue1; i+=2) {
        for (j = 0; j <= szKue2; j+=2) {
            if (kue1[i] == kue2[j]) {
                hSama++;
                j = szKue2;
            }
        }
    }

    //jumlh bahan terbanyak
    if (szKue1 >= szKue2) {
        szMax = szKue1 - ((szKue1 - 1) / 2);
    }
    else {
        szMax = szKue2 - ((szKue2 - 1) / 2);
    }

    //persentase huruf yg sama
    hSama = (hSama/szMax) * 100;

    //cek kesamaan
    if (hSama >= kesamaan) {
        printf("sama");
    }
    else {
        printf("tidak sama");
    }


    return 0;
}
