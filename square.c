//
// Created by Yangyu on 2023/3/17.
//

#include <stdio.h>
#include <malloc.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[20][20]={0};
    for (int i = 0; i <n; ++i){
        arr[0][i]=(n-i)*(n-i);
    }

    for(int i =1;i<n;i++){
        for (int j = 0; j < n; ++j) {
//            if(j>n-i-1){
//                arr[i][j]=arr[n-j-1][n-i-1];
//            } else{
                if(j==n-1){
                    arr[i][j]=arr[i-1][0];
                    break;
                }
                arr[i][j]=arr[i-1][j+1];
            //}

        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%4d",arr[i][j]);
        }
    printf("\n");
    }
    return 0;
}