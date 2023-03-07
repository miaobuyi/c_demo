//
// Created by Yangyu on 2023/3/1.
//

#include <stdio.h>

int main(){
    int a[]={78,88,98,96,87,66,88,99,95,96},max=0,min=100,avg,sum=0;
    for (int i = 0; i < 10; ++i) {
        if(a[i]>max)max=a[i];
        if(a[i]<min)min=a[i];
        sum+=a[i];
    }
    avg=(sum-max-min)/8;
    printf("avg=%d",avg);
    return 0;
}