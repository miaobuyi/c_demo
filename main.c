//
// Created by Yangyu on 2023/3/7.
//
# include <stdio.h>

int main(){
    int b[45]={12,23,32,4,4,5},*q=b;
    int a[2][3]={1,2,3,4,5,6};
    int c[]={1,2,3,4};
    int d = 5;
    int e = 6;
    int (*p)[3]=a;

    int *pointer[3];
    pointer[0]=c;
    pointer[1]=&d;
    pointer[2]=&e;
    printf("%d\n",*q);
    printf("%p\n",(*p));
    printf("%p\n",a[1]);
    printf("%d\n",*pointer[0]);
    printf("%d\n",*pointer[1]);
    printf("%d\n",*pointer[2]);
    return 0;
}