#include<stdio.h>
#include<string.h>
#include<stdbool.h>
//Authors : Arsal Fadilah V.01

void cekPalindrom(int jmlhKalimat, char kalimat[], char kata[][100], int* jmlhKata);
void isiPolindrom(int idxBar, int awal, int akhir, char kata[], char polindrom[][100]);

int main() {
    char kalimat[10001];
    char kata[1000][100];
    int jmlhKalimat = 0, jmlhKata = 0, i;

    //input
    fgets(kalimat, sizeof(kalimat), stdin);

    //proses
    jmlhKalimat = strlen(kalimat) - 1;
    cekPalindrom(jmlhKalimat, kalimat, kata, &jmlhKata);

    //output
    for (i = 0; i < jmlhKata-1; i++) {
        printf("%s ", kata[i]);
    }printf("%s\n", kata[i]);

    return 0;
}

void cekPalindrom(int jmlhKalimat, char kalimat[], char kata[][100], int* jmlhKata) {
    int i, awal = 0, akhir, konsAwal, konsAkhir;
    bool sama = true;

    i = 0;
    while (i <= jmlhKalimat) {
        if (kalimat[i] == 32 || kalimat[i]=='\n') {
            konsAwal = awal;
            akhir = i - 1;
            konsAkhir = akhir;
            sama = true;
            while (awal < akhir && sama) {
                if (kalimat[awal] != kalimat[akhir]) {
                    sama = false;
                }
                else {
                    awal++;
                    akhir--;
                }
            }
            if (sama) {
                isiPolindrom(*jmlhKata, konsAwal, konsAkhir, kalimat, kata);
                *jmlhKata = *jmlhKata + 1;
            }
            awal = i + 1;
        }
        i++;
    }

}

void isiPolindrom(int idxBar, int awal, int akhir, char kata[], char polindrom[][100]) {
    int i, idxKol = 0;

    for (i = awal; i <= akhir; i++) {
        polindrom[idxBar][idxKol] = kata[i];
        idxKol++;
    }
}
