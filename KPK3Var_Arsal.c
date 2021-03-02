#include<stdio.h>
#include<stdbool.h>
//Author : Arsal Fadilah V.01

int KPK3Var(int a, int b, int c);
int KPK2Var(int bil_1, int bil_2);
void SORTING(int *a, int *b, int *c);
void swap(int *num1, int *num2);

int main(){
    int bil_1, bil_2, bil_3;

    //input
    scanf("%d %d %d", &bil_1, &bil_2, &bil_3);

    //proses
    SORTING(&bil_1, &bil_2, &bil_3);

    //proses & output
    printf("%d", KPK3Var(bil_1, bil_2, bil_3));

    return 0;
}

int KPK3Var(int a, int b, int c){
    int temp, hasil;

    temp = KPK2Var(a, b);
    hasil = KPK2Var(temp, c);

    return hasil;
}

int KPK2Var(int bil_1, int bil_2){
    bool sama = true;
    const int a = bil_1;
    const int b = bil_2;

    while(sama){
        if(bil_1==bil_2){
            sama = false;
        }else if(bil_1>bil_2){
            bil_2 = bil_2 + b;
        }else{
            bil_1 = bil_1 + a;
        }
    }

    return bil_1;
}

void SORTING(int *a, int *b, int *c){
    int i;

    for(i=0; i<3; i++){
        if(*a > *b){
            swap(&a, &b);
        }else if(*b >*c){
            swap(&b, &c);
        }
    }

}

void swap(int *num1, int *num2){
    int temp;

    temp = *num2;
    *num2 = *num1;
    *num1 = temp;

}
