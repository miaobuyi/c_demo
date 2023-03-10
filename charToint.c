//
// Created by Yangyu on 2023/3/10.
//

#include <stdio.h>
#include <string.h>

int  chNum(char s[]){
    int result = 0, i,f=0;
    if(s[0]=='-'){
        f=1;
    }
    for (i = 0+f; i < strlen(s); i++) {
        result = result * 10 + s[i] - '0';
    }
    if(s[0]=='-'){
        return result*-1;
    }
    return result;
}

int  main(){
    char s[50];
    scanf("%s",s);
    printf("%d",chNum(s));
}