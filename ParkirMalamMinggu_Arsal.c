#include<stdio.h>
//authors : Arsal fadilah V.01

int main(){
    int kendaraan, waktu, totalBiaya;

    //input
    scanf("%d", &kendaraan);
    scanf("%d", &waktu);

    //proses dan output
    switch(kendaraan){
    case 1:
        if(waktu<=5){
           totalBiaya=1500*waktu;
           printf("%d", totalBiaya);
        }else if(waktu>5 && waktu<=8){
            totalBiaya=(1500*waktu)+(500*(waktu-5));
            printf("%d", totalBiaya);
        } else if (waktu>8){
            printf("disegel");
        }
        break;
    case 2:
        if(waktu<=5){
           totalBiaya=1000*waktu;
           printf("%d", totalBiaya);
        }else if(waktu>5 && waktu<=8){
            totalBiaya=(1000*waktu)+(500*(waktu-5));
            printf("%d", totalBiaya);
        } else if (waktu>8){
            printf("disegel");
        }
        break;
    }

    return 0;
}
