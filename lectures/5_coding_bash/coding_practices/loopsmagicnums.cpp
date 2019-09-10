#include <iostream>

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

    std::string s = "";
    for (int i = 0; i < rand() % 100 + 1; i++) {
        int ascii_num = (rand() % 93) + 33;
        s += (char) ascii_num;
    }
    Book b1({1, s});

    s = "";
    for (int i = 0; i < rand() % 100 + 1; i++) {
        int ascii_num = (rand() % 93) + 33;
        s += (char) ascii_num;
    }
    Book b2({2, s});


    s = "";
    for (int i = 0; i < rand() % 100 + 1; i++) {
        int ascii_num = (rand() % 93) + 33;
        s += (char) ascii_num;
    }
    Book b3({3, s});


    s = "";
    for (int i = 0; i < rand() % 100 + 1; i++) {
        int ascii_num = (rand() % 93) + 33;
        s += (char) ascii_num;
    }
    Book b4({4, s});

    PrintBook(b1);
    PrintBook(b2);
    PrintBook(b3);
    PrintBook(b4);
}

