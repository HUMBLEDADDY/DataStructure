//
// Created by 79985 on 2021/7/5.
//

#ifndef DATASTRUCTURE_STACK_H
#define DATASTRUCTURE_STACK_H
#include "./structure.h"

//顺序栈

//初始化
void IniSqStack(SqStack &S);

//判断栈为空
bool SqStackEmpty(SqStack S);


//入栈
bool SqStackPush(SqStack &S,int data);
//出栈
bool SqStackPop(SqStack &S,int &data);

//读取栈顶元素
bool GetSqStackTop(SqStack S,int &data);


//链栈
//默认不带头节点
//初始化
bool InitLiStack(LiStack &S);

//判断栈是否为空
bool LiStackEmpty(LiStack S);

//入栈
bool LiStackPush(LiStack &S,int data);

//出栈
bool LiStackPop(LiStack &S,int &data);


//读取栈顶元素
bool GetLiStackTop(LiStack &S,int &data);


//共享栈

//初始化栈
void InitShStack(ShStack &S);

//栈判断是否为空
bool ShStackEmpty(ShStack S,int tag);

//判断栈是否满
bool ShStackFull(ShStack S);


//入栈
bool ShStackPush(ShStack &S,int data,int tag);

//出栈
bool ShStackPop(ShStack &S,int &data,int tag);


//获取栈顶元素
bool GetShStackTop(ShStack S,int &data,int tag);



#endif //DATASTRUCTURE_STACK_H
