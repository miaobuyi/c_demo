#include <stdio.h>
#include <string.h>
#include <mmcobj.h>

#define MAX_CARDS 13

struct ListNode {
    int val;
    struct ListNode* next;
};


int main() {
    char* cards[MAX_CARDS] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    char* re[MAX_CARDS] = {0};
    int count=1,space=0;
    for (int i = 0; i < 13; ++i) {
        for (int j = 0; j < 13; ++j) {
            if (re[i]==0&&space!=count){
                space++;
                continue;
            }
            if (space==count){
                re[j]=cards[i];
                space=0;
            }
        }
        count++;
        space=0;
        if(count==2){
            space=2;
        }
    }
    for (int i = 0; i < 13; ++i) {
        printf("%s",re[i]);
    }
}
