//
// Created by Yangyu on 2023/3/9.
//

#include <stdio.h>
#include <string.h>

char * rev(char str[],char  str1[50]);

int main(){
    char str1[50]="123456789";
    char  str2[50];
    char * p = rev(str1,str2);
    printf("%s",p);
    return 0;
}

char * rev(char str[],char str1[50]){
    int j=0;
    for (int i = (int)strlen(str)-1; i >= 0; --i){
        str1[j]=str[i];
        j++;
    }
    return str1;
}