//
// Created by Yangyu on 2023/2/27.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;
    for(int i = 1;i<=3;i++){
        again:
        printf("Please enter front and back (1 for front and 0 for back): ÖÐÎÄ\n");
        scanf("%d",&num);
        if(num==0||num==1){
            goto ctu;
        } else{
            goto again;
        }
        ctu:
        srand((unsigned int)time(NULL));
        int ret = rand()%2;
        printf("coin:%d\n",ret);
        if(ret==num){
            printf("You guessed it right\n");
        } else{
            printf("You guessed wrong\n");
        }
    }
    return 0;
}
