//
// Created by Yangyu on 2023/3/7.
//


#include <stdio.h>
#include <string.h>

struct date {
        int year;
        int month;
        int day;
};

struct stu{
    char name[10];
    int age;
    char sex;
    struct date date;
};

int main(){
    char a[]={0,1,2,3,4,5};
    printf("a[1]=%d",a[1]);
    return 0;
}

