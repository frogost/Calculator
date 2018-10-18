#include <iostream>

float too1 (float a, char c, float b) {
    return a + b;
}
float too2 (float a, char c, float b) {
    return a - b;
}
float too3 (float a, char c, float b) {
    return a * b;
}
float too4 (float a, char c, float b) {
    return a / b;
}
int main() {
    float a;
    float b;
    char c;
    std::cout <<"First number = ";
    std::cin >> a;
    std::cout <<"Second number = ";
    std::cin >> b;
    std::cout <<"Operation (+,-,*,/) = ";
    std::cin >> c;
    if (c == '+') {
        std::cout << too1(a, c, b) << '\n';
    }
    else
    if (c == '-') {
        std::cout << too2(a, c, b) << '\n';
    }
    else
    if (c == '*') {
        std::cout << too3(a, c, b) << '\n';
    }
    else
    if (c == '/') {
        std::cout << too4(a, c, b) << '\n';
    }
    return 0;
}