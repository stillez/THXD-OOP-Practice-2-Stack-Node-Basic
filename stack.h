//
// Created by Stillez on 3/23/2016.
//

#ifndef OOP_EXAM_STACK_NODE_STACK_H
#define OOP_EXAM_STACK_NODE_STACK_H


#include "node.h"

class Stack {
  private:
    Node *top;
    int size;
  public:
    Stack();
    void push(int);
    int pop();
    bool isEmpty();
    int numOfElements();
    void print();
};


#endif //OOP_EXAM_STACK_NODE_STACK_H