//
// Created by Yangyu on 2023/3/7.
//



#include <stdio.h>
#include <string.h>

struct Zc {
    int age;
    char name[32];
    char sex[32];
} a = {18, "zhangcheng", "man"};//全局变量初始化

int main(int argc, char *argv[]) {
    struct Zc b = {20, "cheng", "man"}; //局部变量初始化
    struct Zc c;
    c.age = 22;
    strcpy(c.name, "zhang");
    strcpy(c.sex, "women");
    printf("a.age=%d\n", a.age); //成员的调用
    printf("b.age=%d\n", b.age);
    printf("c.sex=%s\n", c.sex);
    return 0;
}
