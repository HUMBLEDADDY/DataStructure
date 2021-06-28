#include <iostream>
#include "./Sqlist.h"
using namespace std;
int main() {
    Sqlists L;//定义一个静态顺序表指针
    Seqlists SeqL;//定义一个动态顺序表指针

    //顺序表构造三种写法

    //1.通过引用构造
    Init_Sqlist(L);//引用构造,比较好用的一个方法

    //2.通过指针构造,在函数体内对顺序表初始化
    Sqlist sqlist;
    Sqlists LCreateWithPointer1 =  &sqlist;//创建一个顺序表指针指向一个顺序表
    Init_SqlistWithPointer(LCreateWithPointer1);//attention please,这里的参数不是指针的地址,而是指针的值,也就是指针指向的顺序表的地址

    //3.通过指针构造,直接返回一个指向一个已经初始化好的顺序表
    Sqlists LCreateWithPointer2 = Init_SqlistWithPointer();

//    Define_Sqlist(L);//输入顺序表
//    Show_Sqlist(L);//打印顺序表


//动态顺序表

    //动态顺序表初始化
    Init_Seqlist(SeqL);//引用初始化动态顺序表
    Define_Seqlist(SeqL);//输入顺序表
    Show_Seqlist(SeqL);//打印顺序表
}
