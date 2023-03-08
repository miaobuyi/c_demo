//
// Created by Yangyu on 2023/3/5.
//

#include <stdio.h>

int main(){
    char a[20]="hello",b[]="world",*p=a,*q=b;
    while (*q!='\0'){
        *(p++)=*(q++);
    }
    *q='\0';
    printf("%s",a);
    return 0;
}