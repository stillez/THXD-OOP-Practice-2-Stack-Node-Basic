#include <iostream>
#include "node.h"
#include "stack.h"
using namespace std;

/**
 * function này chỉ nhằm mục đích test cho nhanh
 */
void numberElementsOfStack(Stack stack) {
  cout<<"Number Elements of Stack: "<<stack.numOfElements()<<"\n";
}
int main() {
  Stack stack;
  stack.numOfElements();
  numberElementsOfStack(stack);
  stack.push(44);
  numberElementsOfStack(stack);
  stack.push(23);
  numberElementsOfStack(stack);
  stack.push(43);
  numberElementsOfStack(stack);
  stack.push(12);
  numberElementsOfStack(stack);
//  stack.print();
  cout<<stack.pop()<<"\n";
  numberElementsOfStack(stack);
//  stack.print();
  /*
   * Vì lí do buồn ngủ nên chưa làm method print()
   * */
  return 0;
}