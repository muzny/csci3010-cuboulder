#include <iostream>
#include <fstream>

#include "Item.h"
#include "Store.h"
#include "TextUI.h"


/**
PE 7 provided code - CSCI 3010 Fall 2019
Felix Muzny
*/


int main(int argc, char* argv[]) {

  // Check the number of parameters
  if (argc < 2) {
      // Tell the user how to run the program
      std::cerr << "Usage: " << argv[0] << " <STORE_FILE>" << std::endl;
      return 1;
  }
  Store s(argv[1]);

  std::cout << "Welcome to " << s.get_name() << std::endl;

  // Create a TextUI object, then continue prompting the user
  // for what they want to do until they leave the store
  TextUI ui;
  std::string choice;
  while (choice != "Leave") {
    choice = ui.MainMenu();
    std::cout << std::endl;
    ui.RouteChoice(s, choice);
  }

  return 0;
}
