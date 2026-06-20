#include <iostream>

int main() {
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            std::cout << "x: " << x << ", y: " << y << std::endl;
        }
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}