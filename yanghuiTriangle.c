//
// Created by Yangyu on 2023/3/1.
//

#include <stdio.h>

int main()
{
    int a[10][10];
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j==0){
                a[i][0]=1;
            }
            else if (j==i){
                a[i][j]=1;
                break;
            } else {
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }

        }
    }
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10-i; ++j) {
            printf("   ");
        }
        for (int j = 0; j <= i; ++j) {
            printf("  %3d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
