#include<stdio.h>
//Authors : Arsal Fadilah V.01

void swap(int *angka1, int *angka2);

int main(){
    int angka1, angka2;

    //input
    scanf("%d %d", &angka1, &angka2);

    //proses
    swap(&angka1, &angka2);

    //output
    printf("%d %d", angka1, angka2);

    return 0;
}

void swap(int *angka1, int *angka2){
    int temp;

    temp = *angka1;
    *angka1 = *angka2;
    *angka2 = temp;

}

