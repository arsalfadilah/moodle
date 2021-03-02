#include<stdio.h>
//Authors : Arsal Fadilah V.01

void ratus(int* angkaTri);
void puluh(int* angka);
void satuan(int* angka);

int main() {
    int angka, threeNum;

    //input
    scanf("%d", &angka);

    //proses
    while (angka > 0) {
        if (angka == 1000000) {
            printf("satu juta");
            angka = angka % 1000000;
        }
        else if (angka / 1000000 > 1) {
            threeNum = angka / 1000000;
            while (threeNum > 0) {
                if (threeNum / 100 > 0) { ratus(&threeNum); }
                else if (threeNum / 10 > 0) { puluh(&threeNum); }
                else { satuan(&threeNum); }
            }
            angka = angka % 1000000;
            if (angka == 0) {
                printf(" juta");
            }
            else {
                printf(" juta ");
            }
        }
        else if (angka == 1000) {
            printf("seribu");
            angka = angka % 1000;
        }
        else if (angka / 1000 >= 1) {
            threeNum = angka / 1000;
            if (threeNum == 1) {
                printf("seribu ");
                angka = angka % 1000;
            }
            else {
                while (threeNum > 0) {
                    if (threeNum / 100 > 0) { ratus(&threeNum); }
                    else if (threeNum / 10 > 0) { puluh(&threeNum); }
                    else { satuan(&threeNum); }
                }
                angka = angka % 1000;
                if (angka == 0) {
                    printf(" ribu");
                }
                else {
                    printf(" ribu ");
                }
            }
        }
        else if (angka == 100) {
            printf("seratus");
            angka = angka % 100;
        }
        else if (angka / 100 >= 1) {
            threeNum = angka / 100;
            if (threeNum == 1) {
                printf("seratus ");
                angka = angka % 100;
            }
            else {
                ratus(&angka);
            }
        }
        else if (angka / 10 >=1) {
            puluh(&angka);
        }
        else {
            satuan(&angka);
        }
    }

    return 0;
}

void satuan(int* angka) {
    switch (*angka) {
    case 1: printf("satu"); break;
    case 2: printf("dua"); break;
    case 3: printf("tiga"); break;
    case 4: printf("empat"); break;
    case 5: printf("lima"); break;
    case 6: printf("enam"); break;
    case 7: printf("tujuh"); break;
    case 8: printf("delapan"); break;
    case 9: printf("sembilan"); break;
    }
    *angka = *angka - *angka;
}

void puluh(int* angka) {
    int puluhan = *angka / 10;
    int satu = *angka % 10;

    if (puluhan == 1) {
        if (*angka == 10) {
            printf("sepuluh");
        }
        else if (*angka == 11) {
            printf("sebelas");
        }
        else {
            satuan(&satu);
            printf(" belas");
        }*angka = *angka - *angka;
    }
    else {
        satuan(&puluhan);
        if (*angka % 10 == 0) {
            printf(" puluh");
        }
        else {
            printf(" puluh ");
        }*angka = *angka % 10;
    }



}


void ratus(int* angkaTri) {
    int ratusan = *angkaTri / 100;

    if (ratusan == 1 && *angkaTri % 100 == 0) {
        printf("seratus");
        *angkaTri = *angkaTri % 100;
    }
    else if (ratusan == 1 && *angkaTri % 100 != 0) {
        printf("seratus ");
        *angkaTri = *angkaTri % 100;
    }
    else {
        satuan(&ratusan);
        if (*angkaTri % 100 == 0) {
            printf(" ratus");
        }
        else {
            printf(" ratus ");
        }
        *angkaTri = *angkaTri % 100;
    }

}



