#include <iostream>
#include <string>
#include <vector>

#include "Library.h"

// implement bool Book::operator==(const Book & b)

// implement std::ostream & operator<<(std::ostream & os, const Book & b)

/**
	Zero argument constructor initializes a library with a shelf but no books.
*/
Library::Library() {
	std::vector<Book> tmp;
	shelf_ = tmp;  // initialize my shelf
}

void Library::Donate(Book b) {
	shelf_.push_back(b);
}

// implement std::ostream & operator<<(std::ostream & os, const Library & l)

void Library::PrintBooks() {
	for (Book b : shelf_) {
		std::cout << b.title << " by " << b.author << std::endl;
	}
}
