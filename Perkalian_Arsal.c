#include<stdio.h>
//Authors : Arsal Fadilah V.01

int perkalian(int angka1, int angka2);

int main(){
    int angka1, angka2;
    int hasil;

    //input
    scanf("%d %d", &angka1, &angka2);

    //proses
    hasil = perkalian(angka1, angka2);

    //ouput
    printf("%d", hasil);

    return 0;
}

int perkalian(int angka1, int angka2){
    int sum;

    sum = angka1 * angka2;

    return sum;
}
