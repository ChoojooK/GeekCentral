#include <iostream>

int main() {
    // Integer types
    int num1 = 42;
    short num2 = 32767;
    long num3 = 2147483647;
    long long num4 = 9223372036854775807;

    // Floating-point types
    float fnum = 3.14159f;
    double dnum = 3.141592653589793;
    long double ldnum = 3.14159265358979323846L;

    // Character types
    char ch = 'A';
    signed char sch = -128;
    unsigned char uch = 255;

    // Boolean type
    bool flag = true;

    std::cout << "Integer: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << std::endl;
    std::cout << "Floating-point: " << fnum << ", " << dnum << ", " << ldnum << std::endl;
    std::cout << "Character: " << ch << ", " << sch << ", " << uch << std::endl;
    std::cout << "Boolean: " << flag << std::endl;

    return 0;
}
