#include <iostream>

// A function that takes a function pointer as an argument
void applyFunction(int x, int (*func)(int)) {
    int result = func(x);
    std::cout << "Result: " << result << std::endl;
}

// A function that we can pass as an argument to applyFunction
int square(int x) {
    return x * x;
}

int main() {
    int input;

    // Prompt the user for input
    std::cout << "Enter a number: ";
    std::cin >> input;

    // Call applyFunction with the square function as an argument
    applyFunction(input, square);

    return 0;
}

