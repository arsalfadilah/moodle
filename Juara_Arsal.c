#include<stdio.h>
#include<string.h>
#include<stdbool.h>
//Authors : Arsal Fadilah V.01

int main() {
    int i, j, k, juaraCatur, juaraNepak;
    int idxSangJuara = 0;
    char namaCatur[7][120];
    char namaNepak[7][120];
    char sangJuara[7][120];
    char kosong[120];
    bool sama = true;
    bool urut = true;

    //input
    scanf("%d", &juaraCatur);
    for (i = 0; i <= juaraCatur; i++) {
        fgets(namaCatur[i], sizeof(namaCatur[i]), stdin);
    }

    scanf("%d", &juaraNepak);
    for (i = 0; i <= juaraNepak; i++) {
        fgets(namaNepak[i], sizeof(namaNepak[i]), stdin);
    }

    //proses
    i = 1;
    while (i <= juaraCatur) {
        j = 0;
        while (j <= juaraNepak) {
            if (strlen(namaCatur[i]) == strlen(namaNepak[j])) {
                k = 0;
                sama = true;
                while (k < strlen(namaCatur[i]) && sama) {
                    if (namaCatur[i][k] != namaNepak[j][k]) {
                        sama = false;
                    }
                    k++;
                }
            }
            else {
                sama = false;
            }
            if (sama) {
                strcpy(sangJuara[idxSangJuara], namaNepak[j]);
                idxSangJuara++;
            }
            j++;
        }
        i++;
    }

    if (idxSangJuara > 1) {
        i = 0;
        while (i < idxSangJuara - 1) {
            k = i + 1;
            while (k < idxSangJuara) {
                j = 0;
                urut = true;
                while (urut && j < strlen(sangJuara[i])) {
                    if (sangJuara[i][j] < sangJuara[k][j]) {
                        strcpy(kosong, sangJuara[i]);
                        strcpy(sangJuara[i], sangJuara[k]);
                        strcpy(sangJuara[k], kosong);
                        urut = false;
                    }
                    else if (sangJuara[i][j] == sangJuara[k][j]) {
                        j++;
                    }
                    else {
                        urut = false;
                    }
                }
                k++;
            }
            i++;
        }
        for (i = 0; i < idxSangJuara; i++) {
            printf("%s", sangJuara[i]);
        }

    }
    else if (idxSangJuara == 1) {
        printf("%s", sangJuara[0]);
    }
    else {
        printf("tidak ada sang juara");
    }


    return 0;
}
