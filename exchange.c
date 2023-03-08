//
// Created by Yangyu on 2023/3/8.
//

#include <stdio.h>

void exchange(int *p,int *q);

int main(){
    int a=9,b=6;
    exchange(&a,&b);
    printf("a=%d,b=%d",a,b);
}
void exchange(int *p,int *q){
    int a=*q;
    *q = *p;
    *p = a;
}