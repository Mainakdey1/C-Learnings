#include <iostream>

int main() {
    std::cout << 5 << '\n';
    std::cout <<-6.7 << '\n';
    std::cout << "hello world part 2\n";
    int x;
    double width;
    width = 5;
    std::cout << width << '\n';
    x = 6;
    std::cout << x * width;
    int k {6};
    std::cout << k;
    int z (5); // direct initialisation
    // int kh {4.5};
    int xh {};
    std::cin >> xh;
    std::cout << xh;
    int zh {5};
    [[maybe_unused]] double pi {3.14};
    return 0;
}