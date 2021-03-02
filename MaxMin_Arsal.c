#include<stdio.h>
//Authors : Arsal Fadilah V.01

int max(int num1, int num2);
int Min(int num1, int num2);

int main(){
    int num1, num2;

    //input
    scanf("%d %d", &num1, &num2);

    //proses && output
    printf("%d %d", max(num1, num2), Min(num1, num2));


    return 0;
}

int max(int num1, int num2){

    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}

int Min(int num1, int num2){

    if(num1<num2){
        return num1;
    } else {
        return num2;
    }
}
