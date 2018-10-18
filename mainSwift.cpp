#include <iostream>
float too(float a, char d, float b) {
    switch (d) {
        case '-':
            return a-b;
            break;
        case '+':
            return a+b;
            break;
        case '*':
            return a*b;
            break;
        case '/':
            return a/b;
            break;
    }
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
    std::cout << too(a,c,b) << '\n';
    return 0;
}
