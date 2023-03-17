//
// Created by Yangyu on 2023/3/16.
//

#include <stdio.h>

struct date{
    short a1;
    char a2;
    char a3;
    int a4;

} date;

int main(){
    printf("%d",sizeof(date) );
}