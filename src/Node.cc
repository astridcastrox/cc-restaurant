#include "Node.hh"

Node::Node(Stock*& stock)
{
  this->stock = stock;
}

Node::~Node()
{
}

Stock* Node::GetStock() const
{
  return stock;
}