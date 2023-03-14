//
// Created by Yangyu on 2023/3/14.
//
#include <stdio.h>

int main(){
    int a=0;
    scanf("%d",&a);
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < a; ++i) {
        int temp = arr[0];
        arr[0]=arr[9];
        for (int j = 9; j > 0; --j) {
            arr[j]=arr[j-1];
        }
        arr[1]=temp;
    }

    for (int i = 0; i < 10; ++i){
        printf("%d ",arr[i]);
    }
    return 0;
}