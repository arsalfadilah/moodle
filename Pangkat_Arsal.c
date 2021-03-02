#include<stdio.h>
//Authors : Arsal Fadilah

int pangkat(int num1, int num2);

int main(){
    int num, idx;
    int hasil;

    //input
    scanf("%d %d", &num, &idx);

    //proses
    hasil = pangkat(num, idx);

    //output
    printf("%d", hasil);

    return 0;
}

int pangkat(int num1, int num2){
    int i, sum = num1;

    if(num2!=0){
        for(i=1; i<num2; i++){
            sum = sum * num1;
        }
    } else {
        sum = 1;
    }


    return sum;
}
