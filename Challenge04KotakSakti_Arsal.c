#include<stdio.h>
//Authors : Arsal Fadilah V.01

void konstanta(int konsSakti[]){
    int i, pengali=5, tmbhGanjil=3, tmbhGenap=2, tiga=3;
    int ordo=3;

    for(i=0; i<100; i++){
        if(ordo%2==0){
            konsSakti[i]=ordo*pengali+tmbhGenap;
            pengali=pengali+tmbhGanjil;
            tmbhGanjil+=2;
            ordo++;
            tmbhGenap+=2;
        }else{
            konsSakti[i]=ordo*pengali;
            pengali=pengali+tmbhGanjil;
            tmbhGanjil+=2;
            ordo++;
        }
        //printf("%d\n", konstanta[i]);
    }
}

int searchSakti(int ordo, int groupSakti[]){

    ordo = ordo - 3;

    return groupSakti[ordo];
}

int main(){
    int i, n, cariOrdo[110];
    int groupSakti[110];

    //input
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &cariOrdo[i]);
    }

    //proses & output
    konstanta(groupSakti);
    for(i=0; i<n; i++){
        printf("%d\n", searchSakti(cariOrdo[i], groupSakti));
    }

    return 0;
}
