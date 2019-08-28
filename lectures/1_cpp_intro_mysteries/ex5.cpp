#include <iostream>
#include <cstdlib>
#include <math.h>

void Mystery(int x) {
    int u = (int)sqrt((double)x);
    bool *a = new bool[x + 1];

    // sets all entries in a to 0 (false)
    memset(a, 0, sizeof(bool) * (x + 1));

    for (int m = 2; m <= u; m++) {
        if (!a[m]) {
            for (int k = m * m; k <= x; k += m) {
                a[k] = true;
            }
        }
    }

    for (int m = 2; m <= x; m++) {
        if (!a[m]) {
            std::cout << m << " ";
        }
    }

    delete [] a;
}


int main(int argc, char* argv[]) {
    Mystery(atoi(argv[1]));
    return EXIT_SUCCESS;
}

