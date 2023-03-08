//
// Created by Yangyu on 2023/3/8.
//
#include <stdio.h>
void mystrcat(char *p,char *q);
void mystrcpy(char *p,char *q);

int main(){
    char a[20]="hello ",b[20]="world";
    mystrcat(a,b);
    printf("%s\n",a);
    mystrcpy(a,b);
    printf("%s\n",a);
    return 0;
}
void mystrcat(char *p,char *q){
    while (*p!='\0'){
        p++;
    }
    while (*q!='\0'){
        *(p++)=*(q++);
    }
    *q='\0';
}
void mystrcpy(char *p,char *q){
    while (*q!='\0'){
        *(p++)=*(q++);
    }
    *p='\0';
}