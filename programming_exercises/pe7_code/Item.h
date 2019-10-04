#ifndef _ITEM_H_
#define _ITEM_H_

/** 
  Provided code for CSCI 3010, PE 7, Fall 2019
*/

#include <string>

class Item {
public:
  Item(int id, std::string type, double cost, int initial_quantity)
  : id_(id),
  type_(type),
  cost_(cost),
  quantity_(initial_quantity)
  {}

  int get_id() { return id_; };

  int get_quantity() { return quantity_; };

  int get_cost() { return cost_; };

  std::string get_type() { return type_; };

  void IncreaseQuantity(int amount) { quantity_ += amount; };

  void DecreaseQuantity(int amount) { quantity_ -= amount; };

  std::string ToString() const;

  Item* Clone() { return new Item(this->id_, this->type_, this->cost_, 1); };

  friend std::ostream& operator<<(std::ostream& os_lhs, const Item& i);
private:
  int id_;
  std::string type_;
  double cost_;
  int quantity_;
};


#endif  // _ITEM_H_
