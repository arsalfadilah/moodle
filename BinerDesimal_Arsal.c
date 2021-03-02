#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//Authors : Arsal Fadilah V.01

int main() {
    char biner [50];
    int desimal = 0, pangkat=0;
    int lbiner = 0, i ;
    int arrBin[200];

    //input
    scanf("%s", &biner);
    lbiner = strlen(biner);

    for (i = 0; i < lbiner; i++) {
        arrBin[i] = biner[i] - '0';
    }

    //proses
    for (i = 0; i < lbiner; i++) {
        pangkat = pow(2, (lbiner - 1) - i);
        desimal = desimal + (arrBin[i] * pangkat);
    }

    printf("%lld", desimal);

    return 0;
}
