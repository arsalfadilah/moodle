#include<stdio.h>
//Authors : Arsal Fadilah V.01

int FPB(int num1, int num2);
void swap(int *a, int *b);

int main(){
    int num1, num2, num3;
    int fpb2Var;

    //input
    scanf("%d %d %d", &num1, &num2, &num3);

    //proses
    fpb2Var = FPB(num1, num2);

    //output
    printf("%d", FPB(fpb2Var, num3));

    return 0;
}

int FPB(int num1, int num2){
    int sisa;

    //proses
    if(num1<num2){
        swap(&num1, &num2);
    }

    if(num1!=0 && num2!=0){
        do{
            sisa = num1%num2;
            num1=num2;
            num2=sisa;
        }while(sisa !=0);
    }

    //output
    return num1;

}

void swap(int *a, int *b){
    int c;
        c = *a;
        *a = *b;
        *b = c;
}
