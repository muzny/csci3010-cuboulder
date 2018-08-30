#include <iostream>

// Names:
//

// 1) define a Book struct here. Include at least 2 fields.
// recall:
// struct Name{
//  type field1;
//  type field2;
// };


// 3) define a Library object here. Your Library can store 10 Books. (it only has one shelf)
// Your Library should have at least one other field.
// Go ahead and define your constructor in line. When your Library is created it has no books.
// recall:
// class Name {
//  public:
//      Name(); // constructor!
//      return_type OtherMethods();
//  private:
//      type field1_;
//      type field2_;
// };


int main() {
    // 2) Instantiate a Book. Set it's fields equal to some values.
    // Print out the values of the book's fields.

    // 4) Instantiate a Library.
   
    // 5) Add a void Donate(Book b) method to your Library class.
    // Your Library should store the new book at the end of its shelf.
    // If there are already 10 books in the Library, the Library throws away the
    // donated book. Donate a few books.

    // 6) Add a int get_num_books() method to your Library. Call that method
    // and print out how many books your Library has.

    // 7) Yay! Now, create 2 new files, Library.cpp and Library.h. Put the method implementations
    // in Library.cpp and the definitions of Book and Library in Library.h
    // Don't remove them from this file in case something isn't working out.
    //
    // recall: include header guards in Library.h (#ifndef _LIBRARY_H_ and #define _LIBRARY_H_ at the top,
    // #endif at the bottom of the file)
    // recall: you will need to #include "Library.h" at the top of Library.cpp
    // recall: you will need to implement the methods with the Library:: prefix. (this includes the constructor)
    //  -example: void Library::Donate(Book b) { ... }
    // 
    // Test this out by compiling Library.cpp: g++ -std=c+11 -Wall -c Library.cpp

    // 8) Comment out the Book and Family definitions in this file and add #include "Library.h"
    // Test this out by compiling: g++ -std=c+11 -Wall run_library.cpp Library.o -c run_library
}
