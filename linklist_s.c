//
// Created by Yangyu on 2023/3/26.
// 双向链表


#include <stdlib.h>
#include <stdio.h>

//结构体
typedef int data_t ;
typedef struct relinklist{
    data_t data;
    struct relinklist * next;
    struct relinklist * prior;
}relinklist;
//创建链表
relinklist * creat_relinklist(){
    relinklist* relinklist1=(relinklist*)malloc(sizeof(relinklist));
    relinklist1->data=-1;
    relinklist1->next=NULL;
    relinklist1->prior=NULL;
    return relinklist1;
}
//头插
int insert_head_relinklist(relinklist* head, data_t val)
{
    if(NULL == head) return -1;
    //准备new 节点
    relinklist *new  = (relinklist *)malloc(sizeof(relinklist));
    new->data = val; //
    new->next = NULL;
    new->prior = NULL;
    //头插法 插入
    if(head->next!=NULL)head->next->prior=new;
    new->next = head->next;
    new->prior =head;
    head->next = new;
    return 0;
}
//尾插
//遍历
void show(relinklist * head)
{
    if(NULL == head) return;
    relinklist *p = head->next;
    while(p != NULL)
    {
        printf("%-4d",p->data);
        p = p->next;
    }
    printf("\n");
    return;
}
//按值删除
void delete_by_val_relinklist(relinklist * head,data_t val){
    relinklist *p=head;
    while(p->data != val)
    {
        p = p->next;
    }
    p->next->prior=p->prior;
    p->prior->next=p->next;
    p->next=NULL;
    p->prior=NULL;
    free(p);
}

//按位置插入
void inser_by_pos_relinklist(relinklist * head,int pos,data_t val){
    relinklist *p=head;
    relinklist *new=creat_relinklist();
    new->data=val;
    new->next=NULL;
    new->prior=NULL;
    while(pos--)
    {
        p = p->next;
    }
    new->next=p->next;
    p->next->prior=new;
    p->next=new;
    new->prior=p;
}
//按位置删除
void delete_by_pos_relinklist(relinklist * head,int pos){
    relinklist *p=head->next;
    while(pos--)
    {
        p = p->next;
    }
    printf("%d\n",p->data);
    p->next->prior=p->prior;
    p->prior->next=p->next;
    p=NULL;
    free(p);
}
//判空
//判满
//求有效节点个数(求长度)




int main(){
    relinklist * head=creat_relinklist();
    for (int i = 0; i < 10; ++i) {
        insert_head_relinklist(head,i);
    }
    show(head);
    delete_by_val_relinklist(head,9);
    show(head);
    inser_by_pos_relinklist(head,5,5);
    show(head);
    delete_by_pos_relinklist(head,4);
    show(head);

}