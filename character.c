//
// Created by Yangyu on 2023/3/3.
//

#include <stdio.h>
#include <string.h>

// 计算输入的有效字符
void effective(char a[]){
    int count =0;
        for (int  i = 0; a[i] != '\0'; ++i) {
            if(a[i]!=' '){
                count++;
            }
    }
    printf("Significant number:%d\n",count);
}

//逆序输出（两个字符交换）
void reverseOrder(char a[]){
    int len= strlen(a);
    for (int i = 0; i < len/2; ++i) {
        a[i]^=a[len-i-1];
        a[len-i-1]^=a[i];
        a[i]^=a[len-i-1];
    }
    printf("%s\n",a);
}

int main(){
    char a[50]={0};
    gets(a);
    effective(a);
    reverseOrder(a);

    return 0;
}