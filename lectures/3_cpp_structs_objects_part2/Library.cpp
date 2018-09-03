#include <iostream>
#include <string>
#include <vector>

#include "Library.h"

bool Book::operator==(const Book & b) {
  return title == b.title && author == b.author;
}

/**
  Zero argument constructor initializes a library with a shelf but no books.
*/
Library::Library() {
  std::vector<Book> tmp;
  shelf_ = tmp;  // initialize my shelf
}

/**
  Prints out each book in the library, one per line to cout
*/
void Library::PrintBooks() {
  for (Book b : shelf_) {
    std::cout << b.title << " by " << b.author << std::endl;
  }
}