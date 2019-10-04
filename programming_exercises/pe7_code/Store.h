#ifndef _STORE_H_
#define _STORE_H_

/** 
  Provided code for CSCI 3010, PE 7, Fall 2019
*/

#include <vector>
#include <map>
#include <fstream>

#include "Item.h"


class ShoppingCart {
public:

  void AddItem(Item * to_add);

  void RemoveItem(Item * to_remove);

  std::string DisplayCart();

  void ClearCart() { in_cart_.clear(); };

  std::vector<Item *> get_items() { return in_cart_; };

private:
  std::vector<Item *> in_cart_;
};


class Store {
public:
  Store(std::string filename);


  std::string DisplayInventory();

  std::map<int, std::string> Items();

  std::map<int, std::string> CartItems();

  void AddItemToCart(int item_id);
  
  void RemoveItemFromCart(int item_id);

  std::string DisplayCart();

  double Checkout();

  void ClearCart();

  std::string get_name() const {return name_;};


private:
  std::string name_;
  std::string filename_;
  std::vector<Item *> inventory_;

  ShoppingCart * cart_;
};


#endif  // _STORE_H_
