#include<stdio.h>
#include<stdbool.h>
//authors : Arsal Fadilah V.01

struct myStruct {
    int array1[12];
    int array2[12];
}titik;

int main() {
    int i;
    bool sama = true;
    //pengisian array1
    for (i = 0; i <9 ; i+=2) {
        scanf(" %d %d", &titik.array1[i], &titik.array1[i+1]);
    }
    //pengisian array2
    for (i = 0; i < 9; i+=2) {
        scanf(" %d %d", &titik.array2[i], &titik.array2[i+1]);
    }
    //printf("%d %d", titik.array1[0], titik.array2[9]);
    //proses
    for(i=0; i<9; i+=2){
        if(titik.array1[i]!=titik.array2[i] || titik.array1[i+1]!=titik.array2[i+1]){
            sama = false;
            i = 9;
        }
    }

    if(sama){
        printf("sama");
    }else{
        printf("tidak sama");
    }

    return 0;
}
