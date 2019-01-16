#include <iostream>

using namespace std;

void Swap1(int x, int y) {
    int tmp = x;
    x = y;
    y = tmp;
}

void Swap2(int &x, int &y) {
      int tmp = x;
      x = y;
      y = tmp;
}

int main(int argc, char **argv) {
      int a = 5, b = 10;

      Swap1(a, b);
      cout << "a: " << a << "; b: " << b << endl;

      a = 5, b = 10;
      Swap2(a, b);
      cout << "a: " << a << "; b: " << b << endl;
      return EXIT_SUCCESS;
}

