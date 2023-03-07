//
// Created by Yangyu on 2023/3/2.
//

#include <stdio.h>



int main()
{
    int a[3][3]={2,3,4,
                 5,6,7,
                 8,9,1}, sum = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(i>=j){
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);


    return 0;
}
