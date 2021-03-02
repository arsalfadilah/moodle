#include<stdio.h>
//Authors : Arsal Fadilah

float htngrata2(int arr[10050], int banyakSiswa) {
    float rata_rata = 0;
    int i;

    for (i = 0; i < banyakSiswa; i++) {
        rata_rata = rata_rata + arr[i];
    }

    return rata_rata / banyakSiswa;
}

void checkSiswa(int arr[10050], int *siswaProblem, int jmlhSiswa, float average) {
    int i;
    for (i = 0; i < jmlhSiswa; i++) {
        if (arr[i] < average) {
            *siswaProblem=*siswaProblem+1;
        }
    }
}

int main() {
    int nSiswa, i, siswaProblem = 0;
    int nilaiSiswa[10050];
    float average = 0;

    //input
    scanf("%d", &nSiswa);
    for (i = 0; i < nSiswa; i++) {
        scanf("%d", &nilaiSiswa[i]);
    }

    //proses
    average = htngrata2(nilaiSiswa, nSiswa);
    checkSiswa(nilaiSiswa, &siswaProblem, nSiswa, average);

    //output
    printf("%d", siswaProblem);

    return 0;
}
