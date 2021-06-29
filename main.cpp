#include <iostream>
#include "./Sqlist.h"
using namespace std;
void SqlistTest();

int main() {
    int operatorNum = 0;
    while(operatorNum != -1){
        cout<<"enter 1 to Sqllist"<<endl;
        cout<<"enter 2 to LinkList"<<endl;
        cout<<"enter 3 to DLinkList"<<endl;
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
    int indexToInsert;//要插入的位置
    int elemToInsert;//要插入的元素
    cout<<"Please enter the location of the new element to insert: ";//插入的位置
    cin>>indexToInsert;
    cout<<"Please enter the value of the new element to insert: ";//插入的元素的值
    cin>>elemToInsert;
    if(Insert_Sqlist(L,indexToInsert,elemToInsert)){
        cout<<"insert successfully!"<<endl;
        Show_Sqlist(L);
    }

    //删除元素
    int indexToDelete;//要删除的元素的位置
    cout<<"Please enter the location of the  element to delete: ";
    cin>>indexToDelete;
    if(Delete_Sqlist(L,indexToDelete)){
        cout<<"delete successfully!"<<endl;
        Show_Sqlist(L);
    }

    //按值查找元素
    int valueToSearch;
    cout<<"Please enter the value of the  element to search: ";
    cin>>valueToSearch;
    int SearchReasult = FindElementByValue_Sqlist(L,valueToSearch);
    if(SearchReasult!=0){
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