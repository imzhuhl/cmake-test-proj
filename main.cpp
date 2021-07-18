#include <iostream>
#include "greet.h"
#include "include/zhlmath/vec_add.hpp"


int main() {
    std::cout << "hello world" << std::endl;
    std::string myname("zhuhonglin");
    std::string ret = greeting(myname);
    std::cout << ret << std::endl;

    int a[10] {1, 2, 3, 4};
    int b[10] {0};
    int c[10] {0};
    zhlmath::vec_add(a, b, c, 10);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
