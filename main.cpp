#include <iostream>
#include "./Sqlist.h"
#include "./LinkList.h"
#include "./DLinkList.h"


using namespace std;
void SqlistTest();
void LinklistTest();
void DLinklistTest();

int main() {
//    system("chcp 65001");//中文乱码，运行这个;

    int operatorNum = 0;
    while(operatorNum != -1){
        cout<<"输入1测试顺序表"<<endl;
        cout<<"输入2测试单链表"<<endl;
        cout<<"输入3测试双链表"<<endl;
        cout<<"输入-1停止"<<endl;
        cin>>operatorNum;
        switch (operatorNum) {
            case -1:{
                cout<<"bye!"<<endl;
                break;
            }
            case 1:{
                SqlistTest();
                break;
            }
            case 2:{
                LinklistTest();
                break;
            }
            case 3:{
                DLinklistTest();
                break;
            }
            default:{
                cout<<"wrong!"<<endl;
                break;
            }
        }
    }
}

void SqlistTest(){
    Sqlists L;//定义一个静态顺序表指针
    Seqlists SeqL;//定义一个动态顺序表指针

//静态顺序表
    //顺序表构造三种写法
    //1.通过引用构造
    Init_Sqlist(L);//引用构造,比较好用的一个方法
    //2.通过指针构造,在函数体内对顺序表初始化
    Sqlist sqlist;
    Sqlists LCreateWithPointer1 =  &sqlist;//创建一个顺序表指针指向一个顺序表
    Init_SqlistWithPointer(LCreateWithPointer1);//attention please,这里的参数不是指针的地址,而是指针的值,也就是指针指向的顺序表的地址
    //3.通过指针构造,直接返回一个指向一个已经初始化好的顺序表
    Sqlists LCreateWithPointer2 = Init_SqlistWithPointer();
    Define_Sqlist(L);//输入顺序表
    Show_Sqlist(L);//打印顺序表

    //插入新元素
    cout<<"顺序表插入新元素"<<endl;
    int indexToInsert;//要插入的位置
    int elemToInsert;//要插入的元素
    cout<<"输入插入的位置：";//插入的位置
    cin>>indexToInsert;
    cout<<"输入要插入的元素的值";//插入的元素的值
    cin>>elemToInsert;
    if(Insert_Sqlist(L,indexToInsert,elemToInsert)){
        cout<<"insert successfully!"<<endl;
        Show_Sqlist(L);
    }

    //删除元素
    cout<<"顺序表删除元素"<<endl;
    int indexToDelete;//要删除的元素的位置
    cout<<"输入删除第几个元素";
    cin>>indexToDelete;
    if(Delete_Sqlist(L,indexToDelete)){
        cout<<"delete successfully!"<<endl;
        Show_Sqlist(L);
    }

    //按值查找元素
    cout<<"顺序表按值查找"<<endl;
    int valueToSearch;//要查询的元素的值
    cout<<"输入要查找元素的值";
    cin>>valueToSearch;
    int SearchReasult = FindElementByValue_Sqlist(L,valueToSearch);//查询的结果
    if(SearchReasult!=0){//返回0代表不存在
        cout<<"search successfully!"<<endl;
        cout<<"the location of \""<<valueToSearch<<"\" is "<<SearchReasult<<endl;
    }
    else{
        cout<<"search failed"<<endl;
    }



//动态顺序表
    //动态顺序表初始化
    Init_Seqlist(SeqL);//引用初始化动态顺序表
//    Define_Seqlist(SeqL);//输入顺序表
//    Show_Seqlist(SeqL);//打印顺序表
}

void LinklistTest(){
    Linklist L;
    cout<<"所用的链表都默认带头结点"<<endl;

    //创建单链表
//    List_HeadInsert(L);//头插法创建单链表
    List_TailInsert(L);//尾插法创建单链表
    Show_Link(L);

    //按位查找
    cout<<"按位查找"<<endl;
    int index = 0;//要查找的位置
    cout<<"输入要查找第几个元素"<<endl;
    cin>>index;
    Linklist theElem1 = GetElemByIndex(L,index);
    if(theElem1)
        cout<<"第"<<index<<"个元素为"<<theElem1->data<<endl;
    else//没找到，返回的应该是一个空指针
        cout<<"没找到"<<endl;
    cout<<"==============================================="<<endl;

    //按值查找
    cout<<"按值查找"<<endl;
    int value = 0;//要查找的值
    int Searchindex = 0;//用于存放结果的位置
    cout<<"输入要查找的值"<<endl;
    cin>>value;
    Linklist theELem2 = GetElemByValue(L,value,Searchindex);
    if(theELem2) {
        cout << theELem2->data<<endl;
        cout << "值为" << value << "的元素位置为"<<Searchindex << endl;
    } else //没找到，返回的应该是一个空指针
        cout << "没找到" << endl;
    cout<<"==============================================="<<endl;

    //单链表插入结点
    cout<<"单链表插入结点"<<endl;
    int valueToInsert = 0;//插入的值
    int indexToInsert = 0;//插入在那个结点点之后
    cout<<"输入要插入的结点的位置"<<endl;
    cin>>indexToInsert;
    cout<<"输入要插入的值"<<endl;
    cin>>valueToInsert;
    if(InsertElemToLinklist(L,valueToInsert,indexToInsert)){
        cout<<"插入成功！"<<endl;
        Show_Link(L);
    } else {
        cout<<"插入失败！"<<endl;
        cout<<"==============================================="<<endl;
    }

    //单链表删除结点
    cout<<"单链表删除结点"<<endl;
    int indexToDelete = 0;
    cout<<"输入要删除第几个结点"<<endl;
    cin>>indexToDelete;
    if(DeleteElemFromLink(L,indexToDelete)){
        cout<<"删除成功！"<<endl;
        Show_Link(L);
    } else {
        cout<<"删除失败！"<<endl;
        cout<<"==============================================="<<endl;
    }

    //单链表删除特定结点
    //局限性在于不能删除最后一个元素
    cout<<"删除特定结点"<<endl;
    int indexToDeleteSpecificElem = 0;
    cout<<"输入要删除第几个元素，不能是最后一个元素"<<endl;
    cin>>indexToDeleteSpecificElem;
    Linklist theElem3 = GetElemByIndex(L,indexToDeleteSpecificElem);
    if(theElem3){
        if(DeleteSpecificElemFromLink(theElem3)){
            cout<<"删除成功！"<<endl;
        }
        else{
            cout<<"删除失败！不能删除最后一个元素"<<endl;
        }
    }
    else{
        cout<<"删除失败！未能找到该元素"<<endl;
    }
    Show_Link(L);

}


//双链表测试
void DLinklistTest(){
    DLinklist L;
    DList_TailInsert(L);
    Show_DLink(L);
}