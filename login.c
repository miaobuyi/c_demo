//
// Created by Yangyu on 2023/3/3.
//

#include <stdio.h>
#include <string.h>

int main(){
    char name[50]={"yzy"};
    char pwd[50]={"123456"};
    char name1[50]={0};
    char pwd1[50]={0};


    for (int i = 0; i < 3; ++i) {
        printf("name:");
        scanf("%s",name1);
        printf("pwd:");
        scanf("%s",pwd1);
        if(strcmp(name,name1)==0 && strcmp(pwd,pwd1)==0){
            printf("login success\n");
            return 0;
        } else{
            printf("name or pwd error,try again\n");
        }
    }

};