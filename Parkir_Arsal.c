#include<stdio.h>
//authors : Arsal fadilah V.01

int main(){
    int jenisKendaraan, waktu, totalBiaya;

    //input
    scanf("%d", &jenisKendaraan);
    scanf("%d", &waktu);

    //proses
    switch(jenisKendaraan){
    case 1:
        totalBiaya=2000+((waktu-1)*1000);
        break;
    case 2:
        totalBiaya=1000+((waktu-1)*500);
        break;
    }

    //output
    printf("%d", totalBiaya);

    return 0;
}
