//
// Created by Yangyu on 2023/3/16.
//

#include <stdio.h>

struct date{
    int year;
    int month;
    int day;
} date;

int main(){
    scanf("%d %d %d",&date.year,&date.month,&date.day);
    int  s=0;
    switch(date.month)
    {
        case 12:  s+=30;      //加上11月的30天
        case 11:  s+=31;      //加上10月的31天
        case 10:  s+=30;      //加上 9月的30天
        case  9:  s+=31;
        case  8:  s+=31;
        case  7:  s+=30;
        case  6:  s+=31;
        case  5:  s+=30;
        case  4:  s+=31;
        case  3:  s+=28;      //先按平年算，加上2月的28天
        case  2:  s+=31;      //加上 1月的31天
        case  1:  s+=date.day;     //加上当月天数
    }
    if((date.year%4==0 && date.year%100!=0 || date.year%400==0) && date.month>=3)
        s++;
    printf("%d\n",s);
}