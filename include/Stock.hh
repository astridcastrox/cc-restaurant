#pragma once

#include<string>

class Stock
{
private:
  std::string crockery;
  std::string type;
  int quantity; 
public:
  Stock(std::string crockery, std::string type, int quantity);
  ~Stock();
  std::string GetCrockery() const;
  std::string GetType() const;
  int GetQuantity() const;
};
