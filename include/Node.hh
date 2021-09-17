#pragma once
#include "Stock.hh"

class Node
{
private:
  Stock* stock{};
public:
  Node* next{};
  Node(Stock*& stock);
  ~Node();

  Stock* GetStock() const;
};
