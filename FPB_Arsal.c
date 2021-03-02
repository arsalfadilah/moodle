#include <stdio.h>
//Authors : Arsal Fadilah V.01

int main(){
  int a,b,c,sisa;
    //input
    scanf("%d %d", &a, &b);

    //proses
    if(a<b){
        c=a;
        a=b;
        b=c;
    }

    if(a!=0 && b!=0){
        do{
            sisa = a%b;
            a=b;
            b=sisa;
        }while(sisa !=0);
    }

    //output
    printf("%d",a);

  return 0;
}
