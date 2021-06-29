//
// Created by 79985 on 2021/6/27.
//

//
//     ===顺序表===
// 包含静态顺序表和动态顺序表
//
#include "Sqlist.h"
#include <iostream>
using namespace std;

//静态顺序表

//顺序表三种初始化方式

//引用初始化
void Init_Sqlist(Sqlists &L)
{
    Sqlists init_L = new Sqlist;
    init_L->length=0;  //长度设置为-1
    L = init_L;
}

//指针初始化.在函数体对顺序表初始化
void Init_SqlistWithPointer(Sqlists L)
{
    Sqlists init_L = new Sqlist;
    init_L->length=0;  //长度设置为-1
    L = init_L;
}

//指针初始化,直接返回一个已经初始化的顺序表的指针
Sqlists Init_SqlistWithPointer()
{
    Sqlists init_L = new Sqlist;
    init_L->length=0;  //长度设置为-1
    return init_L;
}

//静态顺序表的赋值
void Define_Sqlist(Sqlists L)
{
    cout<<"输入要插入的值"<<endl<<"输入99结束输入"<<endl;
    int i=0;
    int elm;
    while(i<100){
        cin>>elm;
        if(elm == 99){
            break;
        }
        L->data[i++] = elm;
        L->length++;
    }
}

//静态顺序表的打印
void Show_Sqlist(Sqlists L){
    cout<<"顺序表的长为"<<L->length<<endl;
    for(int i = 0;i < L->length; i++){
        cout<<L->data[i]<<" ";
    }
    cout<<endl<<"==============================================="<<endl;
}

//静态顺序表插入新元素
bool Insert_Sqlist(Sqlists &L,int i,int elem){
    if( i < 1 || i > L->length+1 ){
        return false;
    }
    if( L->length >= maxSize ){
        return false;
    }
    for(int index = L->length; index >= i; index--){
        L->data[index] = L->data[index-1];
    }
    L->data[i-1] = elem;
    L->length++;
    return true;
}

//静态顺序表删除元素
bool Delete_Sqlist(Sqlists &L,int i){
    if( i < 1 || i > L->length+1 ){
        return false;
    }
    for(int index = i-1; index < L->length-1; index++){
        L->data[index] = L->data[index+1];
    }
    L->length--;
    return true;
}

//静态顺序表按值查找
int FindElementByValue_Sqlist(Sqlists L,int value){
    for(int index = 0; index < L->length; index++){
       if( L->data[index] == value ){
           return index+1;
       }
    }
    return 0;
}

//动态顺序表

//动态顺序表的初始化
void Init_Seqlist(Seqlists &L){
    Seqlists init_L = new Seqlist;
    init_L->data = new int[10];//最开始默认顺序表长度为10
    init_L->Maxsize = 10;
    init_L->length = 0;
    L = init_L;
}

//动态顺序表的赋值
void Define_Seqlist(Seqlists L)
{
    cout<<"输入要插入的值"<<endl<<"输入99结束输入"<<endl;
    int i=0;
    int elm;
    while(i<100){
        cin>>elm;
        if(elm == 99){
            break;
        }
        L->data[i++] = elm;
        L->length++;
    }
}

//动态顺序表的打印
void Show_Seqlist(Seqlists L){
    cout<<"顺序表的长为"<<L->length<<endl;
    for(int i = 0;i < L->length; i++){
        cout<<L->data[i]<<" ";
    }
    cout<<endl<<"============================================="<<endl;
}