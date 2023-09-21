/**
 * 
 * 
 * 64028780 พลสิงห์ ตาเละมัน
 *
 * 
*/
#include "LinkeStack.h"
#include <iostream>
using namespace std;

int main()
{
   int op;   

   LinkeStack obj;
   cout<<endl;
   
  do
   {
    cout<<endl;
    cout<<" Menu "<<endl;
    cout<<"1:PUSH element 2:SIZE 3:POP element"<<endl; 
    cout<<"4:TOP element 5:CLEAR 6:DISPLAY"<<endl;

    cout<<endl;
    cout<<" Enter Number of Menu: ";
    cin>>op;
  
  if(op==1) //ADD
  {
    int element;
  
      cout<<"Set Data List Is: ";
      cin>>element;
      obj.push(element);
    
      obj.display();
      cout<<endl;
  }

  else if(op==2) //SIZE
  {
    int k1 = obj.size();
    cout<<"The current data size List is: "<<k1<<endl;
    cout<<endl;
  }

  else if(op==3) //REMOVE
  {   obj.display();
      cout<<"Remove: "<<obj.pop()<<endl;
      obj.display();
      cout<<endl;
  }

  else if(op==4) // GET
  {
      cout<<"Information on top: "<<obj.top()<<endl;
      cout<<endl;

  }

  else if(op==5) //CLEAR
  {
    obj.Clear();
    obj.display();
    cout<<endl;
  }

  else if(op==6) //DISPLAY
  {
    obj.display();
    cout<<endl;
  }
 
   } while (op !=0);
   
  
   return 0;
   
 }
