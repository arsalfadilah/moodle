#include<stdio.h>
#include<math.h>
//authors : Arsal Fadilah V.01

struct lingkaran{
    int x;
    int y;
}Point;

int main(){
    int R=0;
    int a, b, lingkaran=0;

    //input pusat lingkaran
    scanf("%d %d", &Point.x, &Point.y);
        a=Point.x;
        b=Point.y;

    //input jari-jari dan titik (x,y)
    scanf("%d", &R);
        R=pow(R, 2);

    scanf("%d %d", &Point.x, &Point.y);

    //proses
    lingkaran=pow((Point.x-a), 2) + pow((Point.y-b), 2);

    if(Point.x==a & Point.y==b){
        printf("tepat pada titik pusat");
    }else if(lingkaran==R){
        printf("tepat pada lingkaran");
    }else if(lingkaran<R){
        printf("di dalam lingkaran");
    }else {
        printf("di luar lingkaran");
    }


    return 0;
}
