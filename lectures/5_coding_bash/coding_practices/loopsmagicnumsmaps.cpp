#include <iostream>
#include <map>

struct Book {
    int id;
    std::string text;
};

void PrintBook(Book b) {
    if (b.id == 1) {
        std::cout << "Book: "<< 1 << std::endl;
        std::cout << b.text << std::endl;
    } else if (b.id == 2) {
        std::cout << "Book: "<< 2 << std::endl;
        std::cout << b.text << std::endl;
    } else if (b.id == 3) {
        std::cout << "Book: "<< 3 << std::endl;
        std::cout << b.text << std::endl;
    } else if (b.id == 4) {
        std::cout << "Book: "<< 4 << std::endl;
        std::cout << b.text << std::endl;
    }
}

int main() {
    // seed random with the current time
    srand( time(0) );

    std::map<int, Book> books;

    std::string s = "";
    for (int i = 0; i < rand() % 100 + 1; i++) {
        int ascii_num = (rand() % 93) + 33;
        s += (char) ascii_num;
    }
    Book b1({1, s});
    books[1] = b1;

    s = "";
    for (int i = 0; i < rand() % 100 + 1; i++) {
        int ascii_num = (rand() % 93) + 33;
        s += (char) ascii_num;
    }
    Book b2({2, s});
    books[2] = b2;


    s = "";
    for (int i = 0; i < rand() % 100 + 1; i++) {
        int ascii_num = (rand() % 93) + 33;
        s += (char) ascii_num;
    }
    Book b3({3, s});
    books[3] = b3;


    s = "";
    for (int i = 0; i < rand() % 100 + 1; i++) {
        int ascii_num = (rand() % 93) + 33;
        s += (char) ascii_num;
    }
    Book b4({4, s});
    books[4] = b4;

    PrintBook(books[1]);
    PrintBook(books[2]);
    PrintBook(books[3]);
    PrintBook(books[4]);
}

