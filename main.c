//
// Created by Yangyu on 2023/3/7.
//

#include <stdio.h>
#include <stdlib.h>
#include "seqlist.h"

typedef int data_t;
typedef struct Stack{
    data_t data;
    struct Node* next;
}Stack;

//创建栈 返回栈顶
Stack * create_stack(){
    Stack * stack = malloc(sizeof (stack));
    stack->next=NULL;
    stack->data=-1;
    return stack;
}



int main() {

}