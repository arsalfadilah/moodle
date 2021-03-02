#include<stdio.h>
//Authors : Arsal Fadilah V.01

int main(){
    int desimal=0;

    //input
    scanf("%d", &desimal);

    //proses
    while(desimal>0){
        if(desimal >= 1000){printf("M"); desimal=desimal-1000;}
        else if(desimal >= 900){printf("CM"); desimal=desimal-900;}
        else if(desimal >=500){printf("D"); desimal=desimal-500;}
        else if(desimal >=400){printf("CD"); desimal=desimal-400;}
        else if(desimal >=100){printf("C"); desimal=desimal-100;}
        else if(desimal >=90){printf("XC"); desimal=desimal-90;}
        else if(desimal >=50){printf("L"); desimal=desimal-50;}
        else if(desimal >=40){printf("XL"); desimal=desimal-40;}
        else if(desimal >=10){printf("X"); desimal=desimal-10;}
        else if(desimal >=9){printf("IX"); desimal=desimal-9;}
        else if(desimal >=5){printf("V"); desimal=desimal-5;}
        else if(desimal >=4){printf("IV"); desimal=desimal-4;}
        else if(desimal >=1){printf("I"); desimal=desimal-1;}
    }

    return 0;
}
