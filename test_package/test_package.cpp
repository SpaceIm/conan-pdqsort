#include <pdqsort.h>

#include <array>
#include <iostream>

int main() {
    std::array<int, 10> s = {3, -102, 4, 30, 432, -13531, -43, 1, 0, -3};

    pdqsort(s.begin(), s.end());
    for (int i = 0; i < 10; ++i) {
        std::cout << s[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
