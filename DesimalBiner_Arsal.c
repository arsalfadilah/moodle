#include<stdio.h>
#include<stdbool.h>
//Authors : Arsal Fadilah V.01

int main(){
    int desimal, count=0, biner=0, i;
    int arrBin[50];
    bool beres=true;

    //input
    scanf("%d", &desimal);

    //proses
    while(beres){
        if(desimal%2==0){
            arrBin[count]=0;
            count++;
        }else if(desimal%2==1){
            arrBin[count]=1;
            count++;
        }
        if(desimal/2==0){
            beres = false;
        }else{
            desimal=desimal/2;
        }
    }

    //output
    for(i=count-1; i>=0; i--){
        printf("%d", arrBin[i]);
    }

    return 0;
}
