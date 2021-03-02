#include<stdio.h>
//Authors : Arsal Fadilah V.01

float rerata(int data[], int n);
void inputdata(int n, int data[]);

int main(){
    int n;
    int numbers[100];

    //input
    scanf("%d", &n);
    inputdata(n, numbers);

    //proses & output
    printf("%.2f", rerata(numbers, n));


    return 0;
}

void inputdata(int n, int data[]){
    int i;

    //scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &data[i]);
    }
}

float rerata(int data[], int n){
    int i;
    float jumlah = 0;

    for(i=0; i<n; i++){
        jumlah = jumlah + data[i];
    }
    return jumlah/n;
}
