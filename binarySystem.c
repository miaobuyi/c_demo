//
// Created by Yangyu on 2023/3/1.
//

#include <stdio.h>

int main(){
    int num;
    int a[8]={0},i=0;
    scanf("%d",&num);
    while (num){
        a[i]=num%2;
        num=num/2;
        i++;
    }
    for (int j = i-1; j >= 0; --j) {
        printf("%d",a[j]);
    }
    return 0;
}
