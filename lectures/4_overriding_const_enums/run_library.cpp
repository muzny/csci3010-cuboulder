#include <iostream>
#include <vector>
#include "Library.h"

// Names:
//
// Complete numbered coding tasks.
// Answer the questions with "Answer: " in the comments in the comments.
// Turn all your library files in as library.zip on moodle before the end of class.

int main() {
    // 1) Instantiate a couple Books. Set their fields equal to some values.
    // Print out the values of the books' fields.
    Book b1;
    b1.title = "Harry Potter and the Prisoner of Azkaban";
    b1.author = "J.K. Rowling";
    std::cout << b1.title << " by " << b1.author << std::endl;

    Book b2;
    b2.title = "Harry Potter and the Prisoner of Azkaban";
    b2.author = "J.K. Rowling";


    // 2) Instantiate a Library.
    Library * l = new Library();
   
    // 3) Add a void Donate(Book b) method to your Library class.
    // Your Library should store the new book at the end of its shelf.
    // done.


    // 4) Donate one of the Books that you instantiated to your Library.
    l->Donate(b1);
    

    // 5) Print out the books in the Library (use the given PrintBooks method)
    std::cout << "Books in the library" << std::endl;
    l->PrintBooks();
    

    // 6) Change the title and/or author of the book that you donated to
    // something different.
    // Print out the new book information, then print out the books in your
    // Library. Did changing the Book information change it in your Library?
    //
    // Answer (and your hypothesis for why/why not):
    b1.title = "Harry Potter and the Goblet of Fire";
    std::cout << "b1 in main: " << std::endl;
    std::cout << b1.title << " by " << b1.author << std::endl;
    std::cout << "Books in the library" << std::endl;
    std::cout << *(l);


    b1.title = "Harry Potter and the Prisoner of Azkaban";
    std::cout << "b1 in main: " << std::endl;
    std::cout << b1.title << " by " << b1.author << std::endl;
    
    // 7) Create two Books that are separate structs (not pointers or references)
    // but that have the same information.
    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
    //
    // Answer:
    // Makes a compiler error!
    // b1.operator==(b2)
    if (b1 == b2) {
        std::cout << "equal" << std::endl;
    } else {
        std::cout << "not equal" << std::endl;
    }

    // 8) Create two Book references to your Books from # 7.
    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
    //
    // Answer:
    // tests to see if the memory address is the same

    Book & br1 = b1;
    Book & br2 = b2;
    if (br1 == br2) {
        std::cout << "equal" << std::endl;
    } else {
        std::cout << "not equal" << std::endl;
    }


    // 9) Create two Book pointers to your Books from # 7.
    // use the == operator to test if they are equal. What happens?
    // if it succeeds, are these equal?
    //
    // Answer:
    // Makes a compiler error!
    Book * bp1 = &b1;
    Book * bp2 = &b2;
    if (bp1 == bp2) {
        std::cout << "equal" << std::endl;
    } else {
        std::cout << "not equal" << std::endl;
    }

    
    // 10) overriding << operator for the library
    std::cout << b1;
}
