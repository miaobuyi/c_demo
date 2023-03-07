#include <stdio.h>

int main(){
    printf("Please enter a three-digit number\n");
    int num,x,y,z;
    scanf("%3d",&num);
    x=num%10;
    y=num/10%10;
    z=num/100;
    if(x*x*x+y*y*y+z*z*z==num){
        printf("The number is the number of daffodils\n");
    }else{
        printf("This number is not a daffodil number\n");
    }
    return 0;
}
