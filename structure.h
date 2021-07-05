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

//静态单链表
typedef struct { 
    int data;
    int next;//记录下标
} SLinklist[maxSize];
//上述写法等价于
//typedef struct SDode{
//    int data;
//    int next;
//};
//typedef struct SDode SLinklist[maxSize];



//顺序栈
typedef struct {
    int data[maxSize];
    int top;
}SqStack;

//链栈
typedef struct Linknode{
    int data;
    struct Linknode *next;
}Linknode,*LiStack;

//共享栈
typedef struct {
    int data[maxSize];
    int top0,top1;
}ShStack;





#endif //DATASTRUCTURE_STRUCTURE_H