/*
   Created by nima karimian on 06.12.24.
*/
#include <iostream>

#if defined(__cpp_lib_ranges) && __cplusplus >= 202300L
#define CPP23_SUPPORTED true
#else
#define CPP23_SUPPORTED false
#endif

namespace nima {
    void print_helloworld() {
        std::println("hi");
    }
}
int main() {
    nima::print_helloworld();
    std::cout << "C++23 support: " << (CPP23_SUPPORTED ? "Yes" : "No") << std::endl;
    return 0;
}

