#include <iostream>

int main() {
    int day = 0;
    while (day < 1 || day > 31) {
        std::cout << "What day is it today? ";
        std::cin >> day;
        std::cout << "Your choice: " << day << std::endl;
    }

    if (day > 0 && day < 10) {
        std::cout << "Welcome to CSCI 3010's fortune teller!" << std::endl;
        std::cout << "For all your most accurate fortunes!" << std::endl;
        std::cout << std::endl;
        std::cout << "Clearly, you have a lot on the horizon. Keep your chin up!" << std::endl;
        std::cout << std::endl;
        std::cout << "We're all done now!" << std::endl;
        std::cout << "Goodbye and may your have the most wonderful of days!" << std::endl;
        std::cout << std::endl;
    } else if (day >= 10 && day < 20) {
        std::cout << "Welcome to CSCI 3010's fortune teller!" << std::endl;
        std::cout << "For all your most accurate fortunes!" << std::endl;
        std::cout << std::endl;
        std::cout << "You've made it to the middle of the month! There's something going right here..." << std::endl;
        std::cout << std::endl;
        std::cout << "We're all done now!" << std::endl;
        std::cout << "Goodbye and may your have the most wonderful of days!" << std::endl;
        std::cout << std::endl;
    } else if (day >= 20 && day < 30) {
        std::cout << "Welcome to CSCI 3010's fortune teller!" << std::endl;
        std::cout << "For all your most accurate fortunes!" << std::endl;
        std::cout << std::endl;
        std::cout << "You deserve a break. Take yourself for a walk or a treat!" << std::endl;
        std::cout << std::endl;
        std::cout << "We're all done now!" << std::endl;
        std::cout << "Goodbye and may your have the most wonderful of days!" << std::endl;
        std::cout << std::endl;
    } else if (day >= 30 && day <= 31) {
        std::cout << "Welcome to CSCI 3010's fortune teller!" << std::endl;
        std::cout << "For all your most accurate fortunes!" << std::endl;
        std::cout << std::endl;
        std::cout << "Today just isn't a good day for fortune telling. You're on your own!" << std::endl;
        std::cout << std::endl;
        std::cout << "We're all done now!" << std::endl;
        std::cout << "Goodbye and may your have the most wonderful of days!" << std::endl;
        std::cout << std::endl;
    }
}
