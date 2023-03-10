//
// Created by Yangyu on 2023/3/9.
//

#include <stdio.h>

int arrSum(int row,int col,int (*arr)[row]);

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9};
    int row=sizeof(arr)/sizeof(arr[0]);
    int col=sizeof(arr[0])/sizeof(arr[0][0]);
    int sum = arrSum(row,col,arr);
    printf("sum=%d",sum);
    return 0;
}

int arrSum(int row,int col,int (*arr)[row]){
    int result = 0;
    for (int i = 0; i < row; ++i){
        for (int j = 0; j < col; ++j) {
            result+=(*(arr+j))[i];
        }
    }
    return result;
}
