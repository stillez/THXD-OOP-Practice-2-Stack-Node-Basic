//
// Created by Stillez on 3/23/2016.
//

#include "node.h"

Node::Node(int value, Node *ptr) {
  item = value;
  next = ptr;
}

int Node::getItem() {
  return item;
}

Node *Node::getNext() {
  return next;
}