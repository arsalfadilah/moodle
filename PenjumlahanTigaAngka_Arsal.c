#include<stdio.h>
//Authors : Arsal Fadilah V.01

int sumOfthreeNum(int angka1, int angka2, int angka3);

int main(){
    int angka1, angka2, angka3, jumlah;

    //input
    scanf("%d %d %d", &angka1, &angka2, &angka3);

    //proses
    jumlah = sumOfthreeNum(angka1, angka2, angka3);

    //output
    printf("%d", jumlah);


    return 0;
}

int sumOfthreeNum(int angka1, int angka2, int angka3){
    int sum;

    sum = angka1 + angka2 + angka3;

    return sum;

}
