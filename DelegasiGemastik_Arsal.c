#include<stdio.h>
//Authors : Arsal Fadilah V.01

int faktorial(int N);

int main(){
    int Siap, Pilih, combinasi;

    //input
    scanf("%d %d", &Siap, &Pilih);

    //proses
    combinasi = faktorial(Siap)/(faktorial(Pilih)*faktorial(Siap-Pilih));

    //output
    printf("%d", combinasi);

    return 0;
}

int faktorial(int N){
    int sum = 1;

    while(N>0){
        sum = sum * N;
        N--;
    }

    return sum;
}
