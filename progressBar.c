//
// Created by Yangyu on 2023/2/28.
//

#include <stdio.h>
#include <unistd.h>

int main(){
    for (int i = 1; i <=100; ++i) {
        if(i%10==0){
            printf("*");
            continue;
        }
        printf("-");
        usleep(30000);
    }

    printf("\n¼ÓÔØÍê³É£¡");
}