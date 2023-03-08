//
// Created by Yangyu on 2023/3/8.
//

#include <stdio.h>

int arrSum(int *p,int);

int main(){
    int arr[50] = {1,2,3,4,5,6,7,8,9,10};
    int sum = arrSum(arr,sizeof (arr)/sizeof (arr[0]));
    printf("%d",sum);
    return 0;
}

int arrSum(int *p,int len){
    int result = 0;
    for (int i = 0; i < len; ++i){
        result+=*p;
        p++;
    }
    return result;
};