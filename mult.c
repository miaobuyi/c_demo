//
// Created by Yangyu on 2023/2/28.
//
#include <stdio.h>

int main(){
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%-4d",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}

