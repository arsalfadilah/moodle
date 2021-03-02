#include<stdio.h>
#include<stdbool.h>
//Authors : Arsal Fadilah V.01

int KPK(int p_1, int p_2){
    int a = p_1;
    int b = p_2;
    bool loop = true;

        while(loop){
        if(p_1==p_2){
            loop = false;
        }else if(p_1>p_2){
            p_2 = p_2+b;
        }else{
            p_1=p_1+a;
        }
    }

    return p_1;
}

int FPB(int a, int b){
    int sisa, c;

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
    return a;
}

int main(){
    int a, b, c, d;
    int e, f, bagi=2;

    //input
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    //proses penjumlahan
    if(b==d){
        e = a + c;
        f = b;
    }else{
        f = KPK(b, d);
        a = a * (f/b);
        c = c * (f/d);
        e = a + c;
    }

    //proses penyederhanaan
    while(FPB(e, f) != 1){
        if(e%bagi ==0 && f%bagi==0){
            e = e/bagi;
            f = f/bagi;
        }else{
            bagi++;
        }
    }

    //output
    printf("%d %d", e, f);

    return 0;
}
