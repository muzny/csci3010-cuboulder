#include <iostream>
#include <string>
#include <iomanip> // setprecision
#include <sstream> // stringstream
#include <math.h>

#include "Item.h"

/** 
  Provided code for CSCI 3010, PE 7, Fall 2019
*/


std::string Item::ToString() const {
  std::stringstream stream;
  stream << std::fixed << std::setprecision(2) << cost_;
  std::string s = stream.str();
  return type_ + ": " + s + " - " + std::to_string(quantity_);
}

std::ostream& operator<<(std::ostream& os_lhs, const Item& i) {
  os_lhs << i.ToString();
  return os_lhs;
}
