//
// Created by Yangyu on 2023/3/10.
//
#include <stdio.h>

int main(){
    int x,y,z;
    for (int i = 100; i < 1000; ++i) {
        x=i/100;
        z=i%10;
        y=i/10%10;
        if(i==x*x*x+y*y*y+z*z*z){
            printf("%d ",i);
        }
    }

}