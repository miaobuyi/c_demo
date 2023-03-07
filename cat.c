//
// Created by Yangyu on 2023/3/5.
//

#include <stdio.h>

int main(){
    char a[20]="hello ",b[20]="world",*p,*q;
    p=a,q=b;
    while (*p!='\0'){
        p++;
    }
    while (*q!='\0'){
        *(p++)=*(q++);
    }
    *q='\0';
    printf("%s",a);
    return 0;
}

