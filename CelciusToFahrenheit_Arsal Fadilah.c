#include<stdio.h>
//Authors : Arsal Fadilah V.01

int main(){
    float celcius, fahrenheit;

    //input
    scanf("%f", &celcius);
    //proses
    fahrenheit=celcius*1.8+32;
    //output
    printf("%.2f\n", fahrenheit);

    return 0;
}
