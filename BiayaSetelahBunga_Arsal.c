#include<stdio.h>
//Authors : Arsal Fadilah V.01

int main(){
    float biayaAwal, bunga, totalBiaya;

    //input
    scanf("%f", &biayaAwal);
    scanf("%f", &bunga);
    //proses
    totalBiaya=biayaAwal+(biayaAwal*bunga/100);
    //output
    printf("%.2f\n", totalBiaya);

    return 0;
}
