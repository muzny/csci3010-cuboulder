#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip> // setprecision
#include <sstream> // stringstream

#include "Store.h"
#include "TextUI.h"

/** 
  Provided code for CSCI 3010, PE 7, Fall 2019
*/

TextUI::TextUI() {
  // set up the main menu
  main_menu_.push_back("Display inventory");
  main_menu_.push_back("Add item to cart");
  main_menu_.push_back("Remove item from cart");
  main_menu_.push_back("Checkout");
  main_menu_.push_back("Leave");
}

std::string TextUI::MainMenu() {
  int choice = -1;
  while (choice < 0 || choice >= main_menu_.size()) {
    // display the main menu
    for (int i = 0; i < main_menu_.size(); i++) {
      std::cout << std::to_string(i) << ": " << main_menu_[i] << std::endl;
    }
    std::string str_choice;
    std::cin >> str_choice;
    try {
      choice = std::stoi(str_choice);
    } catch (const std::invalid_argument& ia) {
      std::cout << "Enter a number" << std::endl;
    }
  }
  return main_menu_[choice];
}


int TextUI::ItemMenu(Store s, std::map<int, std::string> items) {
  int choice = -1;
  while (items.find(choice) == items.end() && choice != 0) {
    // display the main menu
    std::cout << "0: Back to main menu" << std::endl;
    std::map<int, std::string>::iterator it = items.begin();
    while(it != items.end()) {
      std::cout << std::to_string(it->first) << ": " << it->second << std::endl;
      it++;
    }
    std::string str_choice;
    std::cin >> str_choice;
    try {
      choice = std::stoi(str_choice);
    } catch (const std::invalid_argument& ia) {
      std::cout << "Enter a number" << std::endl;
    }
    std::cout << std::endl;
  }
  return choice;
}

void TextUI::RouteChoice(Store s, std::string choice) {
  if (choice == "Display inventory") {
    std::cout << "Store inventory" << std::endl;
    std::cout << s.DisplayInventory() << std::endl;
  } else if (choice == "Add item to cart") {
    std::map<int, std::string> items = s.Items();
    if (items.size() > 0) {
      std::cout << "Adding item to cart" << std::endl;
      int choice = this->ItemMenu(s, items);
      if (choice != 0) {
        s.AddItemToCart(choice);
        std::cout << "Cart: " << std::endl << s.DisplayCart() << std::endl;
        std::cout << "Inventory: " << std::endl << s.DisplayInventory() << std::endl;
      }
    } else {
      std::cout << "There are no items left in this store." << std::endl;
    }
  } else if (choice == "Remove item from cart") {
    std::map<int, std::string> items = s.CartItems();
    if (items.size() > 0) {
      std::cout << "Removing item from cart" << std::endl;
      int choice = this->ItemMenu(s, items);
      if (choice != 0) {
        s.RemoveItemFromCart(choice);
        std::cout << "Cart: " << std::endl << s.DisplayCart() << std::endl;
        std::cout << "Inventory: " << std::endl << s.DisplayInventory() << std::endl;
      }
    } else {
      std::cout << "There are no items in your cart." << std::endl;
    }
  } else if (choice == "Checkout") {
    double total = s.Checkout();
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << total;
    std::string s = stream.str();
    std::cout << "Your total is: " << s << std::endl;
  } else {
    // Leave
    s.ClearCart();
    std::cout << "Goodbye! The items in your cart have been returned to the store." << std::endl;
  }
}
