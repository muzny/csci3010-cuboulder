#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <map>
#include <math.h>

#include "Item.h"
#include "Store.h"

/** 
  Provided code for CSCI 3010, PE 7, Fall 2019
*/

std::string ShoppingCart::DisplayCart() {
  std::string inv = "";
  for (Item * i : in_cart_) {
    inv.append(i->ToString());
    inv.append("\n");
  }
  return inv;
}

void ShoppingCart::RemoveItem(Item * to_remove) {
  if (to_remove->get_quantity() > 1) {
    to_remove->DecreaseQuantity(1);
  } else {
    int target = -1;
    for (int i = 0; i < in_cart_.size(); i++) {
      if (in_cart_[i] == to_remove) {
        target = i;
        break;
      }
    }
    if (target >= 0) {
      in_cart_.erase(in_cart_.begin() + target);
    }
  }
}

void ShoppingCart::AddItem(Item * to_add) {
  bool added = false;
  for (int i = 0; i < in_cart_.size(); i++) {
    if (in_cart_[i]->get_id() == to_add->get_id()) {
      in_cart_[i]->IncreaseQuantity(1);
      added = true;
      break;
    }
  }
  if (!added) {
    in_cart_.push_back(to_add);
  }
}


Store::Store(std::string filename) {
  filename_ = filename;

  std::ifstream file;
  if (! file.is_open()) {
    file.open(filename);
  }

  std::string line;
  std::string inv = "Inventory:";
  bool inventory = false;
  int id = 1;
  while (std::getline(file, line)) {
    // name is the first line
    if (name_.size() == 0) {
      name_ = line;
    }
    if (line.substr(0, inv.size()) == inv) {
      inventory = true;
    } else if (inventory) {
      std::vector<std::string> tokens;
      std::istringstream iss(line);
      std::string token;
      while(std::getline(iss, token, ',')) {
        tokens.push_back(token);
      }
      Item * i1 = new Item(id, tokens[0], std::stod(tokens[1]), std::stoi(tokens[2]));
      inventory_.push_back(i1);
      id++;
    }
  }
  file.close();


  cart_ = new ShoppingCart();
}

std::map<int, std::string> Store::Items() {
  std::map<int, std::string> items;
  for (Item * i : inventory_) {
    int id = i->get_id();
    std::string as_str = i->ToString();
    if (i->get_quantity() > 0) {
      items.insert({id, as_str});
    }
  }
  return items;
}

std::map<int, std::string> Store::CartItems() {
  std::map<int, std::string> items;
  for (Item * i : cart_->get_items()) {
    int id = i->get_id();
    std::string as_str = i->ToString();
    if (i->get_quantity() > 0) {
      items.insert({id, as_str});
    }
  }
  return items;
}

void Store::AddItemToCart(int item_id) {
  Item * target;
  for (Item * i : inventory_) {
    if (i->get_id() == item_id) {
      i->DecreaseQuantity(1);
      target = i->Clone();
      break;
    }
  }
  cart_->AddItem(target);
}

void Store::RemoveItemFromCart(int item_id) {
  Item * target;
  for (Item * i : cart_->get_items()) {
    if (i->get_id() == item_id) {
      target = i;
      break;
    }
  }
  cart_->RemoveItem(target);
  for (Item * i : inventory_) {
    if (i->get_id() == item_id) {
      i->IncreaseQuantity(1);
    }
  }
}

std::string Store::DisplayCart() {
  return cart_->DisplayCart();
}


std::string Store::DisplayInventory() {
  std::string inv = "";
  for (Item * i : inventory_) {
    inv.append(i->ToString());
    inv.append("\n");
  }
  return inv;
}

double Store::Checkout() {
  
  double total = 0.0;
  for (Item * i : cart_->get_items()) {
    // tax rate for 80309
    total += (i->get_cost() * i->get_quantity()) * 1.08845;
  }

  // then we will overwrite the file
  std::ofstream ofs;
  ofs.open (filename_, std::ofstream::out);

  ofs << name_ << std::endl << std::endl;
  ofs << "Inventory:" << std::endl;
  for (Item * i : inventory_) {
    ofs << i->get_type() << "," << std::to_string(roundf(i->get_cost() * 100) / 100)
     << "," << std::to_string(i->get_quantity()) << std::endl;
  }
  ofs.close();

  this->ClearCart();

  return total;
}

void Store::ClearCart() {
  cart_->ClearCart();
}

