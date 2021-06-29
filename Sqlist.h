//
// Created by 79985 on 2021/6/27.
//

#ifndef DATASTRUCTURE_Sqlist_H
#define DATASTRUCTURE_Sqlist_H

#include "structure.h"

//静态顺序表

void Init_Sqlist(Sqlists &L);

void Init_SqlistWithPointer(Sqlists L);

Sqlists Init_SqlistWithPointer();

void Define_Sqlist(Sqlists L);

void Show_Sqlist(Sqlists L);

bool Insert_Sqlist(Sqlists &L,int i,int elem);

bool Delete_Sqlist(Sqlists &L,int i);

int FindElementByValue_Sqlist(Sqlists L,int value);

//动态顺序表

void Init_Seqlist(Seqlists &L);

void Define_Seqlist(Seqlists L);

void Show_Seqlist(Seqlists L);
#endif //DATASTRUCTURE_Sqlist_H