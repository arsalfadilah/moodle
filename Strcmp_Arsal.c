#include<stdio.h>
#include<string.h>

int main(){
    char k1[20], k2[20];
    int i, ukuran = 0, selisih=0, posisi=0, szK1=0, szK2=0;

    //input
    scanf("%s", &k1);
    scanf("%s", &k2);
    szK1=strlen(k1);
    szK2=strlen(k2);

    if(szK1>szK2){
        ukuran=szK1;
    } else{
        ukuran=szK2;
    }

    //proses
    for(i=0; i<ukuran; i++){
        if(k1[i]!=k2[i]){
            selisih=k1[i]-k2[i];
            posisi=i+1;
            i=ukuran;
        }
    }

    //output
    if(selisih>0){
        printf("+%d\n", selisih);
    }else{
        printf("%d\n", selisih);
    }
        printf("%d\n", posisi);

    return 0;
}
