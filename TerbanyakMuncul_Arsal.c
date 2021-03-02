#include<stdio.h>
//Authors : Arsal Fadilah V.01

void frek(int arr[], int idxarr, int frekuensi[]);
int modus(int arr[], int idxarr);

int main() {
    int i, n;
    int ID[1001];
    int Frekuensi[1001];

    //input
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ID[i]);
        Frekuensi[i] = ID[i];
    }

    //proses
    frek(ID, n, Frekuensi);

    //output
    printf("%d", ID[modus(Frekuensi, n)]);

    return 0;
}

void frek(int arr[], int idxarr, int frekuensi[]) {
    int i, j, hasil;

    for (j = 0; j < idxarr; j++) {
        if (frekuensi[j] != -1) {
            hasil = 1;
            for (i = j+1; i < idxarr; i++) {
                if (arr[j] == frekuensi[i]) {
                    hasil++;
                    frekuensi[i] = -1;
                }
            }
            frekuensi[j] = hasil;
        }
    }
}

int modus(int arr[], int idxarr) {
    int i, max = arr[0], idx = 0;

    for (i = 0; i < idxarr; i++) {
        if (arr[i] > max) {
            max = arr[i];
            idx = i;
        }
    }
    return idx;
}
