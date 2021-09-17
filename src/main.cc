#include<iostream>
#include "Stock.hh"
#include "Stack.hh"

int main()
{
  Stock* thing1{new Stock("Fork & Spoon", "Silver", 500)};
  Stock* thing2{new Stock("Cup", "Ceramic", 150)};
  Stock* thing3{new Stock("Glass", "Glass", 350)};
  Stock* thing4{new Stock("Bowl", "Wood", 100)};
  Stock* thing5{new Stock("Plate ", "Porcelain", 200)};

  Stack* stack{new Stack()};
  stack->Push(thing1);
  stack->Push(thing2);
  stack->Push(thing3);
  stack->Push(thing4);
  stack->Push(thing5);
  stack->Print();

  stack->Pop();

  stack->Print();

  std::cin.get();

  delete stack;
  return 0;
}

