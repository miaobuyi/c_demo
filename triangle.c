//
// Created by Yangyu on 2023/2/28.
//

#include <stdio.h>
int main(){
    for (int i = 0; i <= 9; i++) {
        for (int j = (9-i)+1; j >0; j--) {
            printf(" ");
        }
        for (int j = 0; j < 2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }

    int a[10];
    int *p=a;
    *p=20;
    return 0;
}