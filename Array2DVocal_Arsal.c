#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
//authors : Arsal Fadilah V.01

int main(){
    char ary2d[5][5];
    int i, j;
    bool ada = true;

    //input
    for(i=0; i<3; i++){
        scanf(" %c %c %c", &ary2d[i][0], &ary2d[i][1],
        &ary2d[i][2]);
    }


    //proses & output
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(tolower(ary2d[i][j])=='a'|| tolower(ary2d[i][j])=='i' ||
               tolower(ary2d[i][j])=='u' || tolower(ary2d[i][j])=='e' ||
               tolower(ary2d[i][j])=='o'){
                    printf("%c: (%d,%d)\n", ary2d[i][j], i+1, j+1);
                    ada = false;
               }
        }
    }

    if(ada){
        printf("tidak ada huruf vokal");
    }


    return 0;
}
