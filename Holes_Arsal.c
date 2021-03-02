#include<stdio.h>
#include<string.h>
//authors : Arsal Fadilah V.01

int main(){
   char holes1[6]="ADOPQR", holes2[1]="B";
   char kalimat[100];
   int i, j, k, hitung, ukr;
   hitung=0;

   //input
   printf("Masukkan kalimat : ");
   gets(kalimat);
   ukr=strlen(kalimat);
    //convert huruf kecil ke besar
    for(i=0;i<ukr;i++){
        if(kalimat[i]>=97 && kalimat[i]<=122){
            kalimat[i]=kalimat[i]-32;
        }
    }


   //proses
   for(i=0;i<ukr;i++){
        for(j=0;j<6;j++){
            if(kalimat[i]==holes1[j]){
                hitung++;
            }
        }
        for(k=0;k<1;k++){
            if(kalimat[i]==holes2[k]){
                hitung=hitung+2;
            }
        }
   }

   //output
   printf("Total huruf berlubang : %d\n", hitung);

    system("pause");
    exit(0);
    return 0;
}
