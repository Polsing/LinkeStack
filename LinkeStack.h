#if !defined(_LINKESTACK_H)
#define _LINKESTACK_H
#include"../ChainNode/ChainNode.h"
#include"../Linkedlist/Linkedlist.h"


class LinkeStack : public Linkedlist
{
 private:     
    ChainNode *FirstNode;
    int curSize; 

 private: 
   bool isEmpty();
   bool isFull();
   
 public:        //สมาชิกประเภทนี้สามารถเข้าถึงได้ทุกส่วนของโปรแกรม
  LinkeStack(); //คอนสตรัคเตอร์เป็นฟังก์ชันพิเศษที่จะถูกเรียกใช้เมื่อออบเจ็คถูกสร้าง เป้าหมายของมันเพื่อสำหรับกำหนดค่าเริ่มต้นให้กับออบเจ็ค คอนสตรัคเตอร์ใช้ชื่อเดียวกับคลาส
  //~LinkeStack();//dest

     void push(int e);
      int pop();
      int top(); 
     void swapTop();
    
};


#endif // _MYCODE_H_
