#include<stdio.h>
//Authors : Arsal Fadilah V.01

void Short(int arr[], int N);

int main(){
    int i, Peserta, Lolos;
    int arr[1002];

    //input
    scanf("%d %d", &Peserta, &Lolos);
    for(i=0; i<Peserta; i++){
        scanf("%d", &arr[i]);
    }

    //proses
    Short(arr, Peserta);

    //output
    for(i=0; i<Lolos; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}

void Short(int arr[], int N){
    int i, j, k=0;

    for(i=0; i<N; i++){
        for(j=i; j<N ; j++){
            if(arr[i]<arr[j]){
                k=arr[j];
                arr[j]=arr[i];
                arr[i]=k;
            }
        }
    }

}
