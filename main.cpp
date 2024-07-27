// libraries
#include <iostream>
#include <string>
//

// here is the starting point
int main()
{
    int a = 33;
    std::cout << a << std::endl;
    decltype(a) b{42};
    auto result = a + b;
    std::cout << result << std::endl;
    std::string name = "nimakarimaians";
    std::cout << name << std::endl;
    return 0;
}
