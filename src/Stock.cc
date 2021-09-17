#include "Stock.hh"

Stock::Stock(std::string crockery, std::string type, int quantity)
{
  this->crockery = crockery;
  this->type = type;
  this->quantity = quantity;
}

Stock::~Stock()
{
}

std::string Stock::GetCrockery() const
{
  return crockery;
}

std::string Stock::GetType() const
{
  return type;
}
int Stock::GetQuantity() const
{
  return quantity;
}
