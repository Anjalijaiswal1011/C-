#include <iostream>

class NumberClassifier {
private:
    int number;

public:
    // Constructor to initialize the number
    NumberClassifier(int num) {
        number = num;
    }

    // Function to check if the number is odd or even
    void classifyNumber() {
        if (number % 2 == 0) {
            std::cout << number << " is an even number." << std::endl;
        } else {
            std::cout << number << " is an odd number." << std::endl;
        }
    }
};

int main() {
    int num;

    // Input the number from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Create an object of the NumberClassifier
    //class with the input number
    NumberClassifier numClassifier(num);

    // Call the classifyNumber method to determine 
    //whether the number is odd or even
    numClassifier.classifyNumber();

    return 0;
}
// Anjali Jayswal