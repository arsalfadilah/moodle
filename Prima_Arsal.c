#include<stdio.h>
#include<stdbool.h>

int main(){
    int Bil, i, j;
    bool prima;

    scanf("%d", &Bil);
    if(Bil <= 1){
        prima = false;
    } else {
        i = 0;
        for (j=1 ; j <= Bil; j++){
            if(Bil % j == 0){
                i++;
            }
        }

        if(i<=2){
            prima = true ;
        } else {
            prima = false;
        }
    }

    if (prima){
        printf("prima");
    } else {
        printf("bukan prima");
    }

    return 0;
}
