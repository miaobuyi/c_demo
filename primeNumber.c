//
// Created by Yangyu on 2023/2/28.
//

#include <stdbool.h>

int main(){

//    输入一个数判断是否是质数
//    int a,x=2;
//    printf("Please enter a number\n");
//    scanf("%d",&a);
//    if(a==1){
//        printf("Not prime\n");
//        return 0;
//    }
//    if(a==2){
//        printf("prime number\n");
//        return 0;
//    }
//    do {
//        if(a%x==0){
//            printf("Not prime\n");
//            return 0;
//        }
//        x++;
//    } while (x<a);
//    printf("prime number\n");

//    100以内的质数
//    int i=1;
//    while (i<100){
//        int x=2;
//        while (x<=i){
//            if(i==x){
//                printf("prime number:%d\n",i);
//            }
//            if(i%x==0){
//                break;
//            }
//
//            x++;
//        };
//        i++;
//    }
    int primes[100], cnt;   // primes[]存储所有素数
    bool st[100];   // st[x]存储x是否被筛掉

    for(int i = 2; i <= 100; i++){
        if(!st[i]) primes[cnt++] = i;
        for(int j = 0; primes[j] <= 100 / i; j++){
            st[primes[j] * i] = true;
            if(i % primes[j] == 0) break;   // 如果这个数能被素数整除，跳出循环
        }
    }

    return 0;
}
