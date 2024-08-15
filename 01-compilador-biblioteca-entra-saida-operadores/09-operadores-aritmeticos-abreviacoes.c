#include<stdio.h>

void main(){

    // e = e + 5;
    int e = 5;
    e += 5;
    printf("e += 5: %i\n",e);

    //f = f -2
    int f = 12;
    f -= 2;
    printf("e -= 2: %i\n",f);

    //g = g *3
    int g = 10;
    g *= 3;
    printf("g *= 5: %i\n",g);

    //h = h / 4
    int h = 40;
    h /= 4;
    printf("h /= 5: %i\n",h);
    
    //i = i % 6
    int i = 35;
    i %= 6;
    printf("i %%= 5: %i\n",i);
}