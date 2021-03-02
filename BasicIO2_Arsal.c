#include<stdio.h>
//author : Arsal Fadilah, V.01

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d", x);
        for(x=x+1;x<=y;x++){
            printf(" %d", x);
        }
    printf("\n");

    return 0;
}
