/*===============================================
*   文件名称：linkedlist1.c
*   创 建 者： 杨振宇
*   创建日期：2023年03月23日
*   描    述：
================================================*/
#include <stdio.h>
#include "linklist.h"

linklist* merge(linklist* list1,linklist* list2){
    linklist * newlist=create_linklist();
    linklist *tail=newlist;
    list1=list1->next;
    list2=list2->next;
    while(list1&&list2){
        if(list1->data <= list2->data){
            linklist* temp=list1->next;
            tail->next=list1;
            tail=list1;
            list1=temp;
        }else if(list1->data > list2->data){
            linklist* temp=list2->next;
            tail->next=list2;
            tail=list2;
            list2=temp;
        }
        if(list1==NULL){
            tail->next=list2;
            return newlist;
        }else if(list2 == NULL){
            tail->next=list1;
            return newlist;
        }
    }
    return newlist;
}

int main(int argc, char *argv[])
{
    int a[]={1,3,5,7,9,10};
    int b[]={2,4,5,8,11,15};

    linklist* list1 = create_linklist();
    linklist* list2 = create_linklist();

    for(int i=0;i<6;i++){
        insert_tail_linklist(list1,a[i]);
        insert_tail_linklist(list2,b[i]);
    }
    printf("list1:");
    show(list1);
    printf("list2:");
    show(list2);
    linklist * head = merge(list1,list2);
    show(head);
    return 0;
}
