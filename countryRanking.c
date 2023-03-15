//
// Created by Yangyu on 2023/3/15.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char a[][20]={"China","Japan","Iran","Korea","England","French","Italy"};
    char temp[20]={0};
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i) {
        for (int j = 0; j < sizeof(a)/sizeof(a[0])-1; ++j) {
            if(strcmp(a[j],a[j+1]) > 0){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    for (int i = 0; i < sizeof(a)/sizeof a[0]; ++i) {
        printf("%s ",a[i]);
    }
    return 0;
}
