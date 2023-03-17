//
// Created by Yangyu on 2023/3/16.
//

# include <stdio.h>

int fac(int a){
    if(a==0){
        return 1;
    }
    return a*fac(a-1);
}

int main(){
    int n=0,result=0;
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        result+=fac(i);
    }
    printf("%d", result);
    return 0;
}