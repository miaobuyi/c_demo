//
// Created by Yangyu on 2023/3/20.
//

#include <stdio.h>

other();

int main(void)
{
    extern   int   a;
    int   b=0;
    static int   c;
    a+=3;
    other();
    b+=3;
    other();
}
int   a=5;
other()
{
    int   b=3;
    static   int   c=2;
    a+=5; b+=5; c+=5;
    printf("%d,%d,%d\n",a,b,c);
    c=b;
}
