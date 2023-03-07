//
// Created by Yangyu on 2023/3/2.
//

# include <stdio.h>

int main(){
    char a[10][10],x=1;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if(i<5){
                if(j==5-i-1||j==5+i){
                    a[i][j]='*';
                } else if(j>5-i-1||j<5+i) {
                    a[i][j]=' ';
                }else{
                    a[i][j]='#';
                }
            } else{
                if(i-5==j){
                    a[i][j]='*';
                } else if(j==10-x){
                    a[i][j]='*';
                    x++;
                } else if(j>i-5||j<10-x){
                    a[i][j]=' ';
                }else{
                    a[i][j]='#';
                }
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}