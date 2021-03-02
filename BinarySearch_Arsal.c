#include<stdio.h>
#include<stdbool.h>
//Authors : Arsal Fadilah V.01

void Short(int arr[], int N);
void binarySearch(int arr[], int awal, int akhir, int cari, int *iterasi, int *ada);

int main(){
    int i, jmlhData, angka;
    int ada=0, iterasi=0;
    int data[101];

    //input
    scanf("%d %d", &jmlhData, &angka);
    for(i=0; i<jmlhData; i++){
        scanf("%d", &data[i]);
    }

    //proses
    Short(data, jmlhData);
    binarySearch(data, 0, jmlhData-1, angka, &iterasi, &ada);
    if(ada==-1){
        printf("%d\n", iterasi);
        printf("not found");
    }else{
        printf("%d\n", iterasi);
        printf("found");
    }

    return 0;
}

void Short(int arr[], int N){
    int i, j, k=0;

    for(i=0; i<N; i++){
        for(j=i; j<N ; j++){
            if(arr[i]>arr[j]){
                k=arr[j];
                arr[j]=arr[i];
                arr[i]=k;
            }
        }
    }

}

void binarySearch(int arr[], int awal, int akhir, int cari, int *iterasi, int *ada){
    int mid;
    bool masih = true;

    while(awal<=akhir && masih){
        mid=(awal+akhir)/2;
        if(arr[mid]==cari){
            *iterasi = *iterasi + 1;
            masih=false;
        } else if(arr[mid]<cari){
            *iterasi = *iterasi +1;
            awal = mid + 1;
        } else {
            *iterasi = *iterasi +1;
            akhir = mid - 1;
        }
    }

    if(masih){
        *ada = -1;
    }

}
