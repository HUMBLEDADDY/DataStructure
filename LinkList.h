//
// Created by 79985 on 2021/6/29.
//

#ifndef DATASTRUCTURE_LINKLIST_H
#define DATASTRUCTURE_LINKLIST_H

#include "./structure.h"

void List_HeadInsert(Linklist &L);//头插法创建单链表

void List_TailInsert(Linklist &L);//尾插法创建单链表

Linklist GetElemByIndex(Linklist L,int i);//单链表按位查找

Linklist GetElemByValue(Linklist L,int value,int &index);//单链表按值查找//index引用传参，用于返回到主函数

bool InsertElemToLinklist(Linklist &L,int value,int index);//单链表插入结点

bool DeleteElemFromLink(Linklist &L,int index);//单链表删除结点

bool DeleteSpecificElemFromLink(Linklist &L);//单链表删除特定结点

void Show_Link(Linklist L);//打印单链表

#endif //DATASTRUCTURE_LINKLIST_H