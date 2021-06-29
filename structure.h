//
// Created by 79985 on 2021/6/27.
//

#ifndef DATASTRUCTURE_STRUCTURE_H
#define DATASTRUCTURE_STRUCTURE_H


#define maxSize 100

//静态顺序表
typedef struct {
    int data[maxSize];
    int length;
}Sqlist,*Sqlists;

//动态顺序表
typedef struct {
    int *data;
    int Maxsize,length;
}Seqlist,*Seqlists;

//单链表
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*Linklist;

//双链表
typedef struct  DLNode{
    int data;
    struct DLNode *prior;
    struct DLNode *next;
}DLNode,*DLinklist;
#endif //DATASTRUCTURE_STRUCTURE_H