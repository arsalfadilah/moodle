#include<stdio.h>
#include<stdbool.h>

int main(){
    int bil_1, bil_2, a, b;
    bool KPK = true;

    //input
    scanf("%d %d", &bil_1, &bil_2);
    a = bil_1;
    b = bil_2;

    //proses
    while(KPK){
        if(bil_1==bil_2){
            KPK=false;
        }else if(bil_1>bil_2){
            bil_2=bil_2+b;
        }else{
            bil_1=bil_1+a;
        }
    }

    //output
    printf("%d", bil_1);

    return 0;
}
