#include <iostream>
#include <string>
#include <fmt/core.h>  // Include the fmt header

int main() {
    std::string s = "Siva";
    std::string result = fmt::format("I'm {}.", s);
    std::cout << result << std::endl;
    return 0;
}