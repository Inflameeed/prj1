#include <iostream>
int main() {
    int a = 42;
    int b = 153;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "--- Let's swap places ---\n";
    int c = a;
    a = b;
    b = c;
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";



}