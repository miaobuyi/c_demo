//
// Created by Yangyu on 2023/3/7.
//



#include <stdio.h>
#include <string.h>

typedef  struct stu{
    char name[10];
    int age;
}STU;

typedef struct tea{
    STU stu[3];
    char name[10];
} TEA;


enum {
    a = 1,
    b =3,

};

int main(){
    i s[20];
    printf("%d\n",a);
    printf("%d\n",b);
}