#include <iostream>
#include <string>
#include <vector>

#include "Library.h"

bool Book::operator==(const Book & b) {
    return title == b.title && author == b.author;
}

std::ostream & operator<<(std::ostream & os, const Book & b) {
    os << b.title << " by " << b.author;
    return os;
}

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

std::ostream & operator<<(std::ostream & os, const Library & l) {
	for (Book b : l.shelf_) {
		os << b << std::endl;
	}
    return os;
}

void Library::PrintBooks() {
	for (Book b : shelf_) {
		std::cout << b.title << " by " << b.author << std::endl;
	}
}
