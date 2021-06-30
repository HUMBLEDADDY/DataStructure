//
// Created by 79985 on 2021/6/29.
//

#include "LinkList.h"
#include <iostream>
using namespace std;

//头插法创建单链表
void List_HeadInsert(Linklist &L){
    cout<<"头插法创建单链表,输入99停止输入"<<endl;
    Linklist s;//这里取得其实是指针的意思,并不是代表一个单链表,可以写成 LNode *s;
    int elem;
    L = new LNode;//创建头结点
    L->next = nullptr;//初始化单链表
    cin>>elem;
    while(elem != 99){
      s = new LNode;
      s->data = elem;
      s->next = L->next;
      L->next = s;
      cin>>elem;
    }
}


//尾插法创建单链表
void List_TailInsert(Linklist &L){
    cout<<"尾插法创建单链表,输入99停止输入"<<endl;
    L = new LNode;//创建头结点
    Linklist s;//这里取得其实是指针的意思,并不是代表一个单链表,可以写成 LNode *s;
    Linklist r = L;//定义一个尾指针
    int elem;
    cin>>elem;
    while(elem != 99){
        s = new LNode;
        s->data = elem;
        r->next = s;
        r = s;
        cin>>elem;
    }
    r->next = nullptr;//attention please！！！要记得把尾指针置空！！！
}

//单链表按位查找
Linklist GetElemByIndex(Linklist L,int i){
    int index = 1;
    Linklist p = L->next;//跳过头结点
    if(i == 0){
        return L;//返回头结点
    }
    if(i < 0){
        return nullptr;//输入的i不合法,返回空指针
    }
    while(p && index<i){
        p = p->next;
        index++;
    }
    return p;//如果没找到,此时的p就是空指针
}

//单链表按值查找
Linklist GetElemByValue(Linklist L,int value){
    Linklist p = L->next;//跳过头结点
    int i=1;
    while(p != nullptr){
        if(p->data == value){
            return p;
        }
        p = p->next;
    }
    return nullptr;//如果没找到,此时的p就是空指针
}

//单链表插入结点
bool InsertElemToLinklinst(Linklist &L,int value,int index){
    Linklist s = L;
    Linklist elemToInsert = new LNode;
    elemToInsert->data = value;
    for(int i = 0;i < index;i++){
        if(!s){
            return false;
        }
        s = s->next;
    }
    elemToInsert->next =  s->next;
    s->next = elemToInsert;
    return true;
}

//打印单链表
void Show_Link(Linklist L){
    L = L->next;//跳过头结点
    while(L){
        cout<<L->data<<" ";
        L = L->next;
    }
    cout<<endl;
    cout<<"==============================================="<<endl;
}