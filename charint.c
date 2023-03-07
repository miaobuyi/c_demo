//
// Created by Yangyu on 2023/3/6.
//  int和char 类型的相互转换
//

#include <string.h>
#include <stdio.h>

// char to int
int charToint(char *s,int n) {
    int result = 0, i;
    for (i = 0; i < n; i++) {
        result = result * 10 + s[i] - '0';
    }
    return result;
}
//int to char
char * intTochar(char * result ,int s,int n){
    while (s%10!=0){
        result[n-1]=s%10+'0';
        s=s/10;
        n--;
    }
    return result;
}

int main(){
    char a[20]="1234";
    int b= charToint(a,strlen(a));
    char cc[20]={0};
    printf("int:%d\n",b);

    int count = 0,c=b;
    while (c!=0){
        count++;
        c=c/10;
    }
    char *result =cc;
    intTochar(result,b,count);
    printf("char:%s\n",cc);
}