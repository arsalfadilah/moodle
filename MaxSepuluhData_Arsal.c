#include<stdio.h>
//Authors : Arsal Fadilah V.01

int max(int value1, int value2);
int maxValueNumbers(int number[], int n);
void inputValue(int numbers[], int n);

int main(){
    const int MAX_DATA = 10;
    int numbers1[MAX_DATA], numbers2[MAX_DATA];

    //input
    inputValue(numbers1, MAX_DATA);
    inputValue(numbers2, MAX_DATA);

    //proses && output
    printf("%d %d",
        maxValueNumbers(numbers1, MAX_DATA),
        maxValueNumbers(numbers2, MAX_DATA));

    return 0;
}

void inputValue(int numbers[], int n){
    int i;

    for(i=0; i<n; i++){
        scanf("%d", &numbers[i]);
    }

}

int max(int value1, int value2){
    if(value1>value2){
        return value1;
    }else{
        return value2;
    }
}

int maxValueNumbers(int number[], int n){
    int i, value=number[0];

    for(i=0; i<n; i++){
        value = max(number[i], value);
    }

    return value;
}

