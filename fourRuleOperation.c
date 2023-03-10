//
// Created by Yangyu on 2023/3/9.
//

#include <stdio.h>


int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int calc(int x,int y,int (*p)(int x,int y));


int main(){
    int a=6,b=9;
    printf("%d\n", calc(a,b, add));
    printf("%d\n",calc(a,b, sub));
    printf("%d\n",calc(a,b, mul));
    printf("%d\n",calc(a,b, div));
}

int calc(int x,int y,int (*p)(int x,int y)){
    int ret= (*p)(x,y);
    return ret;
}

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int div(int a, int b){
    if(b==0){
        printf("除数不能为0");
    }
    return a/b;
}