#pragma once
#include "Node.hh"
#include "Stock.hh"

class Stack
{
private:
  Node* head{nullptr};
public:
  Stack();
  ~Stack();
  void Pop(); 
  void Push(Stock*& Stock);
  bool IsEmpty() const;
  void Print();
};
