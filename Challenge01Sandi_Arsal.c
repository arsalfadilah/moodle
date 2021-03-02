#include<stdio.h>
#include<string.h>
#include<ctype.h>
//authors : Arsal Fadilah V.01

int main() {
    char kalimat[35];
    int i, ukuran = 0, angka[35], n = 0;
    int check;
    //input
    gets(kalimat);
    ukuran = strlen(kalimat);
    //proses
    for (i = 0; i < ukuran; i++) {
        kalimat[i] = tolower(kalimat[i]);
        if (kalimat[i] == 'a' || kalimat[i] == 'b' ||
            kalimat[i] == 'c') {
            switch (kalimat[i]) {
            case 'a': angka[n] = 1; break;
            case 'b': angka[n] = 1; n++; angka[n] = 1; break;
            case 'c': angka[n] = 1; n++; angka[n] = 1; n++; angka[n] = 1; break;
            }
            if (kalimat[i+1] == 'a' || kalimat[i+1] == 'b' || kalimat[i+1] == 'c') {
                n++;
                angka[n] = -1;
            }
            n++;
        }
        else if (kalimat[i] == 'd' || kalimat[i] == 'e' ||
            kalimat[i] == 'f') {
            switch (kalimat[i]) {
            case 'd': angka[n] = 2; break;
            case 'e': angka[n] = 2; n++; angka[n] = 2; break;
            case 'f': angka[n] = 2;  n++; angka[n] = 2; n++; angka[n] = 2; break;
            }
            if (kalimat[i + 1] == 'd' || kalimat[i + 1] == 'e' || kalimat[i + 1] == 'f') {
                n++;
                angka[n] = -1;
            }
            n++;
        }
        else if (kalimat[i] == 'g' || kalimat[i] == 'h' ||
            kalimat[i] == 'i') {
            switch (kalimat[i]) {
            case 'g': angka[n] = 3; break;
            case 'h': angka[n] = 3; n++; angka[n] = 3; break;
            case 'i': angka[n] = 3; n++; angka[n] = 3; n++; angka[n] = 3; break;
            }
            if (kalimat[i + 1] == 'g' || kalimat[i + 1] == 'h' || kalimat[i + 1] == 'i') {
                n++;
                angka[n] = -1;
            }
            n++;
        }
        else if (kalimat[i] == 'j' || kalimat[i] == 'k' ||
            kalimat[i] == 'l') {
            switch (kalimat[i]) {
            case 'j': angka[n] = 4; break;
            case 'k': angka[n] = 4; n++; angka[n] = 4; break;
            case 'l': angka[n] = 4; n++; angka[n] = 4; n++; angka[n] = 4; break;
            }
            if (kalimat[i + 1] == 'j' || kalimat[i + 1] == 'k' || kalimat[i + 1] == 'l') {
                n++;
                angka[n] = -1;
            }
            n++;
        }
        else if (kalimat[i] == 'm' || kalimat[i] == 'n' ||
            kalimat[i] == 'o') {
            switch (kalimat[i]) {
            case 'm': angka[n] = 5; break;
            case 'n': angka[n] = 5; n++; angka[n] = 5; break;
            case 'o': angka[n] = 5; n++; angka[n] = 5; n++; angka[n] = 5; break;
            }
            if (kalimat[i + 1] == 'm' || kalimat[i + 1] == 'n' || kalimat[i + 1] == 'o') {
                n++;
                angka[n] = -1;
            }
            n++;
        }
        else if (kalimat[i] == 'p' || kalimat[i] == 'q' ||
            kalimat[i] == 'r') {
            switch (kalimat[i]) {
            case 'p': angka[n] = 6; break;
            case 'q': angka[n] = 6; n++; angka[n] = 6; break;
            case 'r': angka[n] = 6; n++; angka[n] = 6; n++; angka[n] = 6; break;
            }
            if (kalimat[i + 1] == 'p' || kalimat[i + 1] == 'q' || kalimat[i + 1] == 'r') {
                n++;
                angka[n] = -1;
            }
            n++;
        }
        else if (kalimat[i] == 's' || kalimat[i] == 't' ||
            kalimat[i] == 'u') {
            switch (kalimat[i]) {
            case 's': angka[n] = 7; break;
            case 't': angka[n] = 7; n++; angka[n] = 7; break;
            case 'u': angka[n] = 7; n++; angka[n] = 7; n++; angka[n] = 7; break;
            }
            if (kalimat[i + 1] == 's' || kalimat[i + 1] == 't' || kalimat[i + 1] == 'u') {
                n++;
                angka[n] = -1;
            }
            n++;
        }
        else if (kalimat[i] == 'v' || kalimat[i] == 'w' ||
            kalimat[i] == 'x') {
            switch (kalimat[i]) {
            case 'v': angka[n] = 8; break;
            case 'w': angka[n] = 8; n++; angka[n] = 8; break;
            case 'x': angka[n] = 8; n++; angka[n] = 8; n++; angka[n] = 8; break;
            }
            if (kalimat[i + 1] == 'v' || kalimat[i + 1] == 'w' || kalimat[i + 1] == 'x') {
                n++;
                angka[n] = -1;
            }
            n++;
        }
        else if (kalimat[i] == 'y' || kalimat[i] == 'z') {
            switch (kalimat[i]) {
            case 'y': angka[n] = 9; break;
            case 'z': angka[n] = 9; n++; angka[n] = 9; break;
            }
            if (kalimat[i + 1] == 'y' || kalimat[i + 1] == 'z') {
                n++;
                angka[n] = -1;
            }
            n++;
        }
        else if(kalimat[i]== ' '){
            angka[n] = 0;
            n++;
        }
    }

    for (i = 0; i < n - 1; i++) {
        printf("%d ", angka[i]);
    }printf("%d", angka[n-1]);
    return 0;
}
