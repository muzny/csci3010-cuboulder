#ifndef _LIBRARY_H_
#define _LIBRARY_H_

struct Book {
    std::string title;
    std::string author;

    bool operator==(const Book &b);

    // this is the way to declare operator== as a friend
    // if you do this, the implementation will not have Book:: in the
    // function definition
    //friend bool operator==(const Book &b1, const Book &b2);
    friend std::ostream & operator<<(std::ostream & os, const Book & b);
};


class Library {
public:
    Library();

    void Donate(Book b);

    void PrintBooks();

    friend std::ostream & operator<<(std::ostream & os, const Library & l);

private:
    // arrays require size to be known at compile time.
    // if we were only going to store a fixed number of books
    // we could do this easily:
    // Book shelf_[10];
    std::vector<Book> shelf_;
};



#endif // _LIBRARY_H_
