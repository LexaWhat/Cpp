#include <iostream>
#include <string>

int print(const std::string& str) {
    std::cout << str;
    return 0;
}

int println(const std::string& str) {
    std::cout << str << std::endl;
    return 0;
}

int main() {
    println("Hello World!");
    println("Hello World!");
}
