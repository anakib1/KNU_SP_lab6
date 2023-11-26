#include <iostream>

int main() {

    int n = 10;
    int m = 20;
    int k = 100000000;
    int s = 0;
    for (int i = 0; i < k; i ++ ) {
        s += (n * n * n + m * m + 188);
    }

    std::cout << s << '\n';
}