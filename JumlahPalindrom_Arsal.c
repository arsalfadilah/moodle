#include<stdio.h>
#include<string.h>
#include<stdbool.h>
//Authors : Arsal Fadilah V.01

void rowToCol(char arr_1[], char arr_2[][100], int *jmlhKata);
int cekPalindrom(int jmlhKata, char arr2[][100]);

int main(){
    char kalimat[10001];
    char kata[1000][100];
    int jmlhKata=0, hasil;

    //input
    gets(kalimat);

    //proses
    rowToCol(kalimat, kata, &jmlhKata);
    hasil = cekPalindrom(jmlhKata, kata);

    //output
    printf("%d", hasil);
    return 0;
}

int cekPalindrom(int jmlhKata, char arr2[][100]){
    int i, j, k, ukuran, count=0;
    bool sama = true;

    i = 0;
    while(i<jmlhKata){
        j=0;
        k=strlen(arr2[i])-1;
        sama=true;
        while(j<k && sama){
            if(arr2[i][j]!=arr2[i][k]){
                sama=false;
            }else{
                j++;
                k--;
            }
        }
        if(sama){
            count++;
        }
        i++;
    }
    return count;
}

void rowToCol(char arr_1[], char arr_2[][100], int *jmlhKata){
    int i, j=0, k=0;
    int ukuran=strlen(arr_1);

    for(i=0; i<ukuran; i++){
        if(arr_1[i]==32){
            j++;
            k=0;
        }else{
            arr_2[j][k]=arr_1[i];
            k++;
        }
    }
    *jmlhKata=j+1;
}
