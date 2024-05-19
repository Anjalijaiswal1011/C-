#include <iostream>

int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // Check which number is the greatest
    int greatest = num1; // Assume num1 is the greatest initially

    if (num2 > greatest) {
        greatest = num2;
    }

    if (num3 > greatest) {
        greatest = num3;
    }

    // Print the greatest number
    std::cout << "The greatest number is: " << greatest << std::endl;

    return 0;
}
// Anjali Jayswal