//
// Created by Yangyu on 2023/3/5.
//

#include <stdio.h>

int main(){
    char a[20]="hello",*p1,*p2;
    char c;
    p1=a,p2=a;p2=c;
    c=*p1*(*p2);
    printf("%d",c);
    return 0;
}