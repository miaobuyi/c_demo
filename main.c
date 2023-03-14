//
// Created by Yangyu on 2023/3/7.
//


#include <stdio.h>
#include <math.h>

int main(){
    for (int i = -100; i < 10000; ++i){
        if(floor(sqrt(i+100))*floor(sqrt(i+100))==i+100){
            if(floor(sqrt(i+268))*floor(sqrt(i+268))==i+268){
                printf("%d ",i);
            }
        }
    }

}

