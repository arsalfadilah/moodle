#include<stdio.h>
#include<stdbool.h>
#include<string.h>
//Authors : Arsal Fadilah V.01

int main() {
    char kue1[14][10], kue2[14][10];
    float kesamaan, persenSama;
    int sumOfk1, sumOfk2, i, j, k=0, l=0, sama = 0;
    bool samayah = true;

    //input
    scanf("%f", &kesamaan);
    scanf("%d", &sumOfk1);
    for (i = 0; i <= sumOfk1; i++) {
        fgets(kue1[i], sizeof(kue1[i]), stdin);
    }

    scanf("%d", &sumOfk2);
    for (i = 0; i <= sumOfk2; i++) {
        fgets(kue2[i], sizeof(kue2[i]), stdin);
    }

    //printf("%d", strlen(kue1[1]));
    //proses
    i = 1;
    while (i <= sumOfk1) {
        j = 1;
        while (j <= sumOfk2) {
            if (strlen(kue1[i]) == strlen(kue2[j])) {
                l = 0;
                samayah = true;
                while (l < strlen(kue1[i]) && samayah) {
                    if (kue1[i][l] != kue2[j][l]) {
                        samayah = false;
                    }
                    l++;
                }
            }
            else {
                samayah = false;
            }

            if (samayah) {
                sama++;
            }
            j++;
        }
        i++;
    }
    if (sumOfk1 >= sumOfk2) {
        persenSama = (sama*100) / sumOfk1;
    }
    else {
        persenSama = (sama / sumOfk2) * 100;
    }

    //ouput
    if (persenSama >= kesamaan) {
        printf("sama");
    }
    else {
        printf("tidak sama");
    }

    return 0;
}
