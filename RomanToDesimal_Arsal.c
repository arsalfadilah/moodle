#include<stdio.h>
#include<string.h>
//Authors : Arsal Fadilah V.01

int main(){
    char romawi[17];
    int szRomawi=0, desimal=0, i=0;

    //input
    scanf("%s", &romawi);
    szRomawi=strlen(romawi);

    //proses
    while(i<szRomawi){
        if(romawi[i]=='I' && romawi[i+1]=='V'){desimal=desimal+4; i++;}
        else if(romawi[i]=='I'&&romawi[i+1]=='X'){desimal=desimal+9; i++;}
        else if(romawi[i]=='X'&&romawi[i+1]=='L'){desimal=desimal+40; i++;}
        else if(romawi[i]=='X'&&romawi[i+1]=='C'){desimal=desimal+90; i++;}
        else if(romawi[i]=='C'&&romawi[i+1]=='D'){desimal=desimal+400; i++;}
        else if(romawi[i]=='C'&&romawi[i+1]=='M'){desimal=desimal+900; i++;}
        else if(romawi[i]=='I'){desimal=desimal+1;}
        else if(romawi[i]=='V'){desimal=desimal+5;}
        else if(romawi[i]=='X'){desimal=desimal+10;}
        else if(romawi[i]=='L'){desimal=desimal+50;}
        else if(romawi[i]=='C'){desimal=desimal+100;}
        else if(romawi[i]=='D'){desimal=desimal+500;}
        else if(romawi[i]=='M'){desimal=desimal+1000;}
        i++;
    }

    printf("%d", desimal);

    return 0;
}
