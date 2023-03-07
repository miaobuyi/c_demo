//
// Created by Yangyu on 2023/3/2.
//

#include <stdio.h>

int main(){
    int a[3][4]={2,3,4,1,
                 5,6,7,33,
                 8,9,1,55};
    int x,y,max=0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if(a[i][j]>max){
                max=a[i][j];
                x=i;
                y=j;
            }
        }
    }
    printf("max=%d,row=%d,col=%d\n",max,x+1,y+1);
    return 0;
}