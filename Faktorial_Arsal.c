#include<stdio.h>
//Authors : Arsal Fadilah V.01

int faktorial(int N);

int main(){
    int num, hasil;

    //input
    scanf("%d", &num);

    //proses
    hasil = faktorial(num);

    //output
    printf("%d", hasil);

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
