#include <iostream>
#include "LinkeStack.h"
using namespace std;

bool LinkeStack::isEmpty()
{
    return false;
}

bool LinkeStack::isFull()
{
  ChainNode *o = new ChainNode;
    bool returnBool;
      if(o != NULL)
      returnBool = false;
      else
      returnBool = true;

    delete o;
    return returnBool;
}

LinkeStack::LinkeStack()
{
   // cout<<"strat"<<endl;
    curSize = 0;
    FirstNode = new ChainNode(0,NULL);
    
}



void LinkeStack::push(int e)
{
    add(0,e);
}

int LinkeStack::pop()
{
    return remove(0);
}

int LinkeStack::top()
{
    return get(0);
}

