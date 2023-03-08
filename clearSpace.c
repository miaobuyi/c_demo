//
// Created by Yangyu on 2023/3/8.
//

#include <stdio.h>

void clearSpace(char * p);

int main(){
    char a[50];
    gets(a);
    clearSpace(a);
    printf("%s",a);
    return 0;
}
void clearSpace(char * p){
    char *q =p;
    while (*p!='\0'){
        if(*p!=' '){
            *q=*p;
            p++;
            q++;
        } else{
            p++;
            *q=*p;
        }
    }
    *q='\0';
};