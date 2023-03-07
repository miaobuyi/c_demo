//
// Created by Yangyu on 2023/3/6.
//压缩
//

#include <stdio.h>


int main(){

    char a[5000]={"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbccccddddd"},*p=a;
    char b[50]={0},*q=b;
    int count =1;
    while (*p!='\0'){
        if(*p==*(p+1)){
            count+=1;
        } else {
            int s = 0,c=count;
            while (c!=0){
                    s++;
                    c=c/10;
            }
            int k=s;
            while (count!=0){
                *(q+s-1)=(char)(count%10+'0');
                count=count/10;
                s--;
            }
            q=q+k;*q=*(p-1);
            q++;count=1;
        }
        p++;
    }

    printf("%s",b);
    return 0;
}