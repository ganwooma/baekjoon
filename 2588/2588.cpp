#include <iostream>
#include <string>

int a, b;

int main() {
    std::cin >> a >> b;
    std::string c = std::to_string(b);
    for (int i = 2; i >= 0; i--) {
        std::cout << a * (c[i] - '0') << std::endl;
    }
    std::cout << a * b;

}