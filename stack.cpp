//
// Created by Stillez on 3/23/2016.
//

#include <iostream>
#include "stack.h"

Stack::Stack() {
  size = 0;
  top = NULL;
}

void Stack::push(int value) {
  size++;
  Node* tempNode = top;
  top = new Node(value, tempNode);
}

int Stack::pop() {
  if (size == 0) {
    return -1;
  }
  size--;
  Node* nextNode = top->getNext();
  Node tempTop = *top;
  delete top;
  top = nextNode;
  return tempTop.getItem();
}

bool Stack::isEmpty() {
  if (top == NULL) return true;
  return false;
}

int Stack::numOfElements() {
  return size;
}

void Stack::print() {
  if (isEmpty()) {
    std::cout << "Stack's empty";
  } else {
    /*
     * Phần của mấy bạn ở đây
     * */
  }
}