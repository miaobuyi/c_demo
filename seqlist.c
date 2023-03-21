//
// Created by Yangyu on 2023/3/21.
//

#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define SIZE 500

int perr_exit(char *s);

typedef int data_t;
typedef struct {
    data_t data[SIZE];
    int last;
} seqlist;

//创建表头及初始化表
seqlist *create_seqlist() {
    seqlist *head = malloc(sizeof(seqlist *));
    if (head == NULL)
        return NULL;
    head->last = -1;
    memset(head->data, 0, sizeof(data_t));
    return head;
}

//求表长
int get_leng_seqlist(seqlist *head) {
    if (head == NULL)
        return -1;
    return head->last + 1;
}

//判空
int seqlist_is_empty(seqlist *head) {
    if (head == NULL)
        return -1;
    return head->last == -1 ? 1 : 0;
}

//判满
int seqlist_is_full(seqlist *head) {
    if (head == NULL)
        return -1;
    return head->last + 1 == SIZE ? 1 : 0;
}

//按位置插入
int insert_by_pos_seqlist(seqlist *head, int pos, data_t value) {
    if (head == NULL)
        return -1;
    if (seqlist_is_full(head) == 1)
        return -1;
    if (pos < 0 || pos > head->last + 1)
        return -1;
    for (int i = head->last + 1; i > pos; --i) {
        head->data[i] = head->data[i - 1];
    }
    head->data[pos] = value;
    head->last++;
    return 0;
}

//打印查看结果
int prn(seqlist *head) {
    if (head == NULL)
        return perr_exit("prn");
    for (int i = 0; i < head->last + 1; ++i) {
        printf("%-3d ", head->data[i]);
    }
    printf("\n");
    return 0;
}

//根据位置删除
int dle_seqlist(seqlist *head, int pos) {
    if (head == NULL)
        return -1;
    for (int i = pos; i < head->last; i++) {
        head->data[i] = head->data[i + 1];
    }
    head->data[head->last] = 0;
    head->last--;
    return 0;
}

//根据位置查询
int que_pos_seqlist(seqlist *head, int pos) {
    if (head == NULL)
        return -1;
    return head->data[pos];
}

//根据位置修改
int ale_seqlist(seqlist *head, int pos, data_t value) {
    if (head == NULL)
        return -1;
    head->data[pos] = value;
    return 0;
}

//查询
int que_seqlist(seqlist* head,data_t value){
    if (head == NULL)
        return -1;
    for (int i = 0; i < head->last+1; ++i) {
        if(head->data[i]==value)
            return 1;
    }
    return -1;
}

//错误打印
int perr_exit(char *s) {
    if (s == NULL)
        printf("%s--%d\n", __func__, __LINE__);
    else
        printf("%s:%s--%d\n", s, __func__, __LINE__);
    return -1;
}

int main() {
    seqlist *head = create_seqlist();
    if (head == NULL)return -1;
    for (int i = 0; i < 5; ++i) {
        insert_by_pos_seqlist(head, i, i + 1);
    }
    prn(head);
    dle_seqlist(head, 8);
    prn(head);
    printf("%d\n", que_pos_seqlist(head,1));
    ale_seqlist(head,1,8);
    printf("%d\n", que_pos_seqlist(head,1));
    prn(head);
    printf("%d\n",que_seqlist(head,1));
    return 0;
}