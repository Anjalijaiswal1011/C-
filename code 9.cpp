#include <iostream>

int main() {
    float salary;
    int yearsOfService;

    // Input salary and years of service
    std::cout << "Enter the salary: ";
    std::cin >> salary;

    std::cout << "Enter the total years of service: ";
    std::cin >> yearsOfService;

    // Check if the salary is greater than 50000 and
    // years of service is greater than or equal to 5
    if (salary > 50000 && yearsOfService >= 5) {
        std::cout << "You are eligible for a bonus!" << std::endl;
    } else {
        std::cout << "You are not eligible for a bonus." << std::endl;
    }

    return 0;
}
// Anjali Jayswal