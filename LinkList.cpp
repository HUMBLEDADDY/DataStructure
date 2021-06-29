//
// Created by 79985 on 2021/6/29.
//

#include "LinkList.h"
#include <iostream>
using namespace std;

void List_HeadInsert(Linklist &L){
    cout<<"头插法创建单链表"<<endl;
    Linklist s;
    int elem;
    L = new LNode;
    L->next = nullptr;
    cin>>elem;
    while(elem != 99){
      s = new LNode;
      s->data = elem;
      s->next = L->next;
      L->next = s;
      cin>>elem;
    }
}

void Show_Link(Linklist L){
    L = L->next;
    while(L){
        cout<<L->data<<" ";
        L = L->next;
    }
    cout<<endl;
}