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
Linklist GetElemByValue(Linklist L,int value,int &index){//index引用传参，用于返回到主函数
    Linklist p = L->next;//跳过头结点
    index = 1;
    while(p != nullptr){
        if(p->data == value){
            return p;
        }
        p = p->next;
        index++;
    }
    return nullptr;//如果没找到,此时的p就是空指针
}

//单链表插入结点
bool InsertElemToLinklist(Linklist &L,int value,int index){
    if(index <= 0){
        return false;//输入的位置不合法，报错
    }
    Linklist s = L;
    Linklist elemToInsert = new LNode;
    elemToInsert->data = value;
    for(int i = 0;i < index-1;i++){
        if(!s->next){
            return false;
        }
        s = s->next;
    }
    elemToInsert->next =  s->next;
    s->next = elemToInsert;
    return true;
}


//单链表删除节点
bool DeleteElemFromLink(Linklist &L,int index){
    if(index <= 0){
        return false;//输入的位置不合法，报错
    }
    Linklist s = L;
    for(int i = 0;i < index-1;i++){
        s = s->next;
        if(s->next == nullptr){
            cout<<i<<endl;
            return false;
        }
    }
    Linklist nodeTodelete = s->next;//先存着，用于释放内存
    s->next = s->next->next;
    delete(nodeTodelete->next);//释放内存
    return true;
}

//删除某个给定节点p，也可以从头结点依次向后遍历，找到特定节点的前驱结点q，然后 q->next = q->next->next
//虽然可以,但是格局小了,时间复杂度为O(n)
//其实可以直接把p的后驱结点的值赋给p, p->next = p->next->next
//但是这个方法有局限性
//如果要删除最后一个元素，是删除不了的，因为p->next就不存在
//单链表删除特定节点
bool DeleteSpecificElemFromLink(Linklist &L){
    if(L->next == nullptr){
        return false;
    }
    Linklist nodeTodelete = L->next;//先存着，用于释放内存
    L->data = L->next->data;
    L->next = L->next->next;
    delete(nodeTodelete);//释放内存
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