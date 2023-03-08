//
// Created by Yangyu on 2023/3/7.
//
# include <stdio.h>
# include "add.h"
//int add(int a, int b){
//    return a+b;
//}
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



int main(){
    int x=1,y=2;
    int result;
    result= add(x,y);
    printf("%d\n",result);
    result= sub(x,y);
    printf("%d\n",result);
    result= mul(x,y);
    printf("%d\n",result);
    result= div(x,y);
    printf("%d\n",result);
    return 0;
}