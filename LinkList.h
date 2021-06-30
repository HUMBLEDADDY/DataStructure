//
// Created by 79985 on 2021/6/29.
//

#ifndef DATASTRUCTURE_LINKLIST_H
#define DATASTRUCTURE_LINKLIST_H

#include "./structure.h"

void List_HeadInsert(Linklist &L);//头插法创建单链表

void List_TailInsert(Linklist &L);//尾插法创建单链表

Linklist GetElemByIndex(Linklist L,int i);//单链表按位查找

Linklist GetElemByValue(Linklist L,int i);//单链表按值查找

bool InsertElemToLinklinst(Linklist &L,int value,int index);//单链表插入结点

void Show_Link(Linklist L);//打印单链表

#endif //DATASTRUCTURE_LINKLIST_H