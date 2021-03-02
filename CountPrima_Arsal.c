#include<stdio.h>
//authors : Arsal Fadilah V.01

int main(){
    int Bil[15], i, j, count=0;
    int check, ngisi;

    //input
    for(ngisi=0; ngisi<10; ngisi++){
        scanf("%d", &Bil[ngisi]);
    }

    //proses
    for(check =0 ; check<10; check++){
        if(Bil[check] <= 1){
            count=0;
        } else {
            i = 0;
            for (j=1 ; j <= Bil[check]; j++){
                if(Bil[check] % j == 0){
                    i++;
                }
            }

            if(i<=2){
                count++;
            }
        }
    }

    //output
    printf("%d", count);

    return 0;
}
