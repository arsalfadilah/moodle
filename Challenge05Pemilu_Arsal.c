#include<stdio.h>
//Authors : Arsal Fadilah V.01

int SearchPemenang(int arr[][100], int can, int noUrut);

int main() {
    int testCase, sumOfCan, sumOfReg;
    int i, j, k;
    int kotakSuara[100][100];
    static  int suaraCan[100][100];
    int pemenang[100];

    //input
    scanf("%d", &testCase);
    for (i = 0; i < testCase; i++) {

        scanf("%d %d", &sumOfCan, &sumOfReg);
        for (j = 0; j < sumOfReg; j++) {
            for (k = 0; k < sumOfCan; k++) {
                scanf("%d", &kotakSuara[j][k]);
                suaraCan[i][k] = suaraCan[i][k] + kotakSuara[j][k];
            }
        }
        //proses
        //sumSuaraofCan(kotakSuara, sumOfReg, sumOfCan, suaraCan);
        pemenang[i] = SearchPemenang(suaraCan, sumOfCan, i) + 1;
    }

    //output
    for (i = 0; i < testCase; i++) {
        printf("%d\n", pemenang[i]);
    }


    return 0;
}

int SearchPemenang(int arr[][100], int can, int noUrut) {
    int i, pemenang = 0, Suara = arr[noUrut][0];

    for (i = 0; i < can; i++) {
        if (arr[noUrut][i] > Suara) {
            Suara = arr[noUrut][i];
            pemenang = i;
        }
    }

    return pemenang;

}
