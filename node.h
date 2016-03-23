//
// Created by Stillez on 3/23/2016.
//

#ifndef OOP_EXAM_STACK_NODE_NODE_H
#define OOP_EXAM_STACK_NODE_NODE_H


class Node {
  private:
    int item;
    Node *next;
  public:
    Node(int value, Node *ptr);
    int getItem();
    Node* getNext();
};


#endif //OOP_EXAM_STACK_NODE_NODE_H
