//
// Created by Yangyu on 2023/3/1.
//

#include <stdio.h>

int main(){
    // 44 44 44 33 33 33 55 55 55 22
    int a[10]={0},b[10]={0}, num,x=0,y=0;
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&num);
        int flag=0;
        for (int j = 0; j <= i; ++j) {
            if(num==a[j]){
                b[j]+=1;flag=0;break;
            } else{
                flag=1;
            }
        }
        if(flag){
            a[x]=num;b[x]+=1;x++;
        }

    }
    int max = 0;
    for (int j = 0; j < x; ++j) {
        if(max>b[j]){
            max=b[j];y=j;
        }
    }
    printf("The number that appears the most is %d, the number of degrees is %d\n",a[y],b[y]);
    return 0;
}