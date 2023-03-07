//
// Created by Yangyu on 2023/3/6.
//解压
//

#include <stdio.h>
int main(){
    char a[50]={"101a2b4c5d"},*p=a;
    int num=0;
    while (*p!='\0'){
        if(*p<'A'){
            num=num*10 + *p - '0';
            p++;
            continue;
        }
        for (int i = 0; i < num; ++i) {
            printf("%c",*p);
        }
        p++;
        num=0;
    }
    return 0;
}