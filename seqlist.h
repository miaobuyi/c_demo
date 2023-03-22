//
// Created by Yangyu on 2023/3/22.
//

#ifndef DEMO_SEQLIST_H
#define DEMO_SEQLIST_H

#define SIZE 500

int perr_exit(char *s);

typedef int data_t;
typedef struct {
    data_t data[SIZE];
    int last;
} seqlist;

//创建表头及初始化表
seqlist *create_seqlist();

//求表长
int get_leng_seqlist(seqlist *head);

//判空
int seqlist_is_empty(seqlist *head);

//判满
int seqlist_is_full(seqlist *head);

//按位置插入
int insert_by_pos_seqlist(seqlist *head, int pos, data_t value);

//打印查看结果
int prn(seqlist *head);
//根据位置删除
int dle_seqlist(seqlist *head, int pos);

//根据位置查询
int que_pos_seqlist(seqlist *head, int pos);

//根据位置修改
int ale_seqlist(seqlist *head, int pos, data_t value);

//查询
int que_seqlist(seqlist* head,data_t value);
//清空表
void clear_seqlist(seqlist * head);
//销毁表
int destory_seqlist(seqlist** head );
//错误打印
int perr_exit(char *s);
#endif //DEMO_SEQLIST_H