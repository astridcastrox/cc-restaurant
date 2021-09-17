#include<iostream>
#include "Stack.hh"

Stack::Stack()
{
}

Stack::~Stack()
{
}

void Stack::Pop()
{
  if(IsEmpty())
  {
    std::cout << "List is empty" << std::endl;
  }
  else
  {
    Node* current{head};
    head = head->next;
    delete current;
  }
}

bool Stack::IsEmpty() const
{
  return head == nullptr;
}

void Stack::Push(Stock*& stock)
{
  if(IsEmpty())
  {
    head = new Node(stock);
  }
  else
  {
    Node* back{head};
    head = new Node(stock);
    head->next = back;
  }
}

void Stack::Print()
{
  if(IsEmpty())
  {
    std::cout << "Stack is empty" << std::endl;
  }
  else
  {
    Node* current{head};

    std::cout << "List:"<< std::endl;
    std::cout << std::endl;
    while (current)
    {
      std::cout << "Crockery: " << current->GetStock()->GetCrockery() << std::endl;
      std::cout << "Material Type: " << current->GetStock()->GetType() << std::endl;
      std::cout << "Quantity: " << current->GetStock()->GetQuantity() << std::endl;
      std::cout << std::endl;
      current = current->next;
    }
  }
}