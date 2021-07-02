//
// Created by 79985 on 2021/7/2.
//

#include "DLinklist.h"
#include <iostream>
using namespace std;
//头插法创建双链表
void DList_HeadInsert(DLinklist &L){
    cout<<"头插法创建双链表,输入99停止输入"<<endl;
    DLinklist s;//这里取得其实是指针的意思,并不是代表一个双链表,可以写成 DLNode *s;
    int elem;
    L = new DLNode;//创建头结点
    L->next = nullptr;//初始化双链表
    L->prior = nullptr;//初始化双链表
    cin>>elem;
    while(elem != 99){
        s = new DLNode;
        s->data = elem;
        s->next = L->next;
        if(s->next){
            s->next->prior = s;
        }
        L->next = s;
        s->prior = L;
        cin>>elem;
    }
}


//尾插法创建双链表
void DList_TailInsert(DLinklist &L){
    cout<<"尾插法创建双链表,输入99停止输入"<<endl;
    L = new DLNode;//创建头结点
    DLinklist s;//这里取得其实是指针的意思,并不是代表一个双链表,可以写成 DLNode *s;
    DLinklist r = L;//定义一个尾指针
    int elem;
    cin>>elem;
    while(elem != 99){
        s = new DLNode;
        s->data = elem;
        r->next = s;
        s->prior = r;
        r = s;
        cin>>elem;
    }
    r->next = nullptr;//attention please！！！要记得把尾指针置空！！！
}

void Show_DLink(DLinklist L){
    L = L->next;//跳过头结点
    while(L){
        cout<<L->data<<" ";
        L = L->next;
    }
    cout<<endl;
    cout<<"==============================================="<<endl;
}