//
// Created by 79985 on 2021/7/5.
//
#include <iostream>
#include "Stack.h"

using namespace std;
//顺序栈

//初始化
void IniSqStack(SqStack &S){
    S.top = -1;
}

//判断栈为空
bool SqStackEmpty(SqStack S){
    if(S.top == -1){
        return true;//栈为空
    }
    return false;//非空
}


//入栈
bool SqStackPush(SqStack &S,int data){
    if(S.top == maxSize - 1){
        return false;
    }
    S.data[++S.top] = data;
    return true;
}

//出栈
bool SqStackPop(SqStack &S,int &data){
    if(!SqStackEmpty(S)){
        data = S.data[S.top--];
        return true;
    }
    return false;
}

//读取栈顶元素
bool GetSqStackTop(SqStack S,int &data){
    if(!SqStackEmpty(S)){
        data = S.data[S.top];
        return true;
    }
    return false;
}


//链栈
//默认不带头节点
//初始化
bool InitLiStack(LiStack &S){
    S = nullptr;
}

//判断栈是否为空
bool LiStackEmpty(LiStack S){
    return (S == nullptr);
}

//入栈
bool LiStackPush(LiStack &S,int data){
    LiStack newELem = new Linknode;
    if(newELem == nullptr){//内存分配失败
        return false;
    }
    newELem->data = data;
    if(LiStackEmpty(S)){
        S = newELem;
        S -> next = nullptr;
    }
    else{
        newELem->next = S;
        S = newELem;
    };
    return true;



    return true;
}

//出栈
bool LiStackPop(LiStack &S,int &data){
    if(LiStackEmpty(S)){//先判断栈是否为空
        return false;//为空，出栈失败
    }
    data = S->data;
    LiStack DeleteElem = S;//存一下，待会用于释放
    S = S->next;
    delete(DeleteElem);
}


//读取栈顶元素
bool GetLiStackTop(LiStack &S,int &data){
    if(LiStackEmpty(S)){//先判断栈是否为空
        return false;//为空，出栈失败
    }
    data = S->data;
    return false;
}


//共享栈

//初始化栈
void InitShStack(ShStack &S){
    S.top0 = -1;
    S.top1 = maxSize;
}

//栈判断是否为空
bool ShStackEmpty(ShStack S,int tag){
    if(tag == 0){
        return S.top0 == -1;
    }
    if(tag == 1){
        return S.top1 == maxSize;
    }
}

//判断栈是否满
bool ShStackFull(ShStack S){
    return S.top0 == S.top1-1;
}


//入栈
bool ShStackPush(ShStack &S,int data,int tag){
    if(ShStackFull(S)){
        return false;
    }
    if(tag == 0){
        S.data[++S.top0] = data;
    }
    if(tag == 1){
        S.data[--S.top1] = data;
    }
    return true;
}

//出栈
bool ShStackPop(ShStack &S,int &data,int tag){
    if(ShStackEmpty(S,tag)){
        return false;
    }
    if(tag == 0){
        data = S.data[S.top0--];
    }
    if(tag == 1){
        data = S.data[S.top1++];
    }
    return true;
}


//获取栈顶元素
bool GetShStackTop(ShStack S,int &data,int tag){
    if(ShStackEmpty(S,tag)){
        return false;
    }
    if(tag == 0){
        data = S.data[S.top0];
    }
    if(tag == 1){
        data = S.data[S.top1];
    }
    return true;
}


