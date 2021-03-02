#include<stdio.h>
//Authors : Arsal Fadilah V.01

int faktorial(int N);

int main(){
    int jmlhBuku, slotBuku;
    int jmlhCara;

    //input
    scanf("%d %d", &jmlhBuku, &slotBuku);

    //proses
    jmlhCara = faktorial(slotBuku)/faktorial(slotBuku-jmlhBuku);

    //output
    printf("%d", jmlhCara);

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
