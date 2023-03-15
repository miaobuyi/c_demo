//
// Created by Yangyu on 2023/3/7.
//


#include <stdio.h>
#include <math.h>
#include <malloc.h>
int** generate(int numRows, int* returnSize, int** returnColumnSizes);
int* getRow(int rowIndex, int* returnSize);

int main(){
    int a=3;
    int rSize,*colSize;
    int * returnSize = &rSize;
    int ** Column = &colSize;
    generate(a,returnSize,Column);
}

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** arr = malloc(sizeof(int*) * numRows);
    *returnSize = numRows;
    *returnColumnSizes = malloc(sizeof(int) * numRows);
    for (int i = 0; i < numRows; ++i) {
        arr[i] = malloc(sizeof(int) * (i + 1));
        (*returnColumnSizes)[i] = i + 1;
        arr[i][0] = arr[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }
    return arr;
}