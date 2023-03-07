//
// Created by Yangyu on 2023/3/1.
//

#include <stdio.h>

int main()
{
    char a[10],i,j;
    printf("Please enter the tens digit:\n");
    scanf("%s",a);
    for(i=0;i<5;i++){
        j=a[i];
        a[i]=a[9-i];
        a[9-i]=j;
    }
    for(int i=0;i<10;i++) {
        printf("%c",a[i]);
    }
    return 0;
}
