#include<stdio.h>
//Authors : Arsal Fadilah V.01

int main(){
    int aBaris, count=3, i;
    int arr[20];

    //input
    scanf("%d", &aBaris);
    arr[0]=aBaris;

    //proses
    for(i=0; i<15; i++){
        arr[i+1]=arr[i]+count;
        count=count+1;
        if(count==6){
            count=3;
        }
    }

    //output
    for(i=0; i<14; i++){
        printf("%d ", arr[i]);
    } printf("%d", arr[i]);

    return 0;

}
