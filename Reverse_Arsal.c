#include<stdio.h>
#include<string.h>

int main(){
    char kalimat[15];
    int i;

    //input
    gets(kalimat);

    //ouput
    for(i=strlen(kalimat)-1; i>=0; i--){
        printf("%c", kalimat[i]);
    }

    return 0;
}
