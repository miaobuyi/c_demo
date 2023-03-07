#include <stdio.h>

int main(){
    int i=101;
    while (i<=500){
        int x=2;
        while (x<=i){
            if(i==x){
                printf("prime number:%d\n",i);
            }
            if(i%x==0){
                break;
            }
            x++;
        };
        i++;
    }
    return 0;
}