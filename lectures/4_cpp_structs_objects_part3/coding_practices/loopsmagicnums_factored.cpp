#include <iostream>
#include <map>

struct Book {
    int id;
    std::string text;
};

void PrintBook(Book b) {
    std::cout << "Book: "<< b.id << std::endl;
    std::cout << b.text << std::endl;
}

int main() {
    // seed random with the current time
    srand( time(0) );

    int length = 100;
    int ascii_range = 93;
    int ascii_start_val = 33;
    for (int book_id = 1; book_id <= 4; book_id++){
        std::string s = "";
        for (int i = 0; i < rand() % length + 1; i++) {
            int ascii_num = (rand() % ascii_range) + ascii_start_val;
            s += (char) ascii_num;
        }
        Book b1({book_id, s});
        PrintBook(b1);
    }
}

