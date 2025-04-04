#include <iostream>
#include <string>

void print(const std::string& str) {
    std::cout << str;
}

void println(const std::string& str) {
    std::cout << str << std::endl;
}

int main() {
    println("Hello World!");
    println("Hello World!");
}
