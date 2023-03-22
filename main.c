//
// Created by Yangyu on 2023/3/7.
//



#include <stdio.h>
#include "seqlist.h"



int main() {
    seqlist *head = create_seqlist();
    if (head == NULL)return -1;
    for (int i = 0; i < 5; ++i) {
        insert_by_pos_seqlist(head, i, i + 1);
    }
    prn(head);
    dle_seqlist(head, 0);
    prn(head);
    printf("%d\n", que_pos_seqlist(head,1));
    ale_seqlist(head,1,8);
    printf("%d\n", que_pos_seqlist(head,1));
    prn(head);
    printf("%d\n",que_seqlist(head,1));
    return 0;
}